/* FF4 source-port — interpreted module for fn_1x2e264.
 * Ground truth: src/fn_1x2e264.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2e264(void) {
    animation_row_310();
    fn_1x267a0();
    latch(0x30);
    cell_put(0xC1);
    row_page(0xD9);
    cell_put(0x1D);
    rows_d0_x20_x20_windows();
    row_info(0x1F);
    row_info(0xD5);
    open_row(0x1E);
    config_row_1d();
    row_page(0xDA);
    cell_put(0x1D);
    rows_d0_x20_x20_windows();
    row_info(0x1F);
    row_info(0xD7);
    open_row(0x1E);
    config_row_1d();
    row_page(0xD9);
    fn_1x2e758();
    row_page(0xDA);
    fn_1x2e758();
    midrow_pad88_run();
    battle_state_dc400();;
}
