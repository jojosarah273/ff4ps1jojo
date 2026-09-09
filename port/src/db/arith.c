/* FF4 source-port — db/arith.c
 *
 * Small numeric helpers of the catalog layer.
 *
 * Ground truth: src/func_800F3B9C.c (byte-verified; asm order mirrored).
 */
#include <stdint.h>

/* 800F3B9C: 16-bit add; the only observable output is (u16)a0 (the
 * scratch-base machinery computes into an otherwise unused register). */
uint32_t cell_add16(uint32_t a0, uint32_t a1)
{
    uint16_t t = (uint16_t)a1 + (uint16_t)a0;
    (void)t;
    return a0 & 0xFFFF;
}