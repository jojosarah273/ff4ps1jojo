#include "common.h"
void func_80127808(void)
{
    func_801360AC();
    func_80126610();
    func_801266A0();
    func_80123FB4();
    func_80126330();
    func_801241B8();
    func_80120E2C();
    func_80125A64();
    func_800F71DC(0x1BE4);
    if (func_800F56AC(func_800F3B04(0x17FE)) == 0)
        goto L78a4;
    func_8012281C();
    goto L78f4;
L78a4:
    ;
L78b8:
    func_80120E2C();
    func_800F7500();
    func_8011EF30();
    func_800F71DC(0x394);
    func_800F7500();
    func_8011F8D4();
L78f4:
    func_8011F6A4();
    func_8017F8F8();
    func_80120F1C();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011EF30();
    func_800F6564(0x1B47);
    if (func_800F6434(2) != 0)
        goto L7980;
    func_800F7500();
    func_8011FBA4();
    goto L7998;
L7980:
    func_800F7500();
    func_8011FBA4();
L7998:
    func_800F7500();
    func_8011FBA4();
    func_800F6564(0x16A4);
    func_800F7210(0x16A5);
    func_800F7500(0xCB2E);
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
    /* s2 branch */
    func_800F6564(0x1B47);
    if (func_800F6434(2) != 0)
        goto L7a8c;
    /* bnez -> L7a8c */
    func_80127F2C();
L7a8c:
    func_80126590();
    func_800F8F74(0x1B46);
    /* v1 branch */
    func_800F654C(1);
    func_800F8188(0x1B46);
L7abc:
    func_800F6564(0x1B46);
    if (func_800F6434(2) != 0)
        goto L7ae4;
    func_800F654C(0x40);
    goto L7aec;
L7ae4:
    func_800F654C(0x30);
L7aec:
    func_800F824C(0x46);
    func_800F654C(0xB8);
    func_800F824C(0x45);
    func_8011F6D4();
    func_8011F684();
    func_8011F884();
    /* beqz -> L7b4c */
    func_800F8F74(0x1B46);
    func_800F5480();
L7b3c:
    func_80136148();
    return;
L7b4c:
    /* v1 branch */
    func_80135BE4();
    /* blez a0 -> L7b98 */
    func_80136014();
    return;
L7b98:
    func_800F6630(1);
    func_800F4248(0xC);
    if (func_800F4120(2) != 0)
        goto L7bd8;
    func_800F6564(0x1B46);
    func_800F61E8();
    func_800F4248(1);
    func_800F8188(0x1B46);
L7bd8:
    func_800F6630();
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L7c28;
    func_800F5480();
    func_800F6564(0x1B46);
    if (func_800F6434(2) != 0)
        goto L7b3c;
    func_800F5410();
    goto L7b3c;
L7c28:
    func_800F6630(1);
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L7abc;
    func_800F5410();
    func_80136148();
    return;
}
