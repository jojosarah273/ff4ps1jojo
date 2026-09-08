#include "common.h"
void func_80169958(void)
{
    /* shop rows: 0xA0/0x211A texts + 0x7D1B/0x7D19/0x7D1E/0x7D1D
       texts, 8016D4D8 close; loop L169998 on 5958. */
    func_800F971C();
    func_800F8188(0xA0);
    func_800F81E8(0x211A);
L169998:
    for (;;) {
        func_800F885C();
        func_800F6364();
        func_800F5958();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F71DC();
    func_800F8D00(0x7D1B);
    func_800F71DC();
    func_800F8D00(0x7D19);
    func_800F654C(0x13);
    func_800F8188(0x7D1E);
    func_800F654C(0x20);
    func_800F8188(0x7D1D);
    func_8016D4D8();
    return;
}
