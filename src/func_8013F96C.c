#include "common.h"
void func_8013F96C(void)
{
    /* battle rows: 6C68/8960/63BCx2 cells; loop L13F9B8 on
       5958(5). */
    func_800F971C();
L13f9b8:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F5958(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
