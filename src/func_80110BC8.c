#include "common.h"
void func_80110BC8(void)
{
    /* battle rows: 0x7A/0x21 windows, 0xEBB cell via 87DC/6214;
       loop L110C10 on 5958(0x10). */
    func_800F6630(0x7A);
    func_800F4248(0x1E);
    func_800F9644(0x20);
    func_800F71DC();
L110c10:
    for (;;) {
        func_800F87DC(0xEBB);
        func_800F6214();
        func_800F6214();
        func_800F4264(0x1F);
        func_800F5958(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6558();
    func_800F9660(0x20);
    return;
}
