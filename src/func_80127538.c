#include "common.h"
void func_80127538(void)
{
    /* status rows: 0x73/0x74 windows, 0xA/0xC/0x5A/0x5B/0x5D/0x5E
       cells, 80123958/8011F360/8011F3F8 rows. */
    func_800F939C();
    func_800F824C(0x73);
    func_800F8D6C(0x74);
    func_800F926C();
    func_800F654C(0x7E);
    func_800F9200();
    func_800F9448();
    func_80123958();
    func_80123958();
    func_800F7270(0x73);
    func_800F6630(0x1D);
    func_8011F360();
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto L1275C0;
    func_800F654C(0x80);
L1275C0:
    func_800F8960(0xA);
    func_800F3D48();
    func_800F8960(0xC);
    func_800F9644(0x20);
    func_800F6658(0x73);
    func_800F9660(0x20);
    func_8011F3F8();
    func_800F6630(0x5A);
    func_800F8960();
    func_800F6630(0x5B);
    func_800F8960(2);
    func_800F6630(0x5D);
    func_800F8960(4);
    func_800F6630(0x5E);
    func_800F8960(6);
    func_800F654C(0xC8);
    func_800F8960(8);
    func_800F9448();
    func_800F960C();
    return;
}
