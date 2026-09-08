#include "common.h"
void func_8016DB94(void)
{
    /* config: 4264(0x1FF)/64EC gates, 0x14/0x20 windows, 8016D028
       rows; 6180(0x202)/5480 close. */
    func_800F9644(0x20);
    func_800F4264(0x1FF);
    func_800F516C();
    func_800F6CF4();
    if (func_800F64EC() != 0)
        goto L16DC78;
    func_800F8274(0x10);
    func_8016D028();
    func_800F9644(0x20);
    func_800F6658(0x14);
    func_800F6214();
    if (func_800F6180() != 0)
        goto L16DCB0;
L16DC50:
    func_800F8274(0x14);
    func_800F971C();
    func_800F9660(0x20);
    func_800F5480();
    return;
L16DC78:
    func_800F9644(0x20);
    func_800F8274(0x10);
    func_8016D028();
    func_800F9644(0x20);
    func_800F6658(0x14);
    if (func_800F64EC(0x80) != 0)
        goto L16DC50;
L16DCB0:
    func_800F8274(0x14);
    func_800F971C();
    func_800F9660(0x20);
    func_800F5410();
    return;
}
