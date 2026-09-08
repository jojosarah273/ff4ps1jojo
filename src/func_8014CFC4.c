#include "common.h"
void func_8014CFC4(void)
{
    /* battle rows: 5574(2/3) gates route the 0xFF window fill; loop
       L14D038 on 5A90(0x10); 8014E424 detail. */
    func_800F6564();
    func_800F5574(2);
    if (func_800F53D4() != 0)
        goto L14D004;
    func_800F5574(3);
    if (func_800F53D4() == 0)
        return;
L14D004:
    func_800F654C(0xFF);
    func_800F8188();
    func_800F971C();
L14d038:
    for (;;) {
        func_800F8960();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564();
    func_8014E424();
    return;
}
