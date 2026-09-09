/* FF4 source-port — battle/battle_rows2.c
 *
 * Battle-mode fan-out (rows vs fx by pad-latch/7 test). Exact mirror.
 *
 * Ground truth: src/battle_mode_dispatch.c (byte-verified).
 */
#include <stdint.h>
#include "ff4_window.h"

extern uint8_t *D_800D0000;


/* 8017F8F8: battle-mode fan-out (rows vs fx by pad-latch/7 test). */
void battle_mode_dispatch(uint32_t a0, uint16_t a1, uint16_t a2, int16_t a3)
{
    if (a3 >= 0 && ((*(uint8_t *)(uintptr_t)(D_800D0000 + 0x2105)) & 7) == 7)
        battle_anim_rows_a();
    else
        battle_anim_rows_b();
}