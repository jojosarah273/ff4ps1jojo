/* FF4 source-port — interpreted module for func_80151C0C.
 * Ground truth: src/func_80151C0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80151C0C(void)
{
    /* options row: 0x39F0 text read; v1/v0 gate tree dispatches
       8015BB9C / 8005A424 / 8015E84C / 8015D1C8. */
    txt_set(0x352E);
    row_sel_cell_cur();
    /* v1/v0 gates -> L151CA0 / L151C74 / L151CC8 */
    func_8015BB9C();
    return;
L151CA0:
    func_8005A424();
    return;
L151CB0:
    func_8015E84C();
    return;
L151CC0:
    func_8015D1C8();
    return;
L151CC8:
    return;
}
