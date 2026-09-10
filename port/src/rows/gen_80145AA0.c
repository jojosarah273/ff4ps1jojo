/* FF4 source-port — interpreted module for fn_1x45aa0.
 * Ground truth: src/fn_1x45aa0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 D_801CFD68[16384];

void fn_1x45aa0(u32 a0, u32 a1)
{
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x52A4] = (0 + 0x20F7);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x52A6] = (0 + 0x20F8);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x52A8] = (0 + 0x20F8);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x52AA] = (0 + 0x20F8);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x52AC] = (0 + 0x20F8);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x52E4] = (0 + 0x20FA);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5324] = (0 + 0x20FA);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5364] = (0 + 0x20FC);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5366] = (0 + 0x20FD);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x5368] = (0 + 0x20FD);
    ((volatile u8*)(((D_801CFD68) + (0x8000))))[0x536A] = (0 + 0x20FD);
    return (((volatile u8*)(((D_801CFD68) + (0x8000))))[0x536C] = (0 + 0x20FD));
}
