/* FF4 source-port — interpreted module for func_80182E54.
 * Ground truth: src/func_80182E54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80182E54(void)
{
    /* battle anim: v0 + t0/v0 gates; 801971A8(1)/80197208 tail. */
    if (io_just() == 0)
        goto L182F0C;
    goto L182FA4;
L182F0C:
    /* t0/v0 latch -> L182FC4 / L182FD0 */
L182FA4:
    anim_pack_word(1);
    tex_link_packets();
    return;
L182FC4:
    goto L182FA4;
}
