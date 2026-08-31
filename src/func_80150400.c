#include "common.h"
extern void func_800F71DC(u32 v);
extern void func_800F7500(u32 v);
extern void func_80150458(u32 v);
extern void func_80150610(u32 v);
void func_80150400(void) { func_800F71DC(0x440); func_80150610(); func_800F7500(0x1EC0); func_80150458(); func_800F71DC(0x460); func_80150610(); func_800F7500(0x1FC0); func_80150458(); }
