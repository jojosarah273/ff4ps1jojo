/* FF4 source-port — interpreted module for func_80183A80.
 * Ground truth: src/func_80183A80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80183A80(void)
{
    /* battle anim: 3x 801971A8(1)/80197208 spin loops plus a final
       801971A8(1)/80197208 pair. */
    do {
        anim_pack_word(1);
        tex_link_packets();
    } while (io_just() != 0);
    do {
        anim_pack_word(1);
        tex_link_packets();
    } while (io_just() != 0);
    do {
        anim_pack_word(1);
        tex_link_packets();
    } while (io_just() != 0);
    anim_pack_word(1);
    tex_link_packets();
    do {
        anim_pack_word(1);
        tex_link_packets();
    } while (io_just() != 0);
    anim_pack_word(1);
    tex_link_packets();
    return;
}
