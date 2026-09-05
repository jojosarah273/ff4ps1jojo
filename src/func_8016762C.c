#include "common.h"
extern void func_80070174(void);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_8016762C(void) {
    ;
    do {
        func_80070174();
        func_800F5E48();
    } while (func_800F5C64(0x202) != 0);
}
