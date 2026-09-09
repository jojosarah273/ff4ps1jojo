/* FF4 source-port — interpreted module for cell_fill_aa.
 * Ground truth: src/cell_fill_aa.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern uint8_t *D_800D0000;
void cell_fill_aa(void)
{
    u8 v = 0xAA;
    s32 i = 7;
    u8 *p = (uint8_t *)D_800D0000 + 0x507;
    do {
        *p = v;
        p--;
    } while (--i >= 0);
}
