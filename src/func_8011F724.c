#include "common.h"
extern u16 *D_8019ED54;
extern u16 *D_8019ED44;
void func_8011F724(void)
{
    func_800F654C(0xA);
    func_800F926C();
    func_800F9200();
    func_800F654C(0x7E);
    func_800F9200();
    func_800F9448();
    func_800F93DC();
    func_800F8960(2);
    func_800F9644(0x20);
    *D_8019ED44 = *D_8019ED54;
    func_800F9660(0x20);
    func_800F8960(0);
    func_800F3D48();
    func_800F8960(1);
    func_800F6630(0x3F);
    func_800F8960(3);
    func_800F9448();
}
