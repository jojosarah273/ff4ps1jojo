#include "common.h"
void func_8018F2DC(u32 t, u8 *p)
{
    *(u16 *)&p[0xA] = (*(u16 *)&p[0xA] | t) | 0x12;
    for (s32 i = 0x28; i != 0; i--) { }
}
