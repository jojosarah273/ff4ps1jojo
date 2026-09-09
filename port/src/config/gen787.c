/* FF4 source-port — interpreted module for func_80152640.
 * Ground truth: src/func_80152640.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152640(void)
{
    /* shop rows: 0x82/0x80/0xE5 windows; loop L152690 on
       67FC(0x80)/5574(0xFF) gates; closes via 63BC. */
    cell_put(0x82);
    row_info(0x80);
    sep();
    row_page(0xE5);
    if (gate(2) != 0)
        return;
L152690:
    for (;;) {
        func_800F67FC(0x80);
        io_poll(0xFF);
        if (io_just() == 0)
            goto L1526D0;
        poll_pair(0xE5);
        row_page(0xE5);
        if (gate(2) != 0)
            goto L1526E0;
    L1526D0:
        step2();
    }
    return;
L1526E0:
    step2();
    return;
}
