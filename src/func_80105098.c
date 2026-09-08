#include "common.h"
void func_80105098(void)
{
    /* shop sell rows: 0xAB/0xD2 windows, 0x6A1/0x6A1 texts + 0x1706/
       0x1707 texts with 0xC/0xE/0xAE windows, 8010D4EC row;
       4120(2) gates. */
    func_800F6630(0xAB);
    func_800F5140();
    func_800F96E0();
    func_800F6D70(0x6A1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L105100;
    func_800F6D70(0x6A1);
    func_800F4248(3);
    func_800F4370(0xD2);
    if (func_800F4120(2) != 0)
        return;
L105100:
    func_800F6630(0xAB);
    func_800F96E0();
    func_800F6564(0x1706);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xE);
    func_800F654C(0xFF);
    func_800F824C(0xAE);
    func_8010D4EC();
    return;
}
