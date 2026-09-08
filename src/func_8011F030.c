#include "common.h"
void func_8011F030(void)
{
    /* column rows: 0x29/0x2B/0x31/0x33 windows, 0xF7/0xFC codes,
       8011F118/8011F210 rows; loop L11F0D8 on 5DA0(0x32). */
    func_800F9644(0x20);
    func_800F6658(0x29);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x2B));
    func_800F6658(0x2D);
    func_800F8274(0x31);
    func_800F9660(0x20);
    func_800F654C(0xF7);
    func_8011F118();
    func_800F9200();
    func_800F6630(0x33);
    if (func_800F6434(2) != 0)
        goto L11F0D0;
    func_800F93DC();
    return;
L11F0D0:
    func_800F93DC();
L11f0d8:
    for (;;) {
        func_8011F210();
        func_800F5DA0(0x32);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(0xFC);
    func_8011F118();
    return;
}
