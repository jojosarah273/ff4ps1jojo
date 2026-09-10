/* FF4 source-port — interpreted module for battle_rows_x81_x89_x79_windows_x1.
 * Ground truth: src/battle_rows_x81_x89_x79_windows_x1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x81_x89_x79_windows_x1(void)
{
    /* battle rows: 0x81/0x89/0x79 windows, 0x1705/0x340-0x343 texts,
       0x300-0x303 cells, 80111B14/80111ADC/8011EA5C rows; loop
       L111914 on 5C64(0x202). */
    fn_1x11b14();
    latch(0x81);
    txt_draw(0x4200);
    wnd_open(0x200);
    tail(0x89);
    open_row(0x79);
L111914:
    for (;;) {
        /* s0/v0 gate -> L11192C */
        latch(3);
        txt_draw(0x1705);
        fn_1x11adc();
        latch(0x28);
        txt_draw(0x340);
        txt_draw(0x300);
        row_page(0x7A);
        txt_draw(0x341);
        latch(0x30);
        txt_draw(0x342);
        row_read(4);
        txt_draw(0x343);
        latch(0x70);
        txt_draw(0x301);
        row_page(0x7A);
        row_read(2);
        sep_a();
        row_open_w(0xE4);
        txt_draw(0x302);
        latch(0x37);
        txt_draw(0x303);
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
