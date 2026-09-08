#include "common.h"
extern u32 *D_8019DC58;
extern u32 *D_8019DC5C;
s32 func_80196A10(u32 a0)
{
    /* GPU DMA handshake: stamp the DC5C scratch, switch the DC58
       command chain, or arm the 0x09000001 kick. */
    *D_8019DC5C = 0x10000007;
    if ((*D_8019DC58 & 0xFFFFFF) == 2) {
        *D_8019DC58 = (*D_8019DC58 & 0x3FFF) | 0xE1001000;
        return 0;
    }
    if (a0 & 8) {
        *D_8019DC5C = 0x09000001;
        return 2;
    }
    return 1;
}
