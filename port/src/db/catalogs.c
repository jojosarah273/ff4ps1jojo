/* FF4 source-port — db/catalogs.c
 *
 * Catalog base/offset machines (the 0x800Dxxxx "menu VRAM" layer under
 * the window API). Every screen the config/battle menus touch goes
 * through these cells: the bank tag byte at scratch 0x1F8003D2 selects
 * the catalog base, and an offset above 0x7FFF falls back to the saved
 * bank pointer (scratch 0x1F8003C0 >> 1).
 *
 * HOST MAPPING: on the PS1 these return CPU addresses (0x800D0000..)
 * that are dereferenced immediately. On the host the bank regions are
 * unified into the g_vram_ sim: every returned value is a pointer into
 * g_vram_ (bank region selected by the same branch ladder, placed by
 * the & 0x1FFFF mask). Behavior of the *selection* is the 1:1 mirror;
 * only the final address space differs (documented in ARCHITECTURE.md).
 *
 * Ground truth: src/func_800F3B04.c, src/func_800F3C3C.c,
 *              src/func_800F3C6C.c, src/func_800F3C94.c
 *              (byte-verified; branch order mirrored 1:1).
 */
#include <stdint.h>

/* exported state (was raw PS1 cells) */
extern uint8_t g_vram_[];
extern uint8_t g_scratch[];
extern uint16_t D_8019ED4C;     /* cell cursor word */

#define VRAM_MASK 0x1FFFFu

/* host pointer for a PS1 catalog address (bank placed into g_vram_) */
static uint32_t vram_host(uint32_t ps1_addr)
{
    return (uint32_t)(uintptr_t)(g_vram_ + (ps1_addr & VRAM_MASK));
}

/* exported wrapper for the register-machine mirrors that build
 * catalog addresses out of raw arithmetic (cell_add16 + offsets). */
uint32_t catalog_addr(uint32_t ps1_addr)
{
    return vram_host(ps1_addr);
}

/* 800F3B04: catalog base + offset. */
uint32_t catalog_base(uint32_t a0)
{
    uint8_t v = g_scratch[0x12];        /* 0x1F8003D2 bank tag */
    if (v == 0x7E) {
        if (a0 < 0x2000)
            return vram_host(0x800D0000 + a0);
        return vram_host(0x800D2400 + a0);
    }
    if (v < 0x7F) {
        if (v == 0x70)
            return vram_host(0x800D2200 + a0);
        if (0x7FFF < (int32_t)a0)
            return vram_host(0x7FFC8000 + ((*(volatile uint32_t *)&g_scratch[0]) >> 1) + a0);
        return vram_host(0x800D0000 + a0);
    }
    if (v == 0x7F)
        return vram_host(0x800E2400 + a0);
    if (0x7FFF < (int32_t)a0)
        return vram_host(0x7FFC8000 + ((*(volatile uint32_t *)&g_scratch[0]) >> 1) + a0);
    return vram_host(0x800D0000 + a0);
}

/* 800F3C3C: menu-cell address from the scratch cursor offset. */
uint32_t cell_addr16(uint32_t a0)
{
    uint32_t v = (uint16_t)(*(volatile uint16_t *)&g_scratch[0x10]) + (uint16_t)a0;
    uint32_t base = 0x7FFC8000u;
    if (!((int32_t)0x7FFF < (int32_t)v))
        base = 0x800D0000u;
    return vram_host(base + v);
}

/* 800F3C6C: 32-bit cell read at (offset a0 mapped to a base). */
uint32_t cell_read32(uint32_t a0)
{
    uint32_t base = 0x7FFC8000u;
    if (!((int32_t)0x7FFF < (int32_t)a0))
        base = 0x800D0000u;
    return *(uint32_t *)(uintptr_t)vram_host(base + a0);
}

/* 800F3C94: window base for cursor value v (position word + a0). */
uint32_t cell_window(uint32_t a0)
{
    uint32_t v = (uint32_t)D_8019ED4C + a0;
    uint32_t base = 0x7FFC8000u;
    if (!((int32_t)0x7FFF < (int32_t)v))
        base = 0x800D0000u;
    return vram_host(base);
}