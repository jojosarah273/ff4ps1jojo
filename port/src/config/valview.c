/* FF4 source-port — interpreted module for func_8015D9A8.
 * Ground truth: src/func_8015D9A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015D9A8(void)
{
    /* options main: gates on (v1/v0) branches with 8005A234 +
       80152CDC/8016E870; L15DA08 detail loop, L15DBA0/L15DC2C
       refresh loops, 80150C38 icon rows (codes 5/0x10/2/0x11/0xC). */
    cell_state_of();
    cell_state_of();
    cell_state(0x2000);
    if (cell_state_of() == 0)
        goto L15DB4C;
    func_8005A234();
L15da08:
    for (;;) {
        if (options_rows_run() != 0)
            break;
    L15da1c:
        /* v1/v0 gate -> L15DA08 */
        func_80061C8C();
        latch(5);
        gpu_driver_run_b();
        func_80059AF4();
        latch(0x10);
        gpu_driver_run_b();
        latch(2);
        gpu_driver_run_b();
        break;
    }
    return;
L15DB4C:
    func_8005A234();
    options_x2000_x2003_x2004_gates_x3();
    /* v1/v0 + v0/v1 gates -> L15DC6C */
    func_8005A234();
L15dba0:
    for (;;) {
        row_open();
        row_sync();
        row_done();
        row_close();
    L15dc2c:
        for (;;) {
            row_prep(0x20);
            sep();
            row_prep_close();
            if (cell_state_of() == 0)
                continue;
            break;
        }
        func_80061C8C();
        func_80059AF4();
        /* s1/v0 gate -> L15DBA0 */
        break;
    }
L15DC6C:
    latch(0x11);
    gpu_driver_run_b();
    latch(0xC);
    gpu_driver_run_b();
    return;
}
