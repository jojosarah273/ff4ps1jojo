#include "common.h"
extern u16 D_8019BE6C[];
extern u16 *D_8019CEFC;
extern u32 *D_8019CF00;
extern u16 *D_8019CEF8;
u32 func_8019307C(void)
{
    u16 *s = (u16 *)D_8019BE6C;
    if (s[0] == 0)
        return 0;
    func_801976E8();
    s[0x19] = *D_8019CEFC;
    *(u32 *)(s + 0x1A) = *D_8019CF00;
    *D_8019CEFC = 0;
    *D_8019CEF8 = *D_8019CEFC;
    *D_8019CF00 &= 0x77777777;
    func_801976C8();
    s[0] = 0;
    return (u32)s;
}
