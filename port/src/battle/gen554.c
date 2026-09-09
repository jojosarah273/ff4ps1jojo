/* FF4 source-port — interpreted module for func_80105098.
 * Ground truth: src/func_80105098.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80105098(void)
{
    /* shop sell rows: 0xAB/0xD2 windows, 0x6A1/0x6A1 texts + 0x1706/
       0x1707 texts with 0xC/0xE/0xAE windows, 8010D4EC row;
       4120(2) gates. */
    row_page(0xAB);
    row_sel_cell_cur();
    func_800F96E0();
    func_800F6D70(0x6A1);
    row_read(4);
    if (sel(2) != 0)
        goto L105100;
    func_800F6D70(0x6A1);
    row_read(3);
    func_800F4370(0xD2);
    if (sel(2) != 0)
        return;
L105100:
    row_page(0xAB);
    func_800F96E0();
    txt_set(0x1706);
    sep_a();
    row_open_w0();
    cell_put(0xC);
    txt_set(0x1707);
    sep_a();
    row_open_w0();
    cell_put(0xE);
    latch(0xFF);
    cell_put(0xAE);
    func_8010D4EC();
    return;
}
