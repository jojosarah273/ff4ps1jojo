#include "common.h"
void func_80127C70(void)
{
    /* ability/status details screen: 80126610..80136014 header chain,
       0x1BE4/0x17FE stat block, 0x1B47/0x1B46 detail rows with the
       s2/6434(2) gates, 0x46/0x45 windows. */
    func_80126610();
    func_801266A0();
    func_80123FB4();
    func_80126330();
    func_801241B8();
    func_80120E2C();
    func_80125A64();
    func_80136014();
    func_800F71DC(0x1BE4);
    if (func_800F56AC(func_800F3B04(0x17FE)) == 0)
        goto L127CFC;
    func_8012281C();
    goto L127D38;
L127CFC:
    func_80120E2C();
    func_800F7500();
    func_8011EF30();
    func_800F71DC(0x394);
    func_800F7500();
    func_8011F8D4();
L127D38:
    func_8011F6A4();
    func_8017F8F8();
    func_80120F1C();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FBA4();
    func_800F7500();
    func_8011FBA4();
    func_800F6564(0x16A4);
    func_800F7210(0x16A5);
    func_800F7500();
    func_80127538();
    func_800F7500();
    func_8011FBA4();
    func_80120FBC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_800F71DC(0x676);
    func_8011F8D4();
    func_800F7500(0x62C);
    func_800F6564(0x16A2);
    func_800F7210(0x16A0);
    func_80124D08();
    func_80126330();
    func_8012214C();
    func_8011EF0C();
    /* s2/v0 gate -> L127E80 */
    func_800F6564(0x1B47);
    if (func_800F6434(2) != 0)
        goto L127E80;
    func_80127F2C();
L127E80:
    func_80138664();
    func_80126590();
    func_800F8F74(0x1B46);
    func_800F6564(0x1B46);
    if (func_800F6434(2) != 0)
        goto L127EC0;
    func_800F654C(0x40);
    goto L127EC8;
L127EC0:
    func_800F654C(0x30);
L127EC8:
    func_800F824C(0x46);
    func_800F654C(0xB8);
    func_800F824C(0x45);
    func_8011F6D4();
    func_8011F684();
    func_8011F884();
    func_800F8F74(0x1B46);
    func_800F5480();
    return;
}
