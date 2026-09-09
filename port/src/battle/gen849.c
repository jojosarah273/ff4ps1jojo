/* FF4 source-port — interpreted module for func_8011F360.
 * Ground truth: src/func_8011F360.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011F360(void)
{
    /* rows: 0x45 window; loop L11F370 on 5480/53C0; closes via
       6434(0x202)/4008(0x80) gates. */
    open_row(0x45);
L11f370:
    for (;;) {
        sep_b();
        func_800F8058(0xA);
        if (io_go() != 0)
            goto L11F3A0;
        key_page(0x45);
    }
L11F3A0:
    row_open_w(0x8A);
    stat_sync();
    row_page(0x45);
    if (gate(0x202) != 0)
        goto L11F3D8;
    latch(0xFF);
    return;
L11F3D8:
    sep_a();
    row_open_w(0x80);
    return;
}
