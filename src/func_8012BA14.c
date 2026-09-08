#include "common.h"
void func_8012BA14(void)
{
    /* config row: 0x30/0x3F windows, 0x1B22 text, 801267E8/
       8011F320/8011EF0C/801210AC/8011EF30/8011FBA4/8012B950 rows;
       gates 6434(2). */
    func_800F654C(0x30);
    func_800F824C(0x3F);
    func_801267E8();
    func_8011F320();
    func_8011EF0C();
    func_801210AC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FBA4();
    func_800F6564(0x1B22);
    if (func_800F6434(2) != 0)
        goto L12BAB4;
    func_800F654C(5);
    func_800F7500();
    goto L12BAC8;
L12BAB4:
    func_800F654C();
    func_800F7500();
L12BAC8:
    func_800F8188(0x1BC1);
    func_8011EF30();
    func_800F8F74(0x1BC3);
    func_8012B950();
    return;
}
