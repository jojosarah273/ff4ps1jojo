/* FF4 source-port — interpreted module for config_map_x7d19_x36_x7d1e_x38_x7d.
 * Ground truth: src/config_map_x7d19_x36_x7d1e_x38_x7d.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_map_x7d19_x36_x7d1e_x38_x7d(void)
{
    /* config map: 0x7D19/0x36/0x7D1E/0x38/0x7D1B/0x39/0x3A/0x3B texts
       + windows, 8016D798/8016D768/8016D600 rows; loop L16D574 on
       6EA8(0x36)/6434(2). */
    page_open(0x7D19);
    tail(0x36);
    txt_set(0x7D1E);
    cell_put(0x38);
    page_open(0x7D1B);
    tail(0x39);
    row_page(0x39);
    sep_a();
    cell_poke0(cell_state(0x7D1D));
    cell_put(0x3C);
    row_page(0x3A);
    row_open_w0();
    cell_put(0x3D);
    sep();
L16D574:
    for (;;) {
        /* v1/v0 gate -> L16D590 */
        cell_push_c8_b4(0x36);
        if (gate(2) != 0)
            break;
        io_poll(0xF);
        if (io_go() == 0)
            goto L16D5D8;
        config_rows_x3c_x39_x60_x57_window();
        fn_1x6d768();
    }
    return;
L16D5D8:
    config_map_x7d1d_text_x39_x3c_wind();
    fn_1x6d768();
    goto L16D574;
}
