/* FF4 source-port — interpreted module for func_8016BD78.
 * Ground truth: src/func_8016BD78.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016BD78(void)
{
    /* shop rows: 0x18/0x1A/0x1C windows, 0x4218 text; linear. */
    row_open();
    row_page(0x18);
    row_page(0x1A);
    row_open2();
    sep();
    func_800F9200();
    row_pad();
    page_open(0x4218);
    tail(0x1C);
    row_pad();
    row_close();
    return;
}
