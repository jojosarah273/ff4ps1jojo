/* FF4 source-port — interpreted module for func_80167664.
 * Ground truth: src/func_80167664.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80167664(void)
{
    /* battle anim loop: 80167774/8014A488/80148C8C preps; L1676DC
       alternates 80140994/8014096C/80140944/801409BC/801409E4 with
       80167604; closes via 80167844. */
    func_80167774();
    wnd_open_cur();
    label_cur();
    page_paint2_cur();
    sep();
    func_8014A488();
    func_80148C8C();
    sep();
    label_cur();
    page_paint2_cur();
    wnd_open(4);
L1676dc:
    for (;;) {
        row_open();
        func_80140994();
        func_80167604();
        func_8014096C();
        func_80167604();
        func_80140944();
        func_80167604();
        func_801409BC();
        func_80167604();
        func_801409E4();
        func_80167604();
        row_close();
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_800F8F74();
    func_80167844();
    return;
}
