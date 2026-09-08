#include "common.h"
void func_8010CA74(void)
{
    /* battle rows: 0xAE/0x9D1/0x9CF texts, 8010D61C row; loop
       L10CA98 on 5574(0xC). */
    func_800F8FB8(0xAE);
    func_800F7210(0x9D1);
    func_800F8D00(0x9CF);
L10ca98:
    for (;;) {
        func_800F6C68();
        func_8010D61C();
        func_800F7210(0x9CF);
        func_800F8D00();
        func_800F62BC(0xAE);
        func_800F6630(0xAE);
        func_800F5574(0xC);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
