#include "common.h"
void func_8013ED14(void)
{
    /* battle rows: 0x2/0x3/0x4 windows, 0x6CFD cells; loop L13ED2C
       on 5DA0(0x4)/5B8C(0x202). */
    func_800F654C();
    func_800F824C(4);
L13ed2c:
    for (;;) {
        func_800F6C68();
        func_800F824C(2);
        func_800F4248(0x80);
        func_800F824C(3);
        func_800F6630(2);
        func_800F4248(0x3F);
        func_800F61E8();
        func_800F8960(0x6CFD);
        func_800F63BC();
        func_800F6630(2);
        func_800F4248(0x40);
        func_800F5410();
        func_800F4008(4);
        func_800F78C4(func_800F3C3C(3));
        func_800F8960(0x6CFD);
        func_800F63BC();
        func_800F6364();
        func_800F5DA0(4);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}
