#include "common.h"
void func_8012AB18(void)
{
    /* config status row: 0x1BCC gate, 0x5D/0x5A/0x40/0xDB/0x5C windows,
       80125100 stat block + 801206DC menu row; two symmetric branches
       (L8012AB84 main / L8012ACA8 alt) merging at the 82EC(0x29) cells. */
    func_800F6564(0x1BCC);
    if (func_800F6434(0x202) != 0)
        goto L12AB84;
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0x40);
    func_800F9660(0x20);
L12AB84:
    func_800F6630(0x5D);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto L12ACA8;
    func_800F6E30(0x5A);
    func_80125100();
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0x52);
    func_800F9660(0x20);
    func_800F6E30(0x5A);
    func_800F5574(0xFE);
    if (func_800F53D4() != 0)
        return;
    func_800F654C(0xC8);
    func_800F82EC(0x29);
    func_800F63BC();
    func_800F6630(0xDB);
    func_800F82EC(0x29);
    func_800F63BC();
    func_800F939C();
    func_800F6630(0x5C);
    func_801206DC();
    func_800F960C();
    func_800F63BC();
    func_800F6630(0xDB);
    func_800F82EC(0x29);
    func_800F63BC();
    func_800F63BC();
    func_800F82EC(0x29);
    return;
L12ACA8:
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0x1C);
    func_800F9660(0x20);
    func_800F6E30(0x5A);
    func_80125100();
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0x52);
    func_800F9660(0x20);
    func_800F6E30(0x5A);
    func_800F5574(0xFE);
    if (func_800F53D4() != 0)
        return;
    func_800F654C(0xC8);
    func_800F82EC(0x29);
    func_800F63BC();
    func_800F6630(0xDB);
    func_800F82EC(0x29);
    func_800F63BC();
    func_800F6630(0x5C);
    func_800F939C();
    func_801206DC();
    func_800F960C();
    func_800F63BC();
    func_800F6630(0xDB);
    func_800F82EC(0x29);
    func_800F63BC();
    func_800F63BC();
    func_800F82EC(0x29);
    return;
}
