/* FF4 source-port — interpreted module for func_80193668.
 * Ground truth: src/func_80193668.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80193668(void)
{
    /* battle anim: v0 gates route 801973B8/80197398/801972D8 rows
       and the 80197358 spin loop L1938A8. */
    if (io_just() != 0)
        goto L1936C0;
    return;
L1936C0:
    /* gate -> L193704 */
    anim_cmd_header();
    func_80197398();
    func_801972D8();
    for (;;) {
        func_80197358();
        if (io_just() != 0)
            continue;
        break;
    }
    return;
}
