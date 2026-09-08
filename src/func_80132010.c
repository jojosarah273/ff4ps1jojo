#include "common.h"
void func_80132010(void)
{
    /* ability header: 0x1B8B text, 0x4E/0x50/0x49/0x48/0x4E windows,
       801224D0/801321B4 rows; 6434(2) gate. */
    func_800F9200();
    func_801224D0();
    func_800F6B68(0x1B8B);
    if (func_800F6434(2) != 0)
        return;
    func_801321B4();
    func_800F8D6C(0x4E);
    func_800F8FB8(0x50);
    func_800F66D8(0x4E);
    func_800F9200();
    func_800F4370(0x49);
    func_800F82EC(0x4E);
    func_800F93DC();
    func_800F4370(0x48);
    func_800F78C4(func_800F3A70(0x4E));
    func_800F3B04();
    func_800F82EC(0x4E);
    func_800F93DC();
    return;
}
