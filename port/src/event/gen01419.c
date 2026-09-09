/* FF4 source-port — interpreted module for func_80188448.
 * Ground truth: src/func_80188448.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80188448(void)
{
    /* battle: v0 gate tree on the 80191638/801890E4 pair rows. */
    if (io_just() != 0)
        goto L188530;
    if (io_just() != 0)
        goto L18857C;
L1885CC:
    func_80191638();
    func_801890E4();
    return;
L188530:
    func_80191638();
    func_801890E4();
    return;
L18857C:
    func_80191638();
    func_801890E4();
    return;
}
