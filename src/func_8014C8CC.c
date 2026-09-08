#include "common.h"
extern u16 *D_8019ED54;
void func_8014C8CC(void)
{
    func_800F71DC(0);
    do {
        func_800F6B68(0xEDB0);
        func_800F824C(0);
        func_800F6B68(0xEDB1);
        func_800F824C(1);
        func_800F654C(1);
        func_80094D14();
        func_800F6630(0);
        func_800F8768(0xEDB0);
        func_800F6630(1);
        func_800F8768(0xEDB1);
        *D_8019ED54 = (u16)(*D_8019ED54 + 2);
        func_800F5958(0x80);
    } while (func_800F53D4() == 0);
}
