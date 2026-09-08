#include "common.h"
void func_8015CB80(void)
{
    /* options seed row: 0x393B/0x393A texts, 0xA9/0xAD/0xAB windows,
       80152EAC/8015CC80 rows; 5C64(2) gate. */
    func_800F9330();
    func_800F6564(0x393B);
    func_800F78C4(func_800F3B04(0x393A));
    func_80152EAC();
    func_800F5E48();
    if (func_800F5C64(2) != 0)
        goto L15CC68;
    func_800F971C();
    func_800F6564(0x393B);
    func_800F824C(0xA9);
    func_800F824C(0xAD);
    func_800F71DC(5);
    func_800F8D6C(0xAB);
    func_8015CC80();
    func_800F6630(0xAD);
    func_800F8188(0x393B);
    func_800F6564(0x393A);
    func_800F824C(0xA9);
    func_800F824C(0xAD);
    func_800F71DC(0xD);
    func_800F8D6C(0xAB);
    func_8015CC80();
    func_800F6630(0xAD);
    func_800F8188(0x393A);
    return;
L15CC68:
    func_800F95A0();
    return;
}
