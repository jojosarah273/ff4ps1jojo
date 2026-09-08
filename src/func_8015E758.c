#include "common.h"
void func_8015E758(void)
{
    /* options row: 0x3540/0x2003 texts, 0xA9 window, 8015330C row;
       loop L15E7B4 on 6434(0x202)/4120(0x202) gates. */
    func_800F9330();
    func_800F939C();
    func_800F971C();
    func_800F8D6C(0xA9);
L15e7b4:
    for (;;) {
        func_800F6D70(0x3540);
        if (func_800F6434(0x202) != 0)
            goto L15E7F4;
        func_800F6B68(0x2003);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            goto L15E7F4;
        func_800F62BC(0xA9);
    L15E7F4:
        func_8015330C();
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F960C();
    func_800F95A0();
    func_800F6630(0xA9);
    func_800F8188(0x38DB);
    return;
}
