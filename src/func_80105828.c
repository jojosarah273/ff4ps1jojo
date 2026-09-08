#include "common.h"
void func_80105828(void)
{
    /* shop purchase-verify screen: reads 1704; confirm/cancel gates route
       through the buy amounts (1719-1726 detail rows); L15A78 closes the
       list window 0xA. */
    func_800F6564(0x709);
    func_800F9690();
    func_800F6564(0x1706);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xE);
    func_800F8FB8(0xA);
    func_800F6564(0x1704);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L5938;
    func_800F6630(0xC);
    if (func_800F54D4(func_800F3B04(0x1719)) == 0)
        goto L5938;
    func_800F6630(0xE);
    if (func_800F54D4(func_800F3B04(0x171A)) != 0)
        goto L5A78;
L5938:
    func_800F6564(0x1704);
    func_800F5574(2);
    if (func_800F53D4() != 0)
        return;
    func_800F5574(4);
    if (func_800F53C0() != 0)
        return;
    func_800F6564(0x1715);
    if (func_800F6434(0x202) != 0)
        goto L59D8;
    func_800F6630(0xC);
    if (func_800F54D4(func_800F3B04(0x1713)) == 0)
        goto L59D8;
    func_800F6630(0xE);
    if (func_800F54D4(func_800F3B04(0x1714)) != 0)
        goto L5A78;
L59D8:
    func_800F6630(0xC);
    if (func_800F54D4(func_800F3B04(0x171D)) == 0)
        goto L5A28;
    func_800F6630(0xE);
    if (func_800F54D4(func_800F3B04(0x171E)) != 0)
        goto L5A78;
L5A28:
    func_800F6630(0xC);
    if (func_800F54D4(func_800F3B04(0x1721)) == 0)
        goto L5A88;
    func_800F6630(0xE);
    if (func_800F54D4(func_800F3B04(0x1722)) == 0)
        goto L5A88;
L5A78:
    func_800F62BC(0xA);
    return;
L5A88:
    func_800F6630(0xC);
    if (func_800F54D4(func_800F3B04(0x1725)) == 0)
        return;
    func_800F6630(0xE);
    if (func_800F54D4(func_800F3B04(0x1726)) == 0)
        return;
    func_800F62BC(0xA);
    return;
}
