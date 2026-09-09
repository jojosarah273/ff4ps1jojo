/* FF4 source-port — interpreted module for func_80183048.
 * Ground truth: src/func_80183048.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80183048(void)
{
    /* battle anim: 80198058/80197FB8 preps then 4x
       80182DDC/80182E18 pairs. */
    if (io_just() != 0)
        goto L183070;
    func_80198058();
    func_80197FB8();
L1830E4:
    func_80182DDC();
    func_80182E18();
    func_80182DDC();
    func_80182E18();
    func_80182DDC();
    func_80182E18();
    func_80182DDC();
    func_80182E18();
    return;
L183070:
    return;
}
