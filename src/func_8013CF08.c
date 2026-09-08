#include "common.h"
void func_8013CF08(void)
{
    /* battle rows: 80143D64/80143D14/8013D040 rows; loop L13CF50
       on 5958(8). */
    func_800F971C();
L13cf50:
    for (;;) {
        func_80143D64();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F824C();
        func_80143D14();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F824C(2);
        func_800F9330();
        func_800F6564();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F6C68();
        func_800F824C(4);
        func_800F6C68();
        func_800F95A0();
        func_8013D040();
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
