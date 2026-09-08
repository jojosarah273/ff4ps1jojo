#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_80142DC0(void)
{
    /* battle rows: 80142E34 + D54 <- D44; loop on 654C(8)/
       80143E44/6364/5958(0x10). */
    func_80142E34();
    func_800F971C();
    D_8019ED54[0] = D_8019ED44[0];
    do {
        func_800F654C(8);
        func_80143E44();
        func_800F6364();
        func_800F5958(0x10);
    } while (func_800F53D4() == 0);
}
