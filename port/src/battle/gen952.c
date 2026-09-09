/* FF4 source-port — interpreted module for func_8010CA74.
 * Ground truth: src/func_8010CA74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010CA74(void)
{
    /* battle rows: 0xAE/0x9D1/0x9CF texts, 8010D61C row; loop
       L10CA98 on 5574(0xC). */
    open_row(0xAE);
    page_open(0x9D1);
    label(0x9CF);
L10ca98:
    for (;;) {
        cell_push_c8();
        func_8010D61C();
        page_open(0x9CF);
        label_cur();
        key_page(0xAE);
        row_page(0xAE);
        io_poll(0xC);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
