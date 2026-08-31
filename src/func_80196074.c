#include "common.h"
extern u32 *D_8019DC5C;
extern u32 *D_8019DC60;
extern u32 *D_8019DC64;
extern u32 *D_8019DC68;
void func_80196074(u32 v) {
    *D_8019DC5C = 0x4000002;
    *D_8019DC60 = v;
    *D_8019DC64 = 0;
    *D_8019DC68 = 0x1000401;
}
