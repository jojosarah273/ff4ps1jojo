#include "common.h"
void func_801617D8(void)
{
    /* options bars: 0x2001/0xA9/0xAA cells; loop L161820 on 5A90(5). */
    func_800F971C();
L161820:
    for (;;) {
        func_800F6B68(0x2001);
        func_800F824C(0xA9);
        func_800F4248(0x80);
        func_800F824C(0xAA);
        func_800F6630(0xA9);
        func_800F4248(0x7F);
        func_800F78C4(func_800F3C3C(0xAA));
        func_800F8768(0x2001);
        func_800F9644(0x20);
        func_800F5410();
        func_800F4064(0x80);
        func_800F971C();
        func_800F9660(0x20);
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
