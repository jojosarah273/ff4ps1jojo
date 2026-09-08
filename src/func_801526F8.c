#include "common.h"
void func_801526F8(void)
{
    /* shop rows: 0xE1/0xE5/0xDF windows, 8015240C row + 0xE3; loop
       L15275C on 56AC(3C3C(0xE5)). */
    func_800F824C(0xE1);
    func_800F6630(0xE5);
    func_800F824C(0xDF);
    func_800F6630(0xE1);
    func_800F824C(0xE5);
    func_8015240C();
    func_800F7594(0xE3);
    func_800F971C();
L15275c:
    for (;;) {
        func_800F67FC(0x80);
        func_800F8768(0x289C);
        func_800F63BC();
        func_800F6364();
        if (func_800F56AC(func_800F3C3C(0xE5)) == 0)
            continue;
        break;
    }
    return;
}
