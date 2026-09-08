#include "common.h"
extern u32 D_8019BDBC[];
void func_80191D78(void)
{
    u32 *p = (u32 *)D_8019BDBC;
    func_80191838(*p);
    *((u32 *)((u8 *)p - 4)) = 0;
}
