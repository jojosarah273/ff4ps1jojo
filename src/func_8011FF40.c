#include "common.h"
extern void func_800F9200(u32 v);
extern void func_800F926C(u32 v);
extern void func_800F9330(u32 v);
extern void func_800F939C(u32 v);
extern void func_8011FF80(u32 v);
void func_8011FF40(void) { func_800F9200(); func_800F9330(); func_800F939C(); func_800F926C(); func_8011FF80(); }
