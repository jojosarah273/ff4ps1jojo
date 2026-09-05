#include "common.h"
extern void func_80140558(void);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_8014202C(void) {
    ;
    do {
        func_80140558();
        func_800F5E48();
    } while (func_800F5C64(0x202) != 0);
}
