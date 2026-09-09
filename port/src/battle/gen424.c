/* FF4 source-port — interpreted module for func_8011DE40.
 * Ground truth: src/func_8011DE40.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011DE40(void)
{
    /* shop sale confirm: 0xAB/0x6FA/0x70A texts, 0x3D/0x93/0x3E/0x44
       windows, 8011DFE4/8017583C/8011E16C/8011E318 rows; 4120(0x202)/
       6434(0x202) gates. */
    row_page(0xAB);
    row_read(1);
    sel(0x202);
    txt_set(0x6FA);
    row_page(0xAB);
    row_read(2);
    if (sel(0x202) != 0)
        goto L11DEC0;
    txt_set(0x70A);
    sep_b();
    func_800F8058(0x1F);
    goto L11DEDC;
L11DEC0:
    txt_set(0x70A);
    sep_a();
    row_open_w(0x20);
L11DEDC:
    cell_put(0x3D);
    cell_put(0x93);
    open_row(0x3E);
    open_row(0x44);
    row_page(0x3D);
    row_read(0x3F);
    cell_put(0x41);
    open_row(0x40);
    row_arm2(cell_state(0x3D));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    txt_set(0x1700);
    if (gate(0x202) != 0)
        goto L11DFA4;
    func_8011DFE4();
    func_8017583C();
    return;
L11DFA4:
    io_poll(1);
    if (io_just() == 0)
        goto L11DFCC;
    func_8011E16C();
    return;
L11DFCC:
    func_8011E318();
    return;
}
