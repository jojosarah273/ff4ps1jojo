#include "common.h"
extern s16 *D_8019EDC2;
extern s16 *D_8019ED8E;
extern u32 D_8019EDD0[16];
extern s16 *D_8019EDC4;
u32 func_801360EC(void)
{
    if (*D_8019EDC2 == 8) {
        func_80135BE4();
        if ((s32)D_8019EDD0[*D_8019ED8E] > 0) {
            *D_8019EDC4 = 0x42;
            return -1;
        }
    }
    return 0;
}
