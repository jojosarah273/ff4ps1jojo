#include "common.h"
void func_801533FC(void)
{
    /* options: 0xA9/0xAB windows, 0x1800/0x1801 texts; loop L153430
       on 67FC(0xAB)/54D4(3B04) gates. */
    func_800F8FB8(0xA9);
    func_800F971C();
L153430:
    for (;;) {
        func_800F67FC(0xAB);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L1534C8;
        if (func_800F54D4(func_800F3B04(0x1800)) == 0)
            goto L1534B0;
        func_800F63BC();
        func_800F67FC(0xAB);
        if (func_800F54D4(func_800F3B04(0x1801)) == 0)
            goto L1534B8;
        func_800F62BC(0xA9);
        goto L1534C8;
    L1534B0:
        func_800F63BC();
    L1534B8:
        func_800F63BC();
    }
    return;
L1534C8:
    return;
}
