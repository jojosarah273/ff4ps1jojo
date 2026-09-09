/* FF4 source-port — interpreted module for func_80150610.
 * Ground truth: src/func_80150610.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80150610(void)
{
    /* battle rows: 0x3FF/0x2/0xC windows, 8007411C row. */
    row_prep(0x20);
    func_800F6CF4();
    func_800F4264(0x3FF);
    row_arm_s_cur();
    func_800F6CF4();
    sep();
    row_prep_close();
    wnd_open(2);
    tail_cur();
    wnd_open_cur();
    latch(0xC);
    func_8007411C();
    return;
}
