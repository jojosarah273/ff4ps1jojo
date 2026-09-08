#include "common.h"
extern u8 *D_8019ED40;
void func_8012E758(void)
{
    u8 *p = D_8019ED40;
    *p = (u8)(*p << 5);
    func_800F824C(0x43);
    func_800F7594(0x43);
    func_800F71DC(0x20);
    do {
        func_800F6D70(0xFE28);
        func_800F8960(0xA160);
        func_800F63BC();
        func_800F5E48();
    } while (func_800F5C64(0x202) != 0);
}
