/* FF4 source-port — interpreted module for func_800FD718.
 * Ground truth: src/func_800FD718.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FD718(void)
{
    /* battle rows: 0x1704/0x1700/0xFE2 texts, 0x1E01/0x1E00 cells,
       80169128 row; gates 6434(2)/5574(3). */
    txt_set(0x1704);
    if (gate(2) != 0)
        goto L8FD780;
    txt_set(0x1704);
    func_800F9690();
    txt_draw(0x1E01);
    latch(3);
    goto L8FD7E4;
L8FD780:
    txt_set(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto L8FD7CC;
    func_800F9690();
    goto L8FD7D4;
L8FD7CC:
    txt_set(0xFE2);
L8FD7D4:
    txt_draw(0x1E01);
    latch(1);
L8FD7E4:
    txt_draw(0x1E00);
    func_80169128();
    return;
}
