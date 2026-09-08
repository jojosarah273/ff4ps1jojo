#include "common.h"
void func_80130AA4(void)
{
    /* ability detail: 0x1B87/0x1B83/0x1B84 texts, 0x45/0x1B93
       windows, 801308B4 row; gates 6434(2). */
    func_800F6564(0x1B87);
    if (func_800F6434(2) != 0)
        goto L130BB0;
    func_800F6564(0x1B83);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3B04(0x1B83));
    func_800F3F38(func_800F3B04(0x1B84));
    func_801308B4();
    func_800F6D70(0x1560);
    func_800F3D48();
    func_800F654C();
    func_800F3D48();
    func_800F9644(0x20);
    func_800F516C();
    func_800F8274(0x45);
    func_800F516C();
    func_800F5050();
    func_800F3F94(func_800F3C3C(0x45));
    func_800F9660(0x20);
    func_800F6C68();
    func_800F4248(0x7F);
    func_800F8188(0x1B93);
    return;
L130BB0:
    func_800F6564(0x1B93);
    return;
}
