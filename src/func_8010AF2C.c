#include "common.h"
void func_8010AF2C(void)
{
    /* battle rows: 0x903 text; loop L10AF5C on 5958/53D4; then
       78C4(3B04)/7918(0x202) gates with 0x902 alternate. */
    func_800F4248(0x7F);
    func_800F654C();
L10af5c:
    for (;;) {
        func_800F5958();
        if (func_800F53D4() != 0)
            goto L10AF94;
        func_800F5E48();
        func_800F5410();
        func_800F4008(0xF);
    }
L10AF94:
    func_800F6B68();
    func_800F78C4(func_800F3B04());
    if (func_800F7918(0x202) != 0)
        goto L10AFF0;
    func_800F654C(0xFF);
    return;
L10AFF0:
    func_800F6B68(0x902);
    func_800F5CCC();
    return;
}
