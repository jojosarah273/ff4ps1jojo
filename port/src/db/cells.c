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

#include "ff4_state.h"

/* ------------------------------------------------------------------ */
/* exported state (was raw PS1 cells)                                  */
/* ------------------------------------------------------------------ */
uint8_t  g_scratch[0x400];       /* 0x1F8003C0 scratch pad (low bytes) */
uint8_t  g_vram_[0x10000];       /* host backing for the 800D/800C bank */
uint8_t *D_800D0000 = &g_vram_[0x0000];   /* main catalog bank          */
uint8_t *D_800C8000 = &g_vram_[0x8000];   /* pos-hi side bank           */
uint16_t D_8019ED44;             /* position counter (u16)             */
uint16_t D_8019ED48;             /* cursor-table word (u16)            */
uint16_t D_8019ED4C;             /* cell cursor word                   */
uint32_t D_8019ED50;             /* merged cell word                   */
uint16_t D_8019ED54;             /* delta register (u16)               */
uint16_t D_8019ED58;             /* base index register (u16)          */
uint8_t  D_8019ED5C[2];          /* aux status bytes                  */
uint8_t  D_8019ED60[2];          /* cell-pair source bytes             */
uint8_t  D_8019ED68;             /* cursor-show mask byte              */
uint8_t  g_tick[2];              /* ticker byte pair D_8019ED40 points */
uint8_t *D_8019ED40 = g_tick;

uint32_t catalog_base(uint32_t a0);

/* typed view over the cell register file (see ff4_state.h) */
void menu_cell_read(menu_cell_state_t *st)
{
    st->ticker = (uint32_t)*D_8019ED40;
    st->pos    = (uint32_t)D_8019ED44;
    st->cursor = (uint32_t)D_8019ED4C;
    st->cell   = D_8019ED50;
    st->delta  = (uint32_t)D_8019ED54;
    st->mask   = (uint32_t)D_8019ED68;
}

void menu_cell_apply(const menu_cell_state_t *st)
{
    *D_8019ED40 = (uint8_t)st->ticker;
    D_8019ED44  = (uint16_t)st->pos;
    D_8019ED4C  = (uint16_t)st->cursor;
    D_8019ED50  = st->cell;
    D_8019ED54  = (uint16_t)st->delta;
    D_8019ED68  = (uint8_t)st->mask;
}

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