/* FF4 source-port — interpreted module for func_80139B44.
 * Ground truth: src/func_80139B44.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80139B44(void)
{
    /* ability rows: 80139CA4/80139694 preps, 0x1BAF text, 0x1340/
       0x1440 gates, 80139C0C row; loop L139BD4 on 5574(5). */
    func_80139CA4();
    func_80139694();
    txt_set(0x1BAF);
    if (gate(2) != 0)
        goto L139B8C;
    txt_cell(0x1340);
    func_800F63F8();
    goto L139B9C;
L139B8C:
    txt_cell(0x1440);
    func_800F63F8();
L139B9C:
    if (io_just() != 0)
        return;
    io_poll(0xCE);
    if (io_go() != 0)
        return;
    txt_draw(0x1B39);
    sep();
L139bd4:
    for (;;) {
        func_80139C0C();
        func_800F61E8();
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
