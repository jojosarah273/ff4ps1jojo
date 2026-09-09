/* FF4 source-port — interpreted module for func_8010D2A0.
 * Ground truth: src/func_8010D2A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010D2A0(void)
{
    /* battle rows: 3C3C/3B9C + 9330 + 8010D54C + 95A0; linear. */
    cell_state_of();
    cell_peek_cur();
    row_open();
    func_8010D54C();
    row_close();
    return;
}
