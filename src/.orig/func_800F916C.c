#include "common.h"
extern u16 *D_8019ED4C;
void func_800F916C(u16 v) { u16 i = *D_8019ED4C;
    *((u8 *)0x800D0000 + i) = v;
    *((u8 *)0x800C8000 + 0x7FFF + i) = v >> 8;
    *D_8019ED4C = i - 2;
}
