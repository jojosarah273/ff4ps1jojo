/* FF4 source-port — interpreted module for func_8017E794.
 * Ground truth: src/func_8017E794.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8017E794(void)
{
    /* battle anim: 80195120 + 80197208 spin loop (L17E8CC); gates;
       returns at L17E90C. */
    if (io_just() != 0)
        goto L17E7D8;
L17E7D8:
    if (io_just() == 0)
        goto L17E90C;
    if (io_just() != 0)
        goto L17E84C;
    func_80195120();
    if (io_just() == 0)
        goto L17E8F8;
L17E8CC:
    do {
        tex_link_packets();
    } while (io_just() != 0);
    return;
L17E84C:
    if (io_just() == 0)
        goto L17E898;
    goto L17E8AC;
L17E898:
    func_80195120();
    return;
L17E8AC:
    func_80195120();
    if (io_just() == 0)
        goto L17E8F8;
    tex_link_packets();
    goto L17E8CC;
L17E8F8:
    return;
L17E90C:
    return;
}
