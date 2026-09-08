#include "common.h"
void func_80127668(void)
{
    /* rows: 0x46/0x45 windows, 0x1000/0x7FF/0x7000 values, 80135B54
       close; gate 5B8C(0x80). */
    func_800F5CCC();
    if (func_800F5B8C(0x80) != 0)
        goto L127700;
    func_800F824C(0x46);
    func_800F8FB8(0x45);
    func_800F926C();
    func_800F9644(0x20);
    func_800F7270(0x45);
    func_800F7500(0x1000);
    func_800F6558(0x7FF);
    func_800F3D64(0x7000);
    func_800F9660(0x20);
    func_80135B54();
    func_800F9448();
    return;
L127700:
    func_80127718();
    return;
}
