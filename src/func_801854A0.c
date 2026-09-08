#include "common.h"
extern u16 *D_801DFD68;
void func_801854A0(u8 *p, u16 a1, u16 a2, u16 a3, u8 a4, u8 a5, u16 a6)
{
    func_80197378((u32)p);
    p[0x12] = (u8)a2;
    p[0x10] = (u8)a1;
    p[0x8] = (u8)a3;
    p[4] = 0x80;
    p[5] = 0x80;
    p[6] = 0x80;
    p[0xC] = a4;
    p[0xD] = a5;
    p[0xA] = (u8)a6;
    p[0xE] = (u8)*D_801DFD68;
}
