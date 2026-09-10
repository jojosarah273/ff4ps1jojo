/* FF4 source-port — interpreted module for battle_option_icon_row_windows_wit.
 * Ground truth: src/battle_option_icon_row_windows_wit.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_option_icon_row_windows_wit(void)
{
    /* battle option-icon row: 2/3 windows with 4248(0xBF) fills, then
       per-index 4120(0x202) gates showing the 0x54/0x50/0x52/0x53/0x55/
       0x51/0x56/0x57 icons. */
    row_page(3);
    if (gate_cur() == 0)
        goto L17653C;
    row_page(2);
    row_read(0xBF);
    cell_put(2);
    row_page_cur();
    row_read(0xBF);
    cell_put_cur();
L17653C:
    row_page(2);
    row_read(0x80);
    if (sel(0x202) != 0)
        goto L176564;
    open_row(0x54);
L176564:
    row_page(2);
    row_read(0x40);
    if (sel(0x202) != 0)
        goto L17658C;
    open_row(0x50);
L17658C:
    row_page(2);
    row_read(0x20);
    if (sel(0x202) != 0)
        goto L1765B4;
    open_row(0x52);
L1765B4:
    row_page(2);
    row_read(0x10);
    if (sel(0x202) != 0)
        goto L1765DC;
    open_row(0x53);
L1765DC:
    row_page(3);
    row_read(0x80);
    if (sel(0x202) != 0)
        goto L176604;
    open_row(0x55);
L176604:
    row_page(3);
    row_read(0x40);
    if (sel(0x202) != 0)
        goto L17662C;
    open_row(0x51);
L17662C:
    row_page(3);
    row_read(0x20);
    if (sel(0x202) != 0)
        goto L176654;
    open_row(0x56);
L176654:
    row_page(3);
    row_read(0x10);
    if (sel(0x202) != 0)
        return;
    open_row(0x57);
    return;
}
