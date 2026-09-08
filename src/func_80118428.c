#include "common.h"
void func_80118428(void)
{
    /* battle rows: 0x7/0x3D windows, 0x1030/0x1032 texts, 80150A30
       row; loop L11849C on 5DA0(7)/5B8C(0x202). */
    func_800F824C(7);
    func_800F5480();
    func_800F7F48(func_800F3C3C(7));
    func_800F654C(7);
    func_800F824C(7);
    func_800F7594(0x3D);
L11849c:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x1030);
        func_800F6364();
        func_800F63BC();
        func_800F5DA0(7);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F76BC(func_800F3C3C(0x3E));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x3D));
    func_800F6630(0x3D);
    func_80150A30();
    return;
}
