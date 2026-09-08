#include "common.h"
void func_8018F478(void)
{
    u32 *s = (u32 *)func_8018F2DC;
    u32 *d = (u32 *)0xDF80;
    do {
        *d = *s;
        s++;
        d++;
    } while (s != (u32 *)func_8018F34C);
}
