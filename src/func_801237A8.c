#include "common.h"
void func_801237A8(void)
{
    /* rows: 0x16A4/0x73/0x16A5/0x74 texts/windows, 80123958 (x2) +
       80123908/8011F360/80123878 rows; 53C0 gate. */
    func_800F6564(0x16A4);
    func_800F824C(0x73);
    func_800F7210(0x16A5);
    func_800F8D6C(0x74);
    func_80123958();
    func_80123958();
    func_800F7270(0x73);
    func_800F5958(0x3E7);
    if (func_800F53C0() == 0)
        goto L123828;
    func_800F7500();
    func_80123908();
    func_800F6630(0x5B);
    func_800F8960(0x56C);
    return;
L123828:
    func_800F7594(0x41);
    func_800F6630(0x1D);
    func_8011F360();
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto L123860;
    func_800F654C(0x80);
L123860:
    func_80123878();
    return;
}
