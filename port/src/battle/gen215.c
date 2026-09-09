/* FF4 source-port — interpreted module for func_8010543C.
 * Ground truth: src/func_8010543C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010543C(void)
{
    row_page(0xD5);
    if (gate(0x202) == 0)
        return;
    func_80102C30();
    row_page(0xB1);
    if (gate(2) == 0) {
        row_page(4);
        cell_put(2);
        row_page(5);
        cell_put(3);
    }
    row_page(0xA1);
    row_read(0x41);
    cell_put(0xD2);
    txt_set(0x1715);
    io_poll(2);
    if (io_just() == 0)
        goto L598;
    txt_set(0x1706);
    sep_b();
    cell_tick_sub(cell_state(0x1716));
    if (io_just() != 0)
        goto L51c;
    func_800F53FC();
    latch(1);
    goto L560;
L51c:
    txt_set(0x1707);
    sep_b();
    cell_tick_sub(cell_state(0x1717));
    if (io_just() != 0)
        goto L580;
    func_800F53FC();
    latch(2);
L560:
    latch_cur();
    txt_draw(0x1705);
    cell_set50_from40();
    goto L7e8;
L580:
    latch(0x80);
    cell_put(2);
    open_row(0x54);
L598:
    func_80101788();
    row_page(3);
    row_read(0xF);
    if (sel(2) != 0)
        goto L7d0;
    row_read(1);
    if (sel(2) != 0)
        goto L5e8;
    latch(1);
    goto L650;
L5e8:
    row_page(3);
    row_read(2);
    if (sel(2) != 0)
        goto L618;
    latch(3);
    goto L650;
L618:
    row_page(3);
    row_read(4);
    if (sel(2) != 0)
        goto L648;
    latch(2);
    goto L650;
L648:
    latch_cur();
L650:
    txt_draw(0x1705);
    cell_set50_from40();
    txt_draw(0x709);
    row_sel_cell_cur();
    cell_cur_save54();
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto L7e0;
    txt_set(0x1700);
    io_poll(1);
    if (io_just() == 0)
        goto L72c;
    txt_set(0x1704);
    io_poll(5);
    if (io_just() == 0)
        goto L6e0;
    txt_set(0x1287);
    goto L704;
L6e0:
    io_poll(4);
    if (io_just() == 0)
        goto L72c;
    txt_set(0x1281);
L704:
    row_read(4);
    if (sel(2) != 0)
        goto L72c;
    latch(1);
    goto L744;
L72c:
    txt_set(0x1704);
    if (gate(2) != 0)
        goto L784;
L744:
    func_800F96E0();
    func_800F6A78(0xA1);
    goto L7a0;
L784:
    func_800F6A78(0xA1);
    row_read(0x41);
    cell_tick_and(0xD2);
L7a0:
    if (sel(2) != 0)
        goto L7d0;
    func_80105828();
    row_page(0xA);
    if (gate(2) != 0)
        goto L7e0;
L7d0:
    open_row(0xAB);
    return;
L7e0:
    txt_set(0x709);
L7e8:
    cell_put(0xAB);
    func_800FFB5C();
    txt_set(0x1707);
    txt_draw(0x70A);
    func_8011DE40();
    func_8011C2C8();
    return;
}
