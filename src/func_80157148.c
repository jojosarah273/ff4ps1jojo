#include "common.h"
void func_80157148(void)
{
    /* options rows: 0xDF/0xE1/0xE3 windows, 0x289C cell,
       8015240C row; loop L15718C on 5A90(0x83). */
    func_800F9330();
    func_800F824C(0xDF);
    func_800F654C(3);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F7500(0x80);
L15718c:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x289C);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x83);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F95A0();
    return;
}
