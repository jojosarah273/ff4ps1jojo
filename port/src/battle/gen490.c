/* FF4 source-port — interpreted module for func_8011F210.
 * Ground truth: src/func_8011F210.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011F210(void)
{
    /* column cells: 0x30/0x2F/0x2D/0x31 windows, 0xFA/0xFB codes;
       loop L11F270 on 5DA0(0x31)/5B8C(0x202). */
    row_sync();
    cell_put(0x30);
    latch(0xFA);
    cell_pull_c8();
    step2();
    row_page(0x2F);
    cell_pull_c8();
    step2();
    row_page(0x2D);
    cell_put(0x31);
    key_page(0x30);
L11f270:
    for (;;) {
        latch(0xFF);
        cell_pull_c8();
        step2();
        row_page(0x2F);
        cell_pull_c8();
        step2();
        poll_pair(0x31);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0xFB);
    cell_pull_c8();
    step2();
    row_page(0x2F);
    cell_pull_c8();
    row_done();
    rows_u16_d44_d58_swap_with_c_prep();
    return;
}
