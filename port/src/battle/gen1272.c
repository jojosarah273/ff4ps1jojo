/* FF4 source-port — interpreted module for func_8010D9D4.
 * Ground truth: src/func_8010D9D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010D9D4(void)
{
    /* battle rows: 3C3C/3B9C/9330/95A0; linear. */
    cell_state_of();
    cell_peek_cur();
    row_open();
    row_close();
    return;
}
