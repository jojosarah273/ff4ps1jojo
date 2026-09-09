/* FF4 source-port — db/flags.c
 *
 * The show-flag machines (D_8019ED68): compares, equality tests and
 * repacks that decide cursor visibility/labels from the cell state.
 * Exact asm-order mirrors.
 *
 * Ground truth: src/func_800F56AC.c, 5520, 55C0, 4FAC, 7728, 7170,
 * 7A68, 7D0C, 76E8, 63F8, 54B8, 7918, 3A70 (byte-verified).
 */
#include <stdint.h>

extern uint8_t *D_8019ED40;
extern uint16_t D_8019ED44;
extern uint32_t D_8019ED50;
extern uint16_t D_8019ED54;
extern uint8_t  D_8019ED5C[2];
extern uint8_t  D_8019ED68;
extern uint8_t  g_scratch[];

/* 800F56AC: cell = *a0; flags compare cell vs delta. */
void cell_flags_cmp(uint8_t *a0)
{
    D_8019ED50 = *a0;
    D_8019ED68 &= 0x7C;
    if ((uint8_t)D_8019ED50 == (uint8_t)D_8019ED54)
        D_8019ED68 |= 0x3;
    else if ((uint8_t)D_8019ED50 < (uint8_t)D_8019ED54)
        D_8019ED68 |= 0x80;
    else
        D_8019ED68 |= 0x1;
}

/* 800F5520: flags compare pos vs *a0. */
void cell_flags_cmp_pos(uint8_t *a0)
{
    uint8_t r = (uint8_t)(D_8019ED68 & 0x7C);
    if (D_8019ED44 == *a0)
        r |= 0x3;
    else if (D_8019ED44 < *a0)
        r |= 0x80;
    else
        r |= 0x1;
    D_8019ED68 = r;
}

/* 800F55C0: flags compare pos vs a0 (fresh mask). */
void cell_flags_cmp3(uint16_t a0)
{
    uint8_t f = 0;
    uint8_t x = D_8019ED68;
    if (D_8019ED44 == a0)
        f = 0x3;
    else if (D_8019ED44 < a0)
        f = 0x80;
    else
        f = 0x1;
    D_8019ED68 = (uint8_t)((x & 0x7C) | f);
}

/* 800F4FAC: flags: cell==0 -> |1 else keep. */
void cell_flags_zero50(void)
{
    uint8_t x = D_8019ED68;
    uint8_t r = (uint8_t)((x & 0x7C) | (D_8019ED50 & 0xFF));
    if (D_8019ED50 == 0)
        r = (uint8_t)((x & 0x7C) | 0x1);
    else
        r &= 0xFF;
    D_8019ED68 = r;
}

/* 800F7728: flags: cell!=0 -> |2 else keep. */
void cell_flags_nz50(void)
{
    uint8_t x = D_8019ED68;
    uint8_t r = (uint8_t)((x & 0x7C) | (D_8019ED50 & 0xFF));
    if (D_8019ED50 != 0)
        r = (uint8_t)((x & 0x7C) | 0x2);
    else
        r &= 0xFF;
    D_8019ED68 = r;
}

/* 800F7170: flags repack from delta/aux (identical branches kept). */
void cell_flags_pack(void)
{
    if ((uint16_t)*(volatile uint8_t *)(&D_8019ED54) != 0)
        D_8019ED68 = (uint8_t)(((D_8019ED68 & 0x7D) |
                                (D_8019ED5C[1] & 0x80)) & 0xFF);
    else
        D_8019ED68 = (uint8_t)(((D_8019ED68 & 0x7D) |
                                (D_8019ED5C[1] & 0x80)) & 0xFF);
}

/* 800F7A68: flags repack from cell word. */
void cell_flags_pack2(void)
{
    uint8_t x = D_8019ED68;
    uint8_t r = (D_8019ED50 & 0x100) ? (uint8_t)((x & 0x7C) | 1) : (uint8_t)(x & 0x7C);
    uint8_t v = (uint8_t)(r | ((uint8_t)D_8019ED50 & 0x80));
    if ((uint8_t)D_8019ED50 != 0)
        r = (uint8_t)(v & 0xFF);
    else
        r = (uint8_t)(v | 2);
    D_8019ED68 = r;
}

/* 800F7D0C: flags repack: cell bit1; bit7 from cell hi; zero test. */
void cell_flags_pack3(void)
{
    uint8_t x = D_8019ED68;
    uint8_t r = (uint8_t)((x & 0x7C) | ((uint8_t)D_8019ED50 & 0x1));
    r = (D_8019ED50 & 0x100) ? r : (uint8_t)(r | 0x80);
    if (D_8019ED50 == 0)
        r &= 0xFF;
    else
        r |= 0x2;
    D_8019ED68 = r;
}

/* 800F76E8: flags: cell&0xFE==0 -> |2 else keep. */
void cell_flags_repack(void)
{
    uint8_t x = D_8019ED68;
    uint8_t r = (uint8_t)((x & 0x7C) | (D_8019ED50 & 0xFF));
    if ((D_8019ED50 & 0xFE) == 0)
        r = (uint8_t)(r | 0x2);
    else
        r &= 0xFF;
    D_8019ED68 = r;
}

/* 800F63F8: flags from scratch bytes (status + tag). */
void cell_flags_scr(void)
{
    uint8_t x = g_scratch[0x13];
    uint8_t y = g_scratch[0x08];
    uint8_t r = (uint8_t)((x & 0x7D) | (y & 0x80));
    if (y != 0)
        r &= 0xFF;
    else
        r |= 0x2;
    D_8019ED68 = r;
}

/* 800F54B8: flags |= 4. */
void cell_flags_set4(void)
{
    D_8019ED68 |= 0x4;
}

/* 800F7918: ticker reblend (alias of 800F4120 shape). */
void ticker_reblend2(void)
{
    uint8_t x = D_8019ED68;
    uint8_t r = (uint8_t)((x & 0x7D) | (*D_8019ED40 & 0xFF));
    if (*D_8019ED40 != 0)
        r = (uint8_t)((x & 0x7D) | 0x2);
    else
        r &= 0xFF;
    D_8019ED68 = r;
}

/* 800F3A70: bank-select gate ladder (documented stub: the asm routes
 * on the saved-bank tag; no C-level flow is recoverable). Interpreted
 * in a later pass when the dispatch lanes are mapped. */
uint32_t cell_bank_sel(uint32_t a0, uint32_t a1, uint32_t a2)
{
    (void)a0; (void)a1; (void)a2;
    return 0;
}
/* 800F9690: delta = pos. */
void cell_cur_save54(void)
{
    D_8019ED54 = D_8019ED44;
}
