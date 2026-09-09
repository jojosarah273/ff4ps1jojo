/* FF4 source-port — db/cursor.c
 *
 * The cursor / position / ticker machines of the cell layer: the
 * registers the window API drives every frame (D_8019ED40 ticker byte,
 * D_8019ED44 position counter, D_8019ED4C cell cursor, D_8019ED50/54
 * cell/delta words, D_8019ED68 show-mask byte).
 *
 * Every function is an exact asm-order mirror (register reloads and
 * double stores kept).
 * Ground truth: src/cell_cursor_dec.c, 9410, 922C, 94B8, 4064, 3F94,
 * 8058, 7FCC, 4264, 7F48, 78C4, 7864, 7C6C, 4370, 5E48, 61E8, 76BC,
 * 7CC8, 62F0, 5DD4, 5D24 (byte-verified).
 */
#include <stdint.h>

extern uint8_t *D_8019ED40;
extern uint16_t D_8019ED44;
extern uint16_t D_8019ED48;
extern uint16_t D_8019ED4C;
extern uint16_t D_8019ED58;
extern uint32_t D_8019ED50;
extern uint16_t D_8019ED54;
extern uint8_t  D_8019ED68;
extern uint8_t *D_800D0000;
extern uint8_t *D_800C8000;

uint32_t cell_addr16();
uint32_t catalog_base();

/* 800F9200: bank[0] = ticker; cursor decrements. */
uint32_t cell_cursor_dec(void)
{
    uint16_t c = D_8019ED4C;
    D_800D0000[0] = (uint8_t)*D_8019ED40;
    return (D_8019ED4C = (uint16_t)(c - 1));
}

/* 800F9410: cursor += 2; pos = bank1 word (hi|lo). */
uint32_t cell_cursor_adv2(void)
{
    D_8019ED4C = (uint16_t)(D_8019ED4C + 2);
    return (D_8019ED44 = (uint16_t)(D_800D0000[1] | (D_800D0000[1] << 8)));
}

/* 800F922C: bank[0]=pos lo; pos hi written to the 0x800C8000 side bank
 * at the cursor line; cursor -= 2. */
uint32_t cell_cursor_ret2(void)
{
    uint16_t p = D_8019ED44;
    D_800D0000[0] = (uint8_t)p;
    D_800C8000[0x7FFF + D_8019ED4C] = (uint8_t)(p >> 8);
    return (D_8019ED4C = (uint16_t)(D_8019ED4C - 2));
}

/* 800F94B8: read the u16 table entry at bank+cursor, set flags,
 * advance cursor by 2. */
uint32_t cell_cursor_read(void)
{
    uint8_t f = D_8019ED68;
    uint16_t idx = D_8019ED4C;
    uint8_t *p = D_800D0000 + idx;
    uint16_t v = (uint16_t)(p[1] << 8) | p[2];
    if (v & 0x8000) {
        f &= 0x7D;
        f |= 0x80;
    }
    if (v == 0)
        f |= 2;
    D_8019ED48 = v;
    D_8019ED68 = f;
    D_8019ED4C = (uint16_t)(idx + 2);
    return idx + 2;
}

/* 800F4064: pos += a0 (+ parity); flags repacked; cell = pos. */
void cell_pos_fwd(uint32_t a0)
{
    uint8_t x = D_8019ED68;
    uint16_t a = (uint16_t)(D_8019ED44 + a0 + (x & 1));
    uint8_t r = (uint8_t)((x & 0x3E) | (D_8019ED40[1] & 0xC0));
    if (a & 0x10000)
        r |= 0x1;
    D_8019ED44 = a;
    D_8019ED68 = r;
    D_8019ED50 = a;
}

/* 800F3F94: pos += two-byte value (+ parity); flags repacked. */
void cell_pos_fwd2(uint8_t *a0)
{
    uint16_t a = (uint16_t)(D_8019ED44 + a0[0] + (a0[1] << 8) + (D_8019ED68 & 1));
    uint8_t r = (uint8_t)((D_8019ED68 & 0x3E) | (D_8019ED40[1] & 0xC0));
    if (a & 0x10000)
        r |= 1;
    D_8019ED44 = a;
    D_8019ED68 = r;
    D_8019ED50 = a;
}

/* 800F8058: ticker -= a0 (- invert parity); flags repacked. */
void cell_pos_back(uint32_t a0)
{
    uint8_t x = D_8019ED68;
    uint8_t a2 = (uint8_t)(*D_8019ED40 - a0 - ((x ^ 1) & 1));
    uint8_t a1 = (uint8_t)((x & 0x3C) | (a2 & 0xC0));
    uint8_t r = (a2 & 0x100) ? a1 : (uint8_t)(a1 | 1);
    if ((uint8_t)a2 != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    *D_8019ED40 = a2;
    D_8019ED50 = a2;
    D_8019ED68 = r;
}

/* 800F7FCC: pos -= u16 pair (with parity bit); returns the cell-word. */
uint32_t cell_pos_sub16(uint8_t *a0)
{
    uint16_t t = (uint16_t)(D_8019ED44 - (uint16_t)(a0[0] | (a0[1] << 8)) -
                            ((D_8019ED68 ^ 1) & 1));
    uint8_t f = (uint8_t)((D_8019ED68 & 0x3C) | (D_8019ED40[1] & 0xC0));
    D_8019ED44 = t;
    if (!(t & 0x10000))
        f |= 1;
    if ((uint16_t)t == 0)
        f |= 2;
    D_8019ED50 = t;
    D_8019ED68 = f;
    return D_8019ED50;
}

/* 800F4264: pos &= m. */
void cell_pos_mask(uint16_t m)
{
    D_8019ED44 &= m;
}

/* 800F7F48: ticker -= a0 (with parity); store D40/D50; flags; return
 * the cell-word value. */
uint32_t cell_tick_sub(uint8_t *a0)
{
    uint32_t t = (uint32_t)*D_8019ED40 - a0[0] - ((D_8019ED68 ^ 1) & 1);
    uint8_t f = (uint8_t)((D_8019ED68 & 0x3C) | (t & ~0x40));
    *D_8019ED40 = (uint8_t)t;
    if (!(t & 0x100))
        f |= 1;
    if ((t & 0xFF) == 0)
        f |= 2;
    D_8019ED50 = t;
    D_8019ED68 = f;
    return D_8019ED50;
}

/* 800F78C4: ticker |= *m. */
void cell_tick_or(uint8_t *m)
{
    *D_8019ED40 |= *m;
}

/* 800F7864: ticker >>= 1. */
uint32_t cell_tick_half(void)
{
    return (*D_8019ED40 = (uint8_t)(*D_8019ED40 >> 1));
}

/* 800F7C6C: ticker = (ticker << 1) + mask[0]; cell = same. */
uint32_t cell_tick_dbl(void)
{
    uint8_t v = (uint8_t)((*D_8019ED40 << 1) + (D_8019ED68 & 1));
    *D_8019ED40 = v;
    return (D_8019ED50 = v);
}

/* 800F4370: ticker &= a1. */
void cell_tick_and(uint32_t a1)
{
    *D_8019ED40 = (uint8_t)(*D_8019ED40 & a1);
}

/* 800F5E48: cell = delta. */
uint32_t cell_set50_from54(void)
{
    return (D_8019ED50 = D_8019ED54);
}

/* 800F61E8: cell = ticker. */
uint32_t cell_set50_from40(void)
{
    return (D_8019ED50 = (uint8_t)*D_8019ED40);
}

/* 800F76BC: cell = ticker-half (u8). */
uint32_t cell_word_half(void)
{
    return (D_8019ED50 = (uint8_t)((uint32_t)(uint8_t)D_8019ED50 >> 1));
}

/* 800F7CC8: cell = signed-half of cell. */
uint32_t cell_word_half_s(void)
{
    return (D_8019ED50 = (uint32_t)((int32_t)D_8019ED50 >> 1));
}

/* 800F62F0: cell at cursor+ id |= id, +1 (u16 merge into bank+cell). */
uint32_t cell_inc_cell(uint32_t a0)
{
    uint16_t v = (uint16_t)((uint8_t)((volatile uint8_t *)cell_addr16(a0))[0] | a0) + 1;
    ((volatile uint8_t *)cell_addr16(a0))[0] = (uint8_t)v;
    ((volatile uint8_t *)cell_addr16(a0))[1] = (uint8_t)(v >> 8);
    return (D_8019ED50 = v);
}

/* 800F5DD4: cell at cursor+ id |= id, -1 (u16 merge into bank+cell). */
uint32_t cell_dec_cell(uint32_t a0)
{
    uint16_t v = (uint16_t)((uint8_t)((volatile uint8_t *)cell_addr16(a0))[0] | a0) - 1;
    ((volatile uint8_t *)cell_addr16(a0))[0] = (uint8_t)v;
    ((volatile uint8_t *)cell_addr16(a0))[1] = (uint8_t)(v >> 8);
    return (D_8019ED50 = v);
}

/* 800F5D24: catalog byte - 1; cell = v. */
void cell_dec_bank(void)
{
    uint8_t *p = (uint8_t *)catalog_base();
    uint8_t v = (uint8_t)(*p - 1);
    *p = v;
    D_8019ED50 = v;
}
/* 800F4280: ticker &= a1 (alias shape of 800F4370). */
void cell_tick_and2(uint32_t a1)
{
    *D_8019ED40 = (uint8_t)(*D_8019ED40 & a1);
}

/* 800F5024: u16 pair at p <<= 1; cell = v. */
void cell_pair_dbl2(uint8_t *p)
{
    int32_t v = (int32_t)((int32_t)(p[0] | (p[1] << 8)) << 1);
    p[0] = (uint8_t)v;
    p[1] = (uint8_t)(v >> 8);
    D_8019ED50 = (uint32_t)v;
}

/* 800F7B40: u16 pair at a0 <<= 1 (+ parity); cell = v. */
uint32_t cell_pair_dbl(uint32_t a0, uint32_t a1, uint32_t a2)
{
    uint16_t v = (uint16_t)(((uint16_t)(((volatile uint8_t *)a0)[0] |
                                        ((volatile uint8_t *)a0)[1] << 8) << 1) +
                            (D_8019ED68 & 1));
    ((volatile uint8_t *)a0)[0] = (uint8_t)v;
    ((volatile uint8_t *)a0)[1] = (uint8_t)((int32_t)v >> 8);
    return (D_8019ED50 = v);
}

/* 800F5ECC: ticker ^= *m. */
void cell_tick_xor(uint8_t *m)
{
    *D_8019ED40 ^= *m;
}

/* 800F96E0: base-index register = pos. */
void cell_cur_save58(void)
{
    D_8019ED58 = D_8019ED44;
}
