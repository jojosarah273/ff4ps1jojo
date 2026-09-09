/* FF4 source-port — interpreted module for func_8017E930.
 * Ground truth: src/func_8017E930.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8017E930(void)
{
    /* battle anim (twin): 80195120 + 80197208 spin loop (L17EA2C). */
    if (io_just() != 0)
        goto L17E974;
    goto L17E974;
L17E974:
    if (io_just() == 0)
        goto L17EA6C;
    if (io_just() != 0)
        goto L17E9EC;
    func_80195120();
    if (io_just() == 0)
        goto L17EA58;
L17EA2C:
    do {
        func_80197208();
    } while (io_just() != 0);
    return;
L17E9EC:
    func_80195120();
    if (io_just() == 0)
        goto L17EA58;
    func_80197208();
    goto L17EA2C;
L17EA58:
    return;
L17EA6C:
    return;
}
