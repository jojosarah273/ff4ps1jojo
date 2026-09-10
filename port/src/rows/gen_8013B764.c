/* FF4 source-port — interpreted module for fn_1x3b764.
 * Ground truth: src/fn_1x3b764.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 D_801CFD68[16384];

void fn_1x3b764(u32 a0, u32 a1)
{
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x50D8] = (0 + 0x204E);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x50DA] = (0 + 0x2070);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x50DC] = (0 + 0x2067);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5096] = (0 + 0x20FF);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x509A] = (0 + 0x20FF);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x50D6] = (0 + 0x20FF);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x50DE] = (0 + 0x206F);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x50E0] = (0 + 0x2064);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x50E2] = (0 + 0x20FF);
    return (((volatile u8*)(((D_801CFD68) + (0x8000))))[0x50E4] = (0 + 0x20FF));
}
