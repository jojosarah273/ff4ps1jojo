#include "common.h"
extern void func_80074B50(u32 v);
extern void func_8009A0E0(u32 v);
extern void func_800F654C(u32 v);
extern void func_8013F124(u32 v);
extern void func_80140A5C(u32 v);
extern void func_8014D528(u32 v);
void func_80140A0C(void) { func_80140A5C(); func_80074B50(); func_8013F124(); func_800F654C(0x59); func_8014D528(); func_800F654C(0x2); func_8009A0E0(); }
