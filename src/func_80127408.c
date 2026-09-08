#include "common.h"
void func_80127408(void)
{
    /* status: 8012214C header + 65F0/81B0(!=) cells + 4 x 801287B8
       blocks, then the 0x34 window save row (801210AC/8011EF30/
       8011EF0C); closes with 71DC(0x4000). */
    func_8012214C();
    func_800F9644(0x20);
    func_800F65F0();
    func_800F81B0();
    func_800F81B0();
    func_800F65F0();
    func_800F81B0();
    func_800F81B0();
    func_800F65F0();
    func_800F81B0();
    func_800F81B0();
    func_800F65F0();
    func_800F81B0();
    func_800F81B0();
    func_800F9660(0x20);
    func_800F971C();
    func_801287B8();
    func_801287B8();
    func_801287B8();
    func_801287B8();
    func_800F71DC(0x4000);
    func_800F8D00();
    func_800F6630(0x34);
    func_800F9200();
    func_801210AC();
    func_800F654C(0x30);
    func_800F824C(0x34);
    func_800F7500();
    func_8011EF30();
    func_800F93DC();
    func_800F824C(0x34);
    func_8011EF0C();
    return;
}
