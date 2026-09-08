#include "common.h"
void func_80126BB8(void)
{
    /* ability main: 1B9A text gate + 1BE4/1A5F/1A3C rows; calls
       80126E08 (sub-dispatcher); loop L126BE4 on 6EA9C/56AC(!=0)
       with 80128480/80128B3C/801793F8/80128264/8011F864 rows. */
    func_800F926C();
    func_800F9298();
    func_80178BB4();
L126be4:
    for (;;) {
        func_8016EA9C();
        func_800F654C(0x7E);
        func_800F9200();
        func_800F9448();
        func_800F8F74(0x1B9A);
        func_800F71DC(0x1BE4);
        if (func_800F56AC(func_800F3B04(0x1A5F)) != 0)
            goto L126C54;
        func_800F8D00(0x1A5F);
        func_800F8F74(0x1A3C);
        func_80128264();
        func_8011F864();
    L126C54:
        func_80128480();
        func_80128B3C();
        func_801793F8();
        /* v1/v0 gate -> L126C88 */
        func_800F8F74(0x1A3C);
        /* v1/v0 gate -> L126CA4 */
        func_800FF0AC();
        func_80128480();
        func_80128B3C();
        if (func_800F53C0() != 0)
            goto L126D00;
        func_80126E08();
        /* v1/v0 gate -> L126CF8 */
        func_80126610();
        func_80178BB4();
        continue;
        func_80126D48();
    L126D00:
        func_80122114();
        func_800F971C();
        func_800F3D48();
        func_800F65C8(0x17FB);
        func_800F94B8();
        func_800F9448();
        return;
    }
    func_80126D48();
    return;
}
