/* FF4 source-port — interpreted module for func_8012E264.
 * Ground truth: src/func_8012E264.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern void func_801267A0(void);



extern void func_8012E1C0(void);


extern void func_8012E758(void);


void func_8012E264(void) {
    animation_row_310();
    func_801267A0();
    latch(0x30);
    cell_put(0xC1);
    row_page(0xD9);
    cell_put(0x1D);
    func_8012E1C0();
    row_info(0x1F);
    row_info(0xD5);
    open_row(0x1E);
    config_row_1d();
    row_page(0xDA);
    cell_put(0x1D);
    func_8012E1C0();
    row_info(0x1F);
    row_info(0xD7);
    open_row(0x1E);
    config_row_1d();
    row_page(0xD9);
    func_8012E758();
    row_page(0xDA);
    func_8012E758();
    midrow_pad88_run();
    battle_state_dc400();;
}
