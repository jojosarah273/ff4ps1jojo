/* FF4 source-port — interpreted module for func_801665C0.
 * Ground truth: src/func_801665C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801665C0(void)
{
    /* options/status band: 0x12/0x13/0x10/0x14/0x11 windows, 78C4
       (3C3C(0x1A)) heading, 6434(2)/5B8C(0x202) gates. */
    func_800F9200();
    row_read(0x1F);
    io_poll(0x1F);
    if (io_just() == 0)
        goto L166600;
    row_close2();
    goto L166738;
L166600:
    func_800F6C68();
    func_800F8960();
    row_page(0x12);
    func_800F8960();
    row_page(0x13);
    func_800F8960();
    row_close2();
    row_sel_cell_cur();
    row_read(0xC0);
    func_800F78C4(cell_state(0x1A));
    func_800F8960();
    txt_set_cur();
    if (gate(2) != 0)
        goto L166718;
    func_800F6D70();
    func_800F8960();
    row_page(0x10);
    poll_spin();
    sep_a();
    cell_poke0(cell_state(0x14));
    func_800F8960();
L166718:
    step2();
    step2();
    step2();
    step2();
L166738:
    row_page(0x12);
    sep_a();
    row_open_w(0x10);
    cell_put(0x12);
    poll_pair(0x10);
    if (poll_go(0x202) != 0)
        goto L1667D8;
    row_page(0x14);
    cell_put(0x12);
    row_page(0x13);
    sep_a();
    row_open_w(0x10);
    cell_put(0x13);
    txt_set_cur();
    cell_put(0x10);
    poll_pair(0x11);
    if (poll_go(0x202) != 0)
        goto L1667D8;
    sep_a();
    return;
L1667D8:
    sep_b();
    return;
}
