#include "common.h"
extern u16 *D_8019ED4C;
extern u16 *D_8019ED54;
extern u8 D_800D0001[];
void func_800F95A0(void) {
    u16 idx = *D_8019ED4C;
    *D_8019ED4C = idx + 2;
    *D_8019ED54 = (u16)((D_800D0001[idx] << 8) | D_800D0001[idx + 1]);
}
