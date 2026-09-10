/* FF4 source-port — interpreted module for func_80120BDC.
 * Ground truth: src/func_80120BDC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80120BDC(void)
{
    /* battle rows: 8011F320/8011EE34/8013B764/8013B7B8 rows, 0x45
       window; loop L120BE4 on 5DA0(0x45)/5B8C(0x202). */
L120be4:
    for (;;) {
        midrow_pad88();
        battle_rows_2115();
        if (poll_go(0x202) == 0)
            goto L120C2C;
        func_8013B764();
        row_page(0x45);
        func_8013B7B8();
    L120C2C:
        row_prep(0x20);
        row_read2(0x1D);
        sep_a();
        cell_pos_fwd(0x40);
        cell_put_hi9(0x1D);
        row_read2(0x1F);
        sep_a();
        cell_pos_fwd(0x80);
        cell_put_hi9(0x1F);
        row_prep_close();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
