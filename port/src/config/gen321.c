/* FF4 source-port — interpreted module for func_80124F60.
 * Ground truth: src/func_80124F60.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124F60(void)
{
    /* equip cell: 0x43/0x29/0x41 rows, 0xDB/0x34/0x45 windows, 801245B4
       in the L125068 loop; 78C4(3C3C(0x34)) cells, 5DA0(0x45)/5B8C
       latch. */
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x29);
    sep_a();
    func_800F4064(0x40);
    func_800F8274(0x1D);
    row_read2(0x43);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x43));
    row_prep_close();
    row_done();
    func_800F6C68();
    func_800F82EC(0x1D);
    step2();
    row_page(0xDB);
    func_800F78C4(cell_state(0x34));
    func_800F82EC(0x29);
    func_800F82EC(0x1D);
    step2();
    cell_step();
    latch(8);
    cell_put(0x45);
L125068:
    for (;;) {
        func_800F6C68();
        func_801245B4();
        func_800F82EC(0x29);
        stat_sync();
        func_800F82EC(0x1D);
        cell_step();
        step2();
        row_page(0xDB);
        func_800F78C4(cell_state(0x34));
        func_800F82EC(0x29);
        func_800F82EC(0x1D);
        step2();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_done();
    return;
}
