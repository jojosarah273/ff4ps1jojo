#include "common.h"
extern u8 D_800D0000[];
extern u16 *D_8019ED4C;
extern u8 *D_8019ED70;
void func_800F926C(void) {
    u16 idx = *D_8019ED4C;
    D_800D0000[idx] = *D_8019ED70;
    *D_8019ED4C = idx - 1;
}
