/* FF4 source-port — db/cellstore.c
 *
 * The scratch<->cell copy family (scratch 0x1F8003C8 tag byte, the
 * 0x08/0x09 status bytes, and the catalog-bank cells). These are the
 * "stamp" primitives the text/status layer calls to move bytes between
 * the scratch pad and the 0x800D bank.
 *
 * Exact asm-order mirrors (reloads kept). The fn-address-as-bank quirk
 * (p = (u8*)catalog_base) mirrors the Phase A source literally; when
 * the text layer maps the real catalog, these bind to g_vram_.
 *
 * Ground truth: src/cell_pull_c8.c, 8F74, 8F94, 6C68, 6D70, 66D8,
 * 81E8, 885C, 82EC, 8274, 81B0, 87DC, 89D4, 658C, 6CF4, 6BE0, 6DE8,
 * 65F0, 6EA8, 65C8, 67FC, 6E30, 6764, 8378, 8E50 (byte-verified).
 */
#include <stdint.h>

extern uint8_t  g_scratch[];
extern uint16_t D_8019ED4C;
extern uint32_t D_8019ED50;
extern uint16_t D_8019ED58;
extern uint8_t  D_8019ED60[2];
extern uint8_t *D_800D0000;

uint32_t catalog_base();
uint32_t cell_addr16();
uint32_t cell_add16();
uint32_t cell_bank_sel();

/* 800F8960: *arg = scratch tag byte (0x1F8003C8). */
void cell_pull_c8(uint8_t *q)
{
    *q = g_scratch[0x08];           /* 0x1F8003C8 */
}

/* 800F8F74: bank base byte = 0 (cells store a 0 at the current slot). */
void cell_clear_bank(void)
{
    ((volatile uint8_t *)catalog_base())[0] = (uint8_t)0;
}

/* 800F8F94: two bank base bytes = 0. */
void cell_clear_bank2(void)
{
    uint8_t *p = (uint8_t *)catalog_base();
    p[0] = 0;
    p[1] = 0;
}

/* 800F6C68: scratch tag = cell_byte(add16() + a0). */
void cell_push_c8(uint32_t a0)
{
    g_scratch[0x08] = ((volatile uint8_t *)(cell_add16() + a0))[0];
}

/* 800F6D70: scratch tag = bank byte at (base(ed58+a0)). */
void cell_push_c8_d58(uint32_t a0)
{
    g_scratch[0x08] = *(volatile uint8_t *)catalog_base((uint32_t)D_8019ED58 + a0);
}

/* 800F66D8: scratch tag = bank byte at (sel(a0) base + a0). */
void cell_push_c8_sel(uint32_t a0)
{
    g_scratch[0x08] = ((volatile uint8_t *)(catalog_base(cell_bank_sel((uint16_t)a0)) + a0))[0];
}

/* 800F81E8: low bank cell = scratch tag. */
uint32_t cell_pull_c8_lo(void)
{
    return (((volatile uint8_t *)cell_add16(0, 1))[0] = g_scratch[0x08]);
}

/* 800F885C: bank cell (add16() + a0) = scratch tag. */
uint32_t cell_pull_c8_off(uint32_t a0, uint32_t a1)
{
    return (((volatile uint8_t *)(cell_add16() + a0))[0] = g_scratch[0x08]);
}

/* 800F82EC: bank cell (sel(a0)+a0) = scratch tag. */
uint32_t cell_pull_c8_bank(uint32_t a0, uint32_t a1)
{
    return (((volatile uint8_t *)(catalog_base(cell_bank_sel((uint16_t)a0)) + a0))[0] =
            g_scratch[0x08]);
}

/* 800F8274: cell_addr16(a0)[1] = scratch byte 0x09. */
uint32_t cell_put_hi9(uint32_t a0)
{
    return (((volatile uint8_t *)cell_addr16(a0))[1] =
            (uint8_t)g_scratch[0x09]);
}

/* 800F81B0: arg[1] = scratch byte 0x09. */
void cell_pull9_hi(uint8_t *p)
{
    p[1] = g_scratch[0x09];
}

/* 800F87DC: bank base bytes = scratch 0x08/0x09 (fn-addr quirk kept). */
void cell_stamp8_9(void)
{
    uint8_t *p = (uint8_t *)catalog_base;
    p[0] = g_scratch[0x08];
    p[1] = g_scratch[0x09];
}

/* 800F89D4: same stamp, second slot (fn-addr quirk kept). */
void cell_stamp8_9_b(void)
{
    uint8_t *p = (uint8_t *)catalog_base;
    p[0] = g_scratch[0x08];
    p[1] = g_scratch[0x09];
}

/* 800F658C: scratch 0x09 = arg[1]. */
void cell_push9(uint8_t *p)
{
    g_scratch[0x09] = p[1];
}

/* 800F6CF4: scratch 0x09 = bank cell (add16() + a1)[1] (fn-addr quirk). */
uint32_t cell_push9_bank(uint32_t a0, uint32_t a1)
{
    return (g_scratch[0x09] =
            ((volatile uint8_t *)(cell_add16() + a1))[1]);
}

/* 800F6BE0: scratch 0x00/0x01 = bank base bytes (fn-addr quirk). */
void cell_sink89(void)
{
    uint8_t *p = (uint8_t *)catalog_base;
    g_scratch[0x00] = p[0];
    g_scratch[0x01] = p[1];
}

/* 800F6DE8: same sink as 6BE0 (aliased id). */
void cell_sink89_c(void)
{
    uint8_t *p = (uint8_t *)catalog_base;
    g_scratch[0x00] = p[0];
    g_scratch[0x01] = p[1];
}

/* 800F65F0: scratch 0x00/0x01 = add16-fn base bytes (fn-addr quirk). */
void cell_sink89_d(void)
{
    uint8_t *p = (uint8_t *)cell_add16;
    g_scratch[0x00] = p[0];
    g_scratch[0x01] = p[1];
}

/* 800F6EA8: scratch tag = bank byte at (b4(a0)+0). */
void cell_push_c8_b4(uint32_t a0)
{
    g_scratch[0x08] = ((volatile uint8_t *)(cell_add16(cell_bank_sel((uint16_t)a0) + 0, 1)))[0];
}

/* 800F65C8: scratch tag = low bank byte (add16(0,1)). */
void cell_push_c8_cur(void)
{
    g_scratch[0x08] = ((volatile uint8_t *)cell_add16(0, 1))[0];
}

/* 800F67FC: scratch tag = bank byte at (b4(a0) + a0). */
void cell_push_c8_b4o(uint32_t a0)
{
    g_scratch[0x08] = ((volatile uint8_t *)(cell_add16(cell_bank_sel((uint16_t)a0)) + a0))[0];
}

/* 800F6E30: scratch tag = bank byte at (sel(a0) base). */
void cell_push_c8_lo(uint32_t a0)
{
    g_scratch[0x08] = ((volatile uint8_t *)catalog_base(cell_bank_sel((uint16_t)a0)))[0];
}

/* 800F6764: scratch 0x08/0x09 = bank bytes at (sel(a0) + a1). */
uint32_t cell_push89_sel(uint32_t a0, uint32_t a1, uint32_t a2)
{
    g_scratch[0x08] = ((volatile uint8_t *)(catalog_base(cell_bank_sel((uint16_t)a0)) + a1))[0];
    return (g_scratch[0x09] = ((volatile uint8_t *)(catalog_base(cell_bank_sel((uint16_t)a0)) + a1))[1]);
}

/* 800F8378: bank cell (sel(a0)+a0)[0..1] = scratch 0x08/0x09. */
uint32_t cell_pull89_bank(uint32_t a0, uint32_t a1)
{
    ((volatile uint8_t *)(catalog_base(cell_bank_sel((uint16_t)a0)) + a0))[0] = g_scratch[0x08];
    return (((volatile uint8_t *)(catalog_base(cell_bank_sel((uint16_t)a0)) + a0))[1] =
            g_scratch[0x09]);
}

/* 800F8E50: bank base bytes = D_8019ED60 pair. */
uint32_t cell_pull60(void)
{
    ((volatile uint8_t *)catalog_base())[0] = D_8019ED60[0];
    return (((volatile uint8_t *)catalog_base())[1] = D_8019ED60[1]);
}
/* 800F6A78: scratch tag = bank byte at (cell_addr16(a0) + a0). */
void cell_push_c8_c2(uint32_t a0)
{
    g_scratch[0x08] = ((volatile uint8_t *)(cell_addr16(a0) + a0))[0];
}

/* 800F8A18: cell(sel(a0))[0] = scratch tag. */
uint32_t cell_pull_c8_sel2(uint32_t a0)
{
    return (((volatile uint8_t *)catalog_base(cell_bank_sel((uint16_t)a0)))[0] =
            g_scratch[0x08]);
}

/* 800F88E4: fn-addr cell bytes = scratch 0x08/0x09 (quirk kept). */
void cell_pull89_fn(void)
{
    uint8_t *p = (uint8_t *)cell_add16;
    p[0] = g_scratch[0x08];
    p[1] = g_scratch[0x09];
}

/* 800F7534: cell-pair source = bank base bytes. */
uint32_t cell_push60(void)
{
    ((volatile uint8_t *)&D_8019ED60[0])[0] = ((volatile uint8_t *)catalog_base())[0];
    return (((volatile uint8_t *)&D_8019ED60[0])[1] = ((volatile uint8_t *)catalog_base())[1]);
}
