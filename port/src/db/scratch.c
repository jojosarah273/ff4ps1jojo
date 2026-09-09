/* FF4 source-port — db/scratch.c
 *
 * Scratch-pad byte swaps (0x1F8003C0[8] <-> [9]) used by the input
 * translation layer.
 *
 * Ground truth: src/func_800F3D48.c (byte-verified; asm order mirrored).
 */
#include <stdint.h>

extern uint8_t g_scratch[];

/* 800F3D48: swap the pad-status bytes at scratch 0x08/0x09. */
void scratch_swap_status(void)
{
    uint8_t *p = g_scratch;
    uint8_t b0 = p[8];
    uint8_t b1 = p[9];
    p[8] = b1;
    p[9] = b0;
}