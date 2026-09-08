#include "common.h"
extern u8 *D_8019ED40;
void func_80131F98(void)
{
    u8 *p = D_8019ED40;
    func_800F824C(0x48);
    *p = (u8)~*p;
    func_800F824C(0x49);
    func_800F8EBC(0x4B);
    func_800F654C(0);
    do {
        func_80132010();
        func_800F61E8();
        func_800F5574(5);
    } while (func_800F53D4() == 0);
}
