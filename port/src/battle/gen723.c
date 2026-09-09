/* FF4 source-port — interpreted module for func_8014AC3C.
 * Ground truth: src/func_8014AC3C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014AC3C(void)
{
    /* battle call: 8014C96C/8014B9B4/8013E5D0/8013E2F8/8014BA34
       rows; 0x34C4/0x34C5 texts with 6434(2) gates. */
    func_8014C96C();
    latch(3);
    txt_draw_cur();
    latch(0xF);
    cell_put(4);
    func_8013E5D0();
    func_800F8F74();
    latch(1);
    func_8014B9B4();
    txt_set(0x34C4);
    txt_draw_cur();
    txt_set(0x34C5);
    if (gate(2) != 0)
        goto L14ACBC;
    func_8013E2F8();
L14ACBC:
    func_800F8F74();
    txt_set(0x34C4);
    txt_draw_cur();
    func_8014BA34();
    txt_set(0x3523);
    if (gate(2) != 0)
        return;
    func_8013E2F8();
    return;
}
