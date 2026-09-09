/* FF4 source-port — interpreted module for func_801257BC.
 * Ground truth: src/func_801257BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801257BC(void)
{
    /* status row: 0x16A8/0x1A71/0x1A73 texts, 0x45/0x41 windows,
       801224D0 cursor; loop L125810 on 5DD4(0x45)/5C64(0x202). */
    txt_set(0x16A8);
    if (gate(2) != 0)
        goto L1257E8;
    latch(0xA);
L1257E8:
    func_801224D0();
    row_prep(0x20);
    row_sync2(5);
    func_800F8274(0x45);
    cell_fmt2(0x41);
L125810:
    for (;;) {
        sep_a();
        cell_peek0(cell_state(0x1A71));
        func_800F89D4();
        func_800F89D4();
        func_800F89D4();
        func_800F89D4();
        step2();
        step2();
        step2();
        step2();
        cell_step();
        cell_step();
        func_800F5DD4(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    latch(0xA);
    txt_draw(0x1A73);
    return;
}
