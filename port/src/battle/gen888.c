/* FF4 source-port — interpreted module for func_80141B30.
 * Ground truth: src/func_80141B30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80141B30(void)
{
    /* battle rows: 80140558/80140310 loop L141B5C on 5958(0x15). */
    sep();
L141b5c:
    for (;;) {
        func_80140558();
        func_80140310();
        row_prep(0x20);
        func_800F658C();
        sep_a();
        func_800F4064(8);
        func_800F81B0();
        sep();
        row_prep_close();
        cell_step();
        poll_t(0x15);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
