/* FF4 source-port — interpreted module for func_800FC2AC.
 * Ground truth: src/func_800FC2AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FC2AC(void)
{
    /* battle confirm-dialog: two 5958/53C0 key-gates select the 0x1802
       header, then the 0x1700-0x1702 option rows, then 0x1803 dispatch
       (801762D0/80187B00 vs the 0x1804-0x180B detail fill), 0x2100 title,
       and 8010CA74 confirm. */
    page_open(0x1800);
    poll_t(0x1B7);
    if (io_go() == 0)
        goto LFC2FC;
    poll_t(0x1B9);
    if (io_go() != 0)
        goto LFC2FC;
    latch(0x10);
    txt_draw(0x1802);
LFC2FC:
    txt_set(0x1700);
    io_poll(3);
    if (io_just() == 0)
        goto LFC3C0;
    txt_set(0x1701);
    if (gate(2) != 0)
        goto LFC3C0;
    txt_set(0x1702);
    io_poll(0x5A);
    if (io_go() == 0)
        goto LFC36C;
    io_poll(0x5D);
    if (io_go() == 0)
        goto LFC39C;
LFC36C:
    io_poll(0x67);
    if (io_go() == 0)
        goto LFC3C0;
    io_poll(0x7F);
    if (io_go() != 0)
        goto LFC3C0;
LFC39C:
    txt_set(0x1801);
    txt_draw_cur();
LFC3C0:
    func_800FB3F8();
    func_800F92D8();
    func_800F54B8();
    func_8015084C();
    func_800FC548();
    func_800F9538();
    txt_set(0x1803);
    if (gate_cur() != 0)
        goto LFC434;
    func_801762D0();
    func_80187B00();
    goto LFC538;
LFC434:
    row_page(0xC6);
    if (gate(2) != 0)
        goto LFC464;
    txt_draw(0x1804);
    open_row(0xC6);
    goto LFC4EC;
LFC464:
    txt_set(0x1804);
    func_800F78C4(cell_state(0x1805));
    func_800F78C4(cell_state(0x1806));
    func_800F78C4(cell_state(0x1807));
    func_800F78C4(cell_state(0x1808));
    func_800F78C4(cell_state(0x1809));
    func_800F78C4(cell_state(0x180A));
    func_800F78C4(cell_state(0x180B));
    if (func_800F7918(2) != 0)
        goto LFC4FC;
LFC4EC:
    func_8011EB5C();
    func_800FC548();
LFC4FC:
    latch(0x80);
    txt_draw(0x2100);
    txt_set(0x1700);
    io_poll(3);
    if (io_just() == 0)
        goto LFC538;
    func_8010CA74();
    return;
LFC538:
    return;
}
