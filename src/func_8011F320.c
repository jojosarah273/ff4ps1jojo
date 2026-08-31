#include "common.h"
extern void func_800F6630(u32 v);
extern void func_800F81E8(u32 v);
extern void func_800F9200(u32 v);
extern void func_800F93DC(u32 v);
extern void func_80177DEC(u32 v);
void func_8011F320(void) { func_800F9200(); func_80177DEC(); func_800F6630(0x88); func_800F81E8(0x2100); func_800F93DC(); }
