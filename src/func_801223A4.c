#include "common.h"
void func_801223A4(void)
{
    /* rows: 0x29 window, 885C/63BC fills; loop L12244C on
       6434(2). */
    func_800F926C();
    func_800F9448();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
L12244c:
    for (;;) {
        if (func_800F6434(2) != 0)
            goto L1224B8;
        func_800F885C();
        func_800F63BC();
    }
L1224B8:
    func_800F9448();
    return;
}
