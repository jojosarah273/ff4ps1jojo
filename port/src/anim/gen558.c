/* FF4 source-port — interpreted module for func_801714C4.
 * Ground truth: src/func_801714C4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801714C4(void)
{
    /* shop picker: 0x7/0x500 windows; 3F38(3C3C(7)) + 78C4(3C3C(7))
       rows with the 0x500 count cell. */
    row_open();
    row_sync();
    func_800F9200();
    row_prep(0x20);
    row_prep_close();
    cell_put(7);
    row_close2();
    sep_a();
    cell_poke0(cell_state(7));
    func_800F9200();
    row_read(3);
    func_800F6C68();
    cell_put(7);
    row_close2();
    func_800F6D70(0x500);
    func_800F78C4(cell_state(7));
    func_800F8960(0x500);
    row_done();
    row_close();
    return;
}
