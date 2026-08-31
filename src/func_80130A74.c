#include "common.h"
extern void func_800F7500(u32 v);
extern void func_800F9200(u32 v);
extern void func_80130A24(u32 v);
void func_80130A74(void) { func_800F9200(); func_800F7500(0x5); func_80130A24(); }
