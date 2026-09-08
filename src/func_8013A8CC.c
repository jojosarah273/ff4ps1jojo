#include "common.h"
void func_8013A8CC(void)
{
    /* battle rows: 7270(0x41) then 8960/63BCx2/6364 loop on
       5958(9). */
    func_800F7270(0x41);
    do {
        func_800F8960();
        func_800F63BC();
        func_800F63BC();
        func_800F6364();
        func_800F5958(9);
    } while (func_800F53D4() == 0);
    return;
}
