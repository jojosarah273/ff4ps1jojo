#include "common.h"
void func_80169170(void)
{
    /* rows: 0x1E05 text, 0x29/0x14A windows, 801691F0/8011F300
       rows; loop L1691B0 on 5C64(0x202). */
    func_800F6564(0x1E05);
    func_800F9200();
    func_800F654C(0x29);
    func_801691F0();
    func_800F71DC(0x14A);
L1691b0:
    for (;;) {
        func_8011F300();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F93DC();
    func_801691F0();
    return;
}
