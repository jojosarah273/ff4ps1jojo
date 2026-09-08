#include "common.h"
void func_80122D20(void)
{
    /* equip sub-cell renderer (called by the 80130C74/80130F90 family):
       0x48/0x4B/0x4D/0x4F/0x46/0x57/0x49/0x51/0x4A/0x4E/0x4C/0xC7
       stat cells through 80123B00/80120A0C/80123320/8011F360/80122F2C;
       early exit when 4120(2) holds. */
    func_800F6D70();
    func_800F4248(0x3F);
    if (func_800F4120(2) != 0)
        return;
    func_800F8EBC(0x48);
    func_800F8D6C(0x4B);
    func_80123B00();
    func_80120A0C();
    func_800F7594(0x4B);
    func_800F7270(0x48);
    func_80123320();
    func_800F9644(0x20);
    func_800F6658(0x4B);
    func_800F5410();
    func_800F4064(0x84);
    func_800F8274(0x4B);
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_800F654C(0x4D);
    func_800F8768();
    func_800F8768(8);
    func_800F654C(0x46);
    func_800F8768(2);
    func_800F8768(6);
    func_800F654C(0x57);
    func_800F8768(4);
    func_800F654C(0x49);
    func_800F8768(0x40);
    func_800F654C(0x51);
    func_800F8768(0x42);
    func_800F8768(0x82);
    func_800F654C(0x4A);
    func_800F8768(0x80);
    func_800F654C(0xC7);
    func_800F8768(0x4E);
    func_800F8768(0x8E);
    func_800F7500(2);
    func_800F66D8(0x48);
    func_8011F360();
    func_800F8768(0x14);
    func_800F3D48();
    func_800F8768(0x16);
    func_800F9644(0x20);
    func_800F6558(0x46);
    func_800F7500(7);
    func_80122F2C();
    func_800F6558(0x50);
    func_800F7500(9);
    func_80122F2C();
    func_800F6558(0x86);
    func_800F7500(0xB);
    func_80122F2C();
    func_800F6558(0x90);
    func_800F7500(0xD);
    func_80122F2C();
    func_800F9660(0x20);
    return;
}
