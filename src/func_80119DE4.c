#include "common.h"
void func_80119DE4(void)
{
    /* shop buy: 0x1700 gate picks 80103790/801038D4; then 79/7A/7B
       windows + 0x81/0x4200 titles via 8011EA5C. */
    func_800F6564(0x1700);
    if (func_800F6434(2) == 0)
        goto L119E14;
    func_80103790();
    goto L119E1C;
L119E14:
    func_801038D4();
L119E1C:
    func_800F8FB8(0x79);
    func_800F8FB8(0x7A);
    func_800F8FB8(0x7B);
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800FE7B0();
    func_800F654C(0xF);
    func_800F8188(0x2100);
    func_800F5448();
    func_8011EA5C();
    return;
}
