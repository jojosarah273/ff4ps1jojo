/* FF4 source-port — interpreted module for func_8014AF74.
 * Ground truth: src/func_8014AF74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014AF74(void)
{
    /* battle rows: 0x34C5/0x34C4/0x49 texts; gates 6434(2) route
       801420D4 vs the 8014B9B4/8014B044 row block. */
    txt_set(0x34C5);
    if (gate(2) != 0)
        goto L14AFA4;
    func_801420D4();
    return;
L14AFA4:
    txt_set(0x3522);
    if (gate(2) != 0)
        return;
    func_8014B9B4();
    txt_set(0x34C4);
    func_800F9200();
    txt_draw(0x34C4);
    txt_set(0x49);
    func_800F9200();
    func_8014B044();
    func_801420D4();
    row_close2();
    txt_draw(0x49);
    row_close2();
    txt_draw(0x34C4);
    return;
}
