#include "common.h"
void func_8012C0A8(void)
{
    /* config save-flow: 0x60/0x45 windows, 0x1B3B/0x1B84/0x1B86 texts,
       801221EC/801210AC/8011EF30/8011FBA4/801263F0/8012C250 rows;
       4120(2) gate. */
    func_800F7500(3);
    func_800F66D8(0x60);
    func_800F4248(0xC0);
    if (func_800F4120(2) == 0)
        goto L12C1E0;
    func_800F971C();
    func_800F3D48();
    func_800F6564(0x1B3B);
    func_800F5480();
    func_800F8058(0xB0);
    func_800F9644(0x20);
    func_800F516C();
    func_800F8274(0x45);
    func_800F516C();
    func_800F5050();
    func_800F3F94(func_800F3C3C(0x45));
    func_800F9660(0x20);
    func_800F971C();
    func_800F3D48();
    func_800F6C68();
    func_800F9644(0x20);
    func_800F81B0(0x1B84);
    func_800F516C();
    func_800F5050();
    func_800F3F94(func_800F3B04(0x1B84));
    func_800F8274(0x45);
    func_800F9660(0x20);
    func_801221EC();
    return;
L12C1E0:
    func_800F7500();
    func_800F6240(0x1A82);
    func_800F939C();
    func_801210AC();
    func_800F7500();
    func_8011EF30();
    func_800F960C();
    func_8011FBA4();
    func_801263F0();
    func_8012C250();
    return;
}
