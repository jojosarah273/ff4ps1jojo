#include "common.h"
void func_8011B7B4(void)
{
    /* battle rows: 0x3D/0x3E windows, 0xFE5/0x1701 texts; gates
       6434(0x80/2) route the 4008(0x20) reads. */
    func_800F9200();
    func_800F824C(0x3D);
    func_800F8FB8(0x3E);
    func_800F6564(0xFE5);
    if (func_800F6434(0x80) != 0)
        goto L11B81C;
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto L11B83C;
L11B81C:
    func_800F6630(0x3D);
    func_800F5410();
    func_800F4008(0x20);
    func_800F824C(0x3D);
L11B83C:
    func_800F93DC();
    func_800F4248(7);
    return;
}
