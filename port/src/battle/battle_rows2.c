/* FF4 source-port — battle/battle_rows2.c
 *
 * Battle row helpers the row machine deck calls most (row_open2/sync
 * chains, the window-0x100 prep, the pad-43 pair). Exact mirrors.
 *
 * Ground truth: src/func_8011EA5C.c, 801224D0, 8011EF30, 8011FBA4,
 * 8017F8F8 (byte-verified).
 */
#include <stdint.h>
#include "ff4_window.h"

uint32_t wnd_fx_7d();

extern uint8_t *D_800D0000;

extern void func_8011F030(void);
extern void func_8011FD34(void);
extern void func_8017FA2C(void);
extern void func_80181604(void);

/* 8011EA5C: the wnd-fx 0x7d trigger (alias wrapper). */
void battle_wndfx_run(void)
{
    wnd_fx_7d();
}

/* 801224D0: put pad 0x43 then page it. */
void battle_put43(void)
{
    cell_put(0x43);
    page(0x43);
}

/* 8011EF30: cell-state row sync chain. */
void battle_rows_sync(void)
{
    cell_state();
    row_sync();
    row_open2();
    row_pad();
    row_pad();
    func_8011F030();
    row_done();
}

/* 8011FBA4: the 0x29/0x100 window row prep + position pair. */
void battle_rows_29(void)
{
    row_open2();
    row_open3();
    row_open();
    wnd_open(0x100);
    row_open();
    cell_cursor_read();
    row_pad();
    row_prep(0x20);
    sep_a();
    cell_pos_fwd2(cell_addr16(0x29));
    row_prep_close(0x20);
    func_8011FD34();
}

/* 8017F8F8: battle-mode fan-out (rows vs fx by pad-latch/7 test). */
void battle_mode_dispatch(uint32_t a0, uint16_t a1, uint16_t a2, int16_t a3)
{
    if (a3 >= 0 && ((*(uint8_t *)(uintptr_t)(D_800D0000 + 0x2105)) & 7) == 7)
        func_8017FA2C();
    else
        func_80181604();
}