/* FF4 source-port — interpreted module for func_801094D8.
 * Ground truth: src/func_801094D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801094D8(void)
{
    /* shop rows: 0x776/0xDD windows, gates 6434(0x202) route the
       0x6C68 read chains; register latches pick the tails. */
    page_open(0x776);
    row_page(0xDD);
    if (gate(0x202) != 0)
        goto L109600;
    /* v0/v1 gates -> L109560 / L1096E0 */
    func_800F6C68();
    return;
    /* L109560: gates -> L1095B8 / L1095EC / L1096C8 */
L109600:
    io_poll(1);
    if (io_just() == 0)
        goto L10967C;
    /* v0 gate -> L10966C */
    func_800F6C68();
    return;
L10967C:
    /* v0 gate -> L1096D8 */
    func_800F6C68();
    return;
}
