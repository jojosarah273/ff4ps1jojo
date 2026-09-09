/* FF4 source-port — db/catalogs.c
 *
 * Catalog base/offset machines (the 0x800Dxxxx "menu VRAM" layer under
 * the window API). Every screen the config/battle menus touch goes
 * through these cells: the bank tag byte at scratch 0x1F8003D2 selects
 * the catalog base, and an offset above 0x7FFF falls back to the saved
 * bank pointer (scratch 0x1F8003C0 >> 1).
 *
 * Ground truth: src/catalog_base.c, src/cell_addr16.c,
 *              src/cell_read32.c, src/cell_window.c
 *              (byte-verified; asm order mirrored 1:1).
 */
#include <stdint.h>

/* exported state (was raw PS1 cells) */
extern uint8_t g_scratch[];
extern uint16_t D_8019ED4C;     /* cell cursor word */

/* 800F3B04: catalog base + offset. */
uint32_t catalog_base(uint32_t a0)
{
    uint8_t v = g_scratch[0x12];        /* 0x1F8003D2 bank tag */
    if (v == 0x7E) {
        if (a0 < 0x2000)
            return 0x800D0000 + a0;
        return 0x800D2400 + a0;
    }
    if (v < 0x7F) {
        if (v == 0x70)
            return 0x800D2200 + a0;
        if (0x7FFF < (int32_t)a0)
            return 0x7FFC8000 + ((*(volatile uint32_t *)&g_scratch[0]) >> 1) + a0;
        return 0x800D0000 + a0;
    }
    if (v == 0x7F)
        return 0x800E2400 + a0;
    if (0x7FFF < (int32_t)a0)
        return 0x7FFC8000 + ((*(volatile uint32_t *)&g_scratch[0]) >> 1) + a0;
    return 0x800D0000 + a0;
}

/* 800F3C3C: menu-cell address from the scratch cursor offset. */
uint32_t cell_addr16(uint32_t a0)
{
    uint32_t v = (uint16_t)(*(volatile uint16_t *)&g_scratch[0x10]) + (uint16_t)a0;
    uint32_t base = 0x7FFC8000u;
    if (!((int32_t)0x7FFF < (int32_t)v))
        base = 0x800D0000u;
    return base + v;
}

/* 800F3C6C: 32-bit cell read at (offset a0 mapped to a base). */
uint32_t cell_read32(uint32_t a0)
{
    uint32_t base = 0x7FFC8000u;
    if (!((int32_t)0x7FFF < (int32_t)a0))
        base = 0x800D0000u;
    return *(uint32_t *)(base + a0);
}

/* 800F3C94: window base for cursor value v (position word + a0). */
uint32_t cell_window(uint32_t a0)
{
    uint32_t v = (uint32_t)D_8019ED4C + a0;
    uint32_t base = 0x7FFC8000u;
    if (!((int32_t)0x7FFF < (int32_t)v))
        base = 0x800D0000u;
    return base;
}