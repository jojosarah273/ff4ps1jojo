#include "common.h"
extern u8 D_8019D0FC[];
extern u16 *D_801FD352;
extern u16 *D_801FD350;
extern u32 *D_8019D0F4;
void func_801935C8(u32 a0, u32 a1)
{
    u8 *s0 = (u8 *)D_8019D0FC;
    *D_801FD352 = (u16)func_80197038(s0, a0, a1 + 0x80);
    *D_801FD350 = (u16)func_80196F48(s0 + 0x200, 0, 0, a0, a1, 0x80, 0x20);
    *D_8019D0F4 = 0;
    func_8018F098();
}
