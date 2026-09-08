#include "common.h"
void func_8014D680(void)
{
    /* battle rows: 8014D5A0 row; gate 5574(0xFF) picks the
       960C/95A0 tail. */
    func_800F9330();
    func_800F939C();
    func_800F6564();
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto L14D6E8;
    func_800F6C68();
    func_8014D5A0();
    return;
L14D6E8:
    func_800F960C();
    func_800F95A0();
    return;
}
