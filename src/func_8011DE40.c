#include "common.h"
void func_8011DE40(void)
{
    /* shop sale confirm: 0xAB/0x6FA/0x70A texts, 0x3D/0x93/0x3E/0x44
       windows, 8011DFE4/8017583C/8011E16C/8011E318 rows; 4120(0x202)/
       6434(0x202) gates. */
    func_800F6630(0xAB);
    func_800F4248(1);
    func_800F4120(0x202);
    func_800F6564(0x6FA);
    func_800F6630(0xAB);
    func_800F4248(2);
    if (func_800F4120(0x202) != 0)
        goto L11DEC0;
    func_800F6564(0x70A);
    func_800F5480();
    func_800F8058(0x1F);
    goto L11DEDC;
L11DEC0:
    func_800F6564(0x70A);
    func_800F5410();
    func_800F4008(0x20);
L11DEDC:
    func_800F824C(0x3D);
    func_800F824C(0x93);
    func_800F8FB8(0x3E);
    func_800F8FB8(0x44);
    func_800F6630(0x3D);
    func_800F4248(0x3F);
    func_800F824C(0x41);
    func_800F8FB8(0x40);
    func_800F4F28(func_800F3C3C(0x3D));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F6564(0x1700);
    if (func_800F6434(0x202) != 0)
        goto L11DFA4;
    func_8011DFE4();
    func_8017583C();
    return;
L11DFA4:
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L11DFCC;
    func_8011E16C();
    return;
L11DFCC:
    func_8011E318();
    return;
}
