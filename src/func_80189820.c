#include "common.h"
extern u32 D_801F66E8[8][5];
u32 func_80189820(u32 a0)
{
    s32 i;
    for (i = 0; i < 8; i++) {
        if (D_801F66E8[i][0] == 0) {
            D_801F66E8[i][0] = a0;
            D_801F66E8[i][3] = 0;
            D_801F66E8[i][2] = a0 + ((*(u16 *)(a0 + 8)) << 4) + 0x10;
            D_801F66E8[i][4] = *(u8 *)(a0 + 0xB);
            return i;
        }
    }
    return -1;
}
