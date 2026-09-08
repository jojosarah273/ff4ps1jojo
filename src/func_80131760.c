#include "common.h"
void func_80131760(void)
{
    /* ability rows: 0x1B8B/0x16 texts, 0x43 window, 801224D0 +
       80132178 rows; gates 6434(2/0x80). */
    func_800F9200();
    func_801224D0();
    func_800F6B68(0x1B8B);
    if (func_800F6434(2) != 0)
        return;
    func_800F6630(0x43);
    func_80132178();
    func_800F6B68(3);
    if (func_800F6434(0x80) != 0)
        return;
    func_800F9644(0x20);
    func_800F6BE0(9);
    func_800F87DC(7);
    func_800F9660(0x20);
    func_800F93DC();
    return;
}
