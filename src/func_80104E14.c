#include "common.h"
void func_80104E14(void)
{
    /* shop sell rows: 0xB1/0xA1/0xD2 windows, 0x6A1/0x709 texts,
       80104F1C; 6434(2)/4120(2) gates. */
    func_800F6630(0xB1);
    if (func_800F6434(2) == 0)
        goto L104EF4;
    func_80104F1C();
    func_800F5574();
    if (func_800F53D4() == 0)
        goto L104F04;
    func_800F6564(0x709);
    func_800F5140();
    func_800F96E0();
    func_800F6630(0xA1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L104EBC;
    func_800F6D70(0x6A1);
    func_800F4248(3);
    func_800F4370(0xD2);
    if (func_800F4120(2) != 0)
        goto L104ED4;
    goto L104EF4;
L104EBC:
    func_800F6D70(0x6A1);
    func_800F4370(0xA);
    goto L104EE4;
L104ED4:
    func_800F6D70(0x6A1);
    func_800F4248(4);
L104EE4:
    if (func_800F4120(2) != 0)
        goto L104F04;
L104EF4:
    func_800F654C();
    return;
L104F04:
    func_800F654C(1);
    return;
}
