/* FF4 source-port — interpreted module for func_801005DC.
 * Ground truth: src/func_801005DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801005DC(void)
{
    /* battle help-dialog: 0x8FB header, 0x1804-0x180B ruler rows,
       0x1440/0x1441 progress counters, sub-screen calls 800FAD48 /
       8010CA74 / 80170C14 / 8010B010. */
    latch(1);
    cell_put(6);
    txt_set(0x8FB);
    io_poll(0x60);
    if (io_go() != 0)
        goto L10063C;
    io_poll(0x54);
    if (io_go() == 0)
        goto L10063C;
    latch(0xA);
    cell_put(6);
L10063C:
    draw_pad_cur();
L100644:
    for (;;) {
        cell_push_c8_d58(0x1440);
        if (io_press(cell_state(0x8FB)) == 0)
            goto L10068C;
        cell_push_c8_d58(0x1441);
        io_poll(0x63);
        if (io_just() == 0)
            goto L100814;
    L10068C:
        poll_t(0x60);
        if (io_just() == 0)
            continue;
        break;
    }
    draw_pad_cur();
L1006C0:
    for (;;) {
        cell_push_c8_d58(0x1440);
        if (gate(2) != 0)
            goto L100804;
        poll_t(0x60);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set(0x8FB);
    txt_draw(0x1804);
    cell_clear_bank(0x1805);
    cell_clear_bank(0x1806);
    cell_clear_bank(0x1807);
    cell_clear_bank(0x1808);
    cell_clear_bank(0x1809);
    cell_clear_bank(0x180A);
    cell_clear_bank(0x180B);
    latch_cur();
    func_800FD914();
    func_8011EB5C();
    func_800FC548();
    wnd_open_cur();
L100774:
    for (;;) {
        page_paint(0x1804);
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    func_80176060();
    latch(1);
    cell_put(0xC5);
    func_800FAD48();
    func_8010CA74();
    func_800F5448();
    latch(0x81);
    txt_draw(0x4200);
    func_80170C14();
    func_8010B010();
    latch_cur();
    func_800FD85C();
    return;
L100804:
    txt_set(0x8FB);
    cell_pull_c8(0x1440);
L100814:
    cell_push_c8_d58(0x1441);
    sep_a();
    cell_poke0(cell_state(6));
    io_poll(0x64);
    if (io_go() == 0)
        goto L10087C;
    sep_b();
    cell_pos_back(0x63);
    cell_put(6);
    latch(0x63);
    cell_pull_c8(0x1441);
    goto L10063C;
L10087C:
    cell_pull_c8(0x1441);
    return;
}
