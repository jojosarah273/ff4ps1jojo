#include "common.h"
void func_8012A678(void)
{
    /* config block: 0x1B23/0x1B22/0x1B19/0x1B25 texts, 0x3F window,
       8011F724 rows, 8012B0D8 alt; gates on 6434(2). */
    func_800F939C();
    func_800F654C(0x20);
    func_800F824C(0x3F);
    func_800F6564(0x1B23);
    func_800F5140();
    func_800F4F4C();
    func_800F4008(0x36);
    func_800F3D48();
    func_800F6564(0x1B22);
    if (func_800F6434(2) != 0)
        goto L12A6F8;
    func_800F654C(0x6C);
L12A6F8:
    func_800F5410();
    func_800F4008(4);
    func_800F7500(0x300);
    func_8011F724();
    func_800F6564(0x1B19);
    if (func_800F6434(2) != 0)
        goto L12A850;
    func_800F6564(0x1B25);
    func_800F5480();
    func_800F7F48(func_800F3B04(0x1B1A));
    func_800F5574(0xFC);
    if (func_800F53C0() != 0)
        goto L12A7B0;
    func_800F5574();
    if (func_800F53FC() != 0)
        goto L12A848;
    func_800F5574(0xB);
    if (func_800F53C0() != 0)
        goto L12A848;
L12A7B0:
    func_800F5140();
    func_800F4F4C();
    func_800F4008(0x36);
    func_800F3D48();
    func_800F6564(0x1B24);
    if (func_800F6434(2) != 0)
        goto L12A808;
    func_800F654C(0x70);
L12A808:
    func_800F5410();
    func_800F4008(8);
    func_800F7500(0x310);
    func_8011F724();
    return;
L12A848:
    func_8012B0D8();
    return;
L12A850:
    func_800F960C();
    return;
}
