/* FF4 source-port — interpreted module for func_80176C6C.
 * Ground truth: src/func_80176C6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80176C6C(void)
{
    /* shop row: 0x43 window; 4264(0x1FFF)/4064 + 4264(0xFFF)/4064
       (0x7F/0x7E7E) value cells. */
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    stat_sync();
    row_sel2_cur();
    func_800F922C();
    sep_a();
    func_800F4264(0x1FFF);
    sep_a();
    func_800F4064();
    func_800F9410();
    sep_a();
    func_800F4264(0xFFF);
    sep_a();
    func_800F4064(0x7F);
    row_sync2_cur();
    func_800F3D64(0x7E7E);
    row_prep_close();
    return;
}
