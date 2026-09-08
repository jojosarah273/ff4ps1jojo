#include "common.h"
extern u16 *D_8019ED44;
extern u8 *D_8019ED40;
void func_8013AA08(void)
{
    func_800F8D6C(0x45);
    func_800F6630(0x45);
    func_800F4248(0x1F);
    func_800F8188(0x1BA8);
    func_800F9644(0x20);
    func_800F658C(0x16AA);
    *D_8019ED44 = (u16)(*D_8019ED44 >> 5);
    func_800F9660(0x20);
    func_800F4248(0x1F);
    func_800F8188(0x1BA9);
    func_800F6630(0x46);
    {
        u8 *p = D_8019ED40;
        *p = (u8)(*p >> 2);
    }
    func_800F8188(0x1BAA);
}
