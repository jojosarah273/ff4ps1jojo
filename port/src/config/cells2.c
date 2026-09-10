/* FF4 source-port — interpreted module for fn_1x68438.
 * Ground truth: src/fn_1x68438.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x68438(u32 a0)
{
    ((volatile u8 *)(cell_state(4096)))[0xE00] = ((u8)(0 + 0x2));
    ((volatile u8 *)(cell_state(4096)))[0xE01] = ((u8)(0 + 0x5A));
    return (((volatile u8 *)(battle_cb_86120()))[0xE02] = ((u8)(0 + 0x80)));
}
