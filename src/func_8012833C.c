#include "common.h"
void func_8012833C(void)
{
    /* shop rows: 0x51/0x46/0x45 windows, 801387D8 row; gates
       5A90(0x1BE4)/5520(3B9C). */
    func_800F824C(0x51);
    func_800F824C(0x46);
    func_800F8FB8(0x45);
    func_800F7270(0x45);
    func_800F9644(0x20);
    func_800F6CF4(0x20);
    func_800F9660(0x20);
    func_800F5A90(0x1BE4);
    if (func_800F53D4() != 0)
        goto L1283E0;
L1283C8:
    func_800F9660(0x20);
    func_800F5410();
    return;
L1283E0:
    func_800F6630(0x51);
    func_800F61E8();
    func_801387D8();
    func_800F9644(0x20);
    func_800F7270(0x45);
    func_800F5520(func_800F3B9C());
    if (func_800F53D4() == 0)
        goto L1283C8;
    func_800F9660(0x20);
    func_800F5480();
    return;
}
