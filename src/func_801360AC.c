#include "common.h"
extern s16 D_8019EDC2;
extern s32 D_8019EDD0;
extern s32 D_8019EDD4;
extern s32 D_8019EDD8;
extern s32 D_8019EDDC;
void func_801360AC(void)
{
    /* ability: when the panel cell is 8, run 80135F7C and reset
       the drag/selection cells. */
    if (D_8019EDC2 == 8) {
        func_80135F7C();
        D_8019EDD4 = -1;
        D_8019EDD0 = -1;
        D_8019EDD8 = 0;
        D_8019EDDC = 0;
    }
}
