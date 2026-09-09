/* FF4 source-port — interpreted module for func_8017559C.
 * Ground truth: src/func_8017559C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8017559C(void)
{
    /* shop buy list: 0x1700 gate picks the 0xD25 cells vs the 0xCF5/
       0xCF7/0xD1D/0xD1F/0xD21/0xCD7/0xCD9/0xCDD/0xCE0 families
       (6CF4/81B0 pairs). */
    row_read(0xFE);
    txt_set(0x1700);
    if (gate(0x202) != 0)
        goto L17560C;
    row_prep(0x20);
    cell_push9_bank();
    cell_pull9_hi(0xD25);
    cell_push9_bank();
    goto L1756C8;
L17560C:
    io_poll(1);
    if (io_just() == 0)
        goto L1756E8;
    row_prep(0x20);
    cell_push9_bank();
    cell_pull9_hi(0xCF3);
    cell_push9_bank();
    cell_pull9_hi(0xCF5);
    cell_push9_bank();
    cell_pull9_hi(0xD1D);
    cell_push9_bank();
    cell_pull9_hi(0xD1F);
    cell_push9_bank();
    cell_pull9_hi(0xD21);
    cell_push9_bank();
    cell_pull9_hi(0xCD7);
    cell_push9_bank();
    cell_pull9_hi(0xCDD);
    cell_push9_bank();
L1756C8:
    cell_pull9_hi(0xCDD);
    row_sync2_cur();
    row_prep_close();
    return;
L1756E8:
    row_prep(0x20);
    cell_push9_bank();
    cell_pull9_hi(0xCDD);
    cell_push9_bank();
    cell_pull9_hi(0xCD5);
    cell_push9_bank();
    cell_pull9_hi(0xCF3);
    cell_pull9_hi(0xD13);
    cell_push9_bank();
    cell_pull9_hi(0xCD7);
    cell_push9_bank();
    cell_pull9_hi(0xD0B);
    cell_push9_bank();
    cell_pull9_hi(0xD0D);
    cell_push9_bank();
    cell_pull9_hi(0xD11);
    row_sync2_cur();
    row_prep_close();
    return;
}
