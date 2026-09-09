/* FF4 source-port — interpreted module for func_8019675C.
 * Ground truth: src/func_8019675C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8019675C(void)
{
    /* battle anim: 80196898 intro; loops L1967B8/L1967C8 on
       801963C0/801968CC rows; 80196888 tail. */
    func_80196898();
    goto L196794;
L19677C:
    func_801963C0();
    func_801968CC();
    if (io_just() != 0)
        goto L196888;
L196794:
    /* v1/v0 gate -> L1967C8 / L19677C */
    goto L19677C; /* v1/v0 gate (fall: 801963C0 row) */
L1967B8:
    func_801968CC();
    if (io_just() != 0)
        goto L196888;
L1967C8:
    if (io_just() != 0)
        goto L1967B8;
    if (io_just() == 0)
        goto L1967B8;
    goto L196888;
L196810:
    func_801963C0();
    goto L196888;
L196888:
    return;
}
