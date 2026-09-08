#include "common.h"
void func_80124D08(void)
{
    /* rows: 0x163 text, 0x41/0x29 windows, 80124B74 row; loop
       L124D70 on 6B68(0x163)/5958(7). */
    func_800F939C();
    func_800F939C();
    func_80124B74();
    func_800F9644(0x20);
    func_800F9410();
    func_800F5410();
    func_800F4064(0xE);
    func_800F9660(0x20);
    func_800F7270(0x41);
L124d70:
    for (;;) {
        func_800F6B68(0x163);
        func_800F82EC(0x29);
        func_800F5EA0();
        func_800F5EA0();
        func_800F6364();
        func_800F5958(7);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F960C();
    return;
}
