#include "common.h"
void func_8011DA88(void)
{
    /* shop sale rows: 0xAB/0x99/0x95/0x9B/0x9D/0x9F windows, 0x2115/
       0x4300/0x2116/0x4302/0x4305/0xADB/0xB1B texts; 4120(0x202)/
       6434(0x202) gates; 7170(2) pick. */
    func_800F6630(0xAB);
    func_800F4248(1);
    if (func_800F4120(0x202) == 0)
        goto L11DAC0;
    func_800F654C(0x80);
    goto L11DAE0;
L11DAC0:
    func_800F6630(0xAB);
    if (func_800F6434(0x202) == 0)
        goto L11DBE0;
    func_800F654C(0x81);
L11DAE0:
    func_800F8188(0x2115);
    func_800FCC84();
    func_800F654C(1);
    func_800F8188(0x4300);
    func_800F7270(0x99);
    func_800F8D00(0x2116);
    func_800F71DC(0xADB);
    func_800F8D00(0x4302);
    func_800F7270(0x95);
    func_800F8D00(0x4305);
    func_800FCCBC();
    func_800F7270(0x9B);
    func_800F8D00(0x2116);
    func_800F7270(0x97);
    if (func_800F7170(2) != 0)
        goto L11DB70;
    func_800F8D00(0x4305);
    func_800FCCBC();
L11DB70:
    func_800F7270(0x9D);
    func_800F8D00(0x2116);
    func_800F71DC(0xB1B);
    func_800F8D00(0x4302);
    func_800F7270(0x95);
    func_800F8D00(0x4305);
    func_800FCCBC();
    func_800F7270(0x9F);
    func_800F8D00(0x2116);
    func_800F7270(0x97);
    if (func_800F7170(2) != 0)
        return;
    func_800F8D00(0x4305);
    func_800FCCBC();
    return;
L11DBE0:
    return;
}
