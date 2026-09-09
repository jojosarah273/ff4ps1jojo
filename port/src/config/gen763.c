/* FF4 source-port — interpreted module for func_8013A950.
 * Ground truth: src/func_8013A950.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013A950(void)
{
    /* ability rows: 0x1BA9/0x1BA8/0x1BAA texts, 0x43/0x45/0x46
       windows; linear render. */
    txt_set(0x1BA9);
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    func_800F8274(0x45);
    row_prep_close();
    txt_set(0x1BA8);
    func_800F78C4(cell_state(0x45));
    cell_put(0x45);
    txt_set(0x1BAA);
    func_800F78C4(cell_state(0x46));
    cell_put(0x46);
    return;
}
