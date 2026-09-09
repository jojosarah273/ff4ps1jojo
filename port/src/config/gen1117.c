/* FF4 source-port — interpreted module for func_8013BFFC.
 * Ground truth: src/func_8013BFFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013BFFC(void)
{
    /* ability rows: 0x1A83 text; loop L13C024 on 6434(2)/53C0 with
       8013C2FC/8013CA70/8013BD04/8013C50C rows. */
    txt_set(0x1A83);
    cell_clear_bank(0x1A83);
    if (gate(0x202) != 0)
        goto L13C074;
L13C024:
    for (;;) {
        func_8013C2FC();
        row_page(0x60);
        if (gate(2) != 0)
            goto L13C064;
        func_8013CA70();
        if (io_go() != 0)
            continue;
        return;
    L13C064:
        func_8013BD04();
        return;
    }
L13C074:
    func_8013C50C();
    goto L13C024;
}
