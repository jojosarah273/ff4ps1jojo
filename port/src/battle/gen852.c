/* FF4 source-port — interpreted module for func_80119AC8.
 * Ground truth: src/func_80119AC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119AC8(void)
{
    /* battle rows: 8010D9D4 prep; gates 5574(0x80); 0x5C/0x5D/0x60/
       0x61 window rows. */
    func_8010D9D4();
    io_poll(0x80);
    if (io_go() != 0)
        return;
    row_page(0x5C);
    sep_a();
    row_open_w(8);
    row_page(0x5D);
    row_open_w0();
    row_page(0x60);
    sep_a();
    row_open_w(8);
    row_page(0x61);
    row_open_w0();
    return;
}
