#include "common.h"
void func_8015E84C(void)
{
    /* options: 0x14/0x280/0x2001 cells, 80150C38/8015330C/80058554
       rows; loop L15E890 on 5A90(8). */
    func_800F654C(0x14);
    func_80150C38();
    func_800F71DC(0x280);
    func_800F971C();
L15e890:
    for (;;) {
        func_800F6B68(0x2001);
        func_800F4248(0x7F);
        func_800F78C4(func_800F3B04());
        func_800F8768(0x2001);
        func_8015330C();
        func_800F63BC();
        func_800F5A90(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F8F74(0x390A);
    func_80058554();
    return;
}
