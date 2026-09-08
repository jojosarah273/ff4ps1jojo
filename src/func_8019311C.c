#include "common.h"
extern u16 D_8019BE6C[];
extern u32 *D_8019CEFC;
extern u32 *D_8019CF00;
u32 func_8019311C(void)
{
    u16 *s = (u16 *)D_8019BE6C;
    if (s[0] != 0)
        return 0;
    func_801976D8((u32)(void *)(s + 0x1C));
    *D_8019CEFC = s[0x19];
    s[0] = 1;
    *D_8019CF00 = *(u32 *)(s + 0x1A);
    func_801976F8();
    return (u32)s;
}
