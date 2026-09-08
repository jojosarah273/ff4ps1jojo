#include "common.h"
void func_80128480(void)
{
    /* shop/status: 0x48/0x49 windows, 80127718/8012833C rows; loop
       L1284A0 on 5574(4); 0x1000/0x7FF/0x7E70 gates. */
    func_80127718();
    func_800F8FB8(0x48);
    func_800F8FB8(0x49);
L1284a0:
    for (;;) {
        func_800F6630(0x48);
        func_8012833C();
        if (func_800F53C0() != 0)
            goto L128558;
        func_800F9644(0x20);
        func_800F926C();
        func_800F6658(0x48);
        func_800F3D48();
        func_800F939C();
        func_800F71DC(0x1000);
        func_800F6558(0x7FF);
        func_800F3D64(0x7E70);
        func_800F95A0();
        func_800F6558(0x2000);
        func_800F87DC(0x6AA);
        func_800F9448();
        func_800F9660(0x20);
    L128558:
        func_800F6630(0x48);
        func_800F61E8();
        func_800F824C(0x48);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
