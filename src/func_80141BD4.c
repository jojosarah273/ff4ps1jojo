#include "common.h"
void func_80141BD4(void)
{
    /* battle: 3C3C/3B04/3B9C gate; 80141C98 rows with 0x40/0x80
       variants; linear. */
    func_800F3C3C();
    func_800F3B04();
    func_800F3B9C();
L141c2c:
    for (;;) {
        func_800F7500();
        func_80141C98();
        func_800F7500(0x40);
        func_80141C98();
        func_800F7500(0x80);
        func_80141C98();
        return;
    }
}
