/* FF4 source-port — interpreted module for func_80126070.
 * Ground truth: src/func_80126070.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126070(void)
{
    func_800F5D24(0x1A73);
    if (poll_go(0x202) != 0)
        goto L60c8;
    latch(0xA);
    txt_draw(0x1A73);
    txt_set(0x1A75);
    txt_draw(0x1A75);
L60c8:
    row_prep(0x20);
    func_800F8274(0x63);
    sep_a();
    func_800F4064(0x18);
    func_800F8274(0x65);
    func_800F4064(0x18);
    func_800F8274(0x67);
    func_800F4064(0x18);
    func_800F8274(0x69);
    func_800F4064(0x18);
    func_800F8274(0x6B);
    row_prep_close();
    sep();
    cell_put(0x1D);
    txt_set(0x1B4B);
    cell_put(0x1E);
    txt_set(0x1A75);
    if (gate(0x202) != 0)
        goto L6188;
    txt_set(0x1B4C);
    cell_put(0x1E);
L6188:
    page(0x63);
    tail(0x1F);
    func_80125130();
    latch(1);
    cell_put(0x1D);
    txt_set(0x1B4D);
    cell_put(0x1E);
    txt_set(0x1A75);
    if (gate(0x202) != 0)
        goto L61e8;
    txt_set(0x1B4E);
    cell_put(0x1E);
L61e8:
    page(0x65);
    tail(0x1F);
    func_80125130();
    latch(2);
    cell_put(0x1D);
    txt_set(0x1B4F);
    cell_put(0x1E);
    txt_set(0x1A75);
    if (gate(0x202) != 0)
        goto L6248;
    txt_set(0x1B50);
    cell_put(0x1E);
L6248:
    page(0x67);
    tail(0x1F);
    func_80125130();
    latch(3);
    cell_put(0x1D);
    txt_set(0x1B51);
    cell_put(0x1E);
    txt_set(0x1A75);
    if (gate(0x202) != 0)
        goto L62a8;
    txt_set(0x1B52);
    cell_put(0x1E);
L62a8:
    page(0x69);
    tail(0x1F);
    func_80125130();
    latch(4);
    cell_put(0x1D);
    txt_set(0x1B53);
    cell_put(0x1E);
    txt_set(0x1A75);
    if (gate(0x202) != 0)
        goto L6308;
    txt_set(0x1B54);
    cell_put(0x1E);
L6308:
    page(0x6B);
    tail(0x1F);
    func_80125130();
    return;
}
