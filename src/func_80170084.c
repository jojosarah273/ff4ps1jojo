#include "common.h"
extern void func_8016BB44(void);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_80170084(void) {
    ;
    do {
        func_8016BB44();
        func_800F5E48();
    } while (func_800F5C64(0x202) != 0);
}
