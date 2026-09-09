/* FF4 source-port — interpreted module for func_801671E4.
 * Ground truth: src/func_801671E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801671E4(void)
{
    /* battle stat row: 0x1802 text, 0x2A window with 5024 cells
       (5 copies), 6434(0x202)/4120(2) gates; loop L167364 (5DA0/
       5B8C(0x202)). */
    txt_set(0x1802);
    row_read(0x1F);
    cell_put(0x1802);
    txt_set_cur();
    row_read(0x20);
    if (sel(2) != 0)
        goto L167270;
    if (gate(0x202) != 0)
        goto L167288;
L167270:
    sep_a();
    cell_poke0(cell_state_of());
L167288:
    wnd_open(1);
    cell_put(0x2A);
    row_prep(0x20);
    func_800F5024(cell_state(0x2A));
    func_800F5024(cell_state(0x2A));
    func_800F5024(cell_state(0x2A));
    func_800F5024(cell_state(0x2A));
    func_800F5024(cell_state(0x2A));
    sep();
    row_prep_close();
    page(0x2A);
    latch(0x10);
    cell_put_cur();
L167364:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
