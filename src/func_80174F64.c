#include "common.h"
extern u8 *D_8019ED40;
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_80174F64(void)
{
    func_800F6564(0x1704);
    func_800F5574(6);
    if (func_800F53D4() == 0)
        return;
    func_800F6630(0x7A);
    {
        u8 *p = D_8019ED40;
        *p = (u8)(*p >> 2);
    }
    func_800F4248(0xE);
    *D_8019ED54 = *D_8019ED44;
    func_800F6C68(0x15C3DA);
    func_800F8188(0xEC7);
    func_800F6C68(0x15C3DB);
    func_800F8188(0xEC8);
}
