#include "common.h"
void func_80124298(void)
{
    /* rows: 0xE4 window, 80124EAC cursor, 0x1A67/0x1A68 texts,
       80124358 row; loop L1242A8 on 5574(5). */
    func_800F8FB8(0xE4);
L1242a8:
    for (;;) {
        func_800F6630(0xE4);
        func_80124EAC();
        func_800F5140();
        func_800F824C(0x43);
        func_800F7594(0x43);
        func_800F6B68();
        func_800F4248(0x3F);
        func_800F824C(0x5A);
        func_800F8960(0x1A67);
        func_800F6630(0xE4);
        func_800F824C(0x5B);
        func_800F8960(0x1A68);
        func_800F6B68(1);
        func_800F824C(0x5C);
        func_80124358();
        func_800F62BC(0xE4);
        func_800F6630(0xE4);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
