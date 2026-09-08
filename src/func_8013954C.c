#include "common.h"
void func_8013954C(void)
{
    /* ability rows: 0x99 cells, 801395E4/8011F684/801264E8/
       8011F884/801391D4 rows; loop L139554 on 5DA0/5B8C(0x202). */
L139554:
    for (;;) {
        func_800F9644(0x20);
        func_800F5DD4(0x99);
        func_800F5DD4(0x99);
        func_800F9660(0x20);
        func_800F9200();
        func_801395E4();
        func_8011F684();
        func_801264E8();
        func_800F93DC();
        func_800F5CCC();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_8011F884();
    func_800F7270(2);
    func_800F8D6C();
    func_801391D4();
    return;
}
