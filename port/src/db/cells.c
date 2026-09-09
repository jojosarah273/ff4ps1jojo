/* FF4 source-port — db/cells.c
 *
 * The raw cell bank + cursor/mask state the whole window layer reads.
 * The bank lives at 0x800D0000..0x800E2FFF in the PS1 (mapped into a
 * host buffer here - g_vram_). The ticker byte (D_8019ED40), cursor
 * word (D_8019ED4C), mask byte (D_8019ED68), and merge cell
 * (D_8019ED50) follow the Phase A rolodex. The D_* names are kept as
 * the real global symbols so the rest of the deck binds here instead
 * of to link-time stubs.
 *
 * Ground truth: src/cell_merge.c (byte-verified; asm order mirrored).
 */
#include <stdint.h>

/* ------------------------------------------------------------------ */
/* exported state (was raw PS1 cells)                                  */
/* ------------------------------------------------------------------ */
uint8_t  g_scratch[0x400];       /* 0x1F8003C0 scratch pad (low bytes) */
uint8_t  g_vram_[0x800];         /* host backing for the 800D bank     */
uint16_t D_8019ED4C;             /* cell cursor word                   */
uint32_t D_8019ED50;             /* merged cell word                   */
uint8_t  D_8019ED68;             /* cursor-show mask byte              */
uint8_t  g_ticker_byte;          /* the byte D_8019ED40 points at      */
uint8_t *D_8019ED40 = &g_ticker_byte;

uint32_t catalog_base(uint32_t a0);

/* ------------------------------------------------------------------ */
/* 800F3CC4: merge two bank bytes into the cell word, then add the    */
/* caller's delta (catalog callback + offset).                         */
/* ------------------------------------------------------------------ */
int32_t cell_merge(uint32_t a0, int32_t a1)
{
    uint32_t base = 0x7FFC8000;
    if (0x7FFF < (uint32_t)(D_8019ED4C + a0))
        base = 0x800D0000;
    D_8019ED50 = *(volatile uint8_t *)base;
    D_8019ED50 |= (uint32_t)(*(volatile uint8_t *)(base + 1)) << 8;
    return (int32_t)catalog_base(D_8019ED50) + a1;
}