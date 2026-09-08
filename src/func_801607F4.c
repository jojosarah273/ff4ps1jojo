#include "common.h"
void func_801607F4(void)
{
    /* options: 0x2000/0xA9/0x2A04-0x2A06 texts/windows, 8015330C/
       80152CDC/8015310C rows; loops L160824 and L160864. */
    func_800F971C();
    func_800F8D6C(0xA9);
L160824:
    for (;;) {
        func_800F6B68(0x2000);
        func_800F4248(0x1F);
        func_800F5574(0x11);
        if (func_800F53D4() != 0)
            goto L160864;
        func_8015330C();
        func_800F62BC(0xA9);
    }
L160864:
    func_800F6630(0xA9);
    func_80152CDC();
    func_800F654C(3);
    func_8015310C();
    func_800F7210(0x3598);
    func_800F654C(0xA);
    func_800F8768(0x2A04);
    func_800F90EC(0x2A05);
    func_800F90EC(0x2A06);
    func_800F6240(0x38E4);
    return;
}
