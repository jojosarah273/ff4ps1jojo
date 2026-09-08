#include "common.h"
void func_8012AE00(void)
{
    /* save/load status screen: 0x1B1F cancel gate, 0x1BC9 open dialog
       (8013441C), 0x1BC8 arrows; 0x1B12 row reads; 0x34 window with
       0xDB cell writes. */
    func_800F9200();
    func_800F9200();
    func_800F6564(0x1B1F);
    if (func_800F6434(2) != 0)
        goto L12AE58;
    func_800F93DC();
    func_8013441C();
    if (func_800F53C0() == 0)
        goto L12AF70;
    goto L12AF60;
L12AE58:
    func_800F93DC();
    func_800F5574(0xE2);
    if (func_800F53D4() != 0)
        goto L12AE90;
    func_800F5574(0xE3);
    if (func_800F53D4() == 0)
        goto L12AEE0;
L12AE90:
    func_800F9200();
    func_800F6564(0x1BC9);
    if (func_800F6434(2) != 0)
        goto L12AED8;
    func_800F93DC();
    func_800F6564(0x1A02);
    if (func_800F6434(2) != 0)
        goto L12AFB8;
    goto L12AF60;
L12AED8:
    func_800F93DC();
L12AEE0:
    func_800F5574(0x19);
    if (func_800F53D4() != 0)
        goto L12AF70;
    func_800F5574(0xC8);
    if (func_800F53D4() != 0)
        goto L12AF70;
    if (func_800F54D4(func_800F3B04(0x1B1D)) == 0)
        goto L12AF70;
    if (func_800F54D4(func_800F3B04(0x1B1E)) != 0)
        goto L12AF60;
    if (func_800F53C0() != 0)
        goto L12AF70;
L12AF60:
    func_800F6630(0x34);
    goto L12AFD0;
L12AF70:
    func_800F5574(0x19);
    if (func_800F53D4() != 0)
        goto L12AFE8;
    func_800F5574(0xC8);
    if (func_800F53D4() != 0)
        goto L12AFE8;
    func_800F5574(0xEC);
    if (func_800F53C0() != 0)
        goto L12AFE8;
L12AFB8:
    func_800F654C(4);
    func_800F78C4(func_800F3C3C(0x34));
L12AFD0:
    func_800F824C(0xDB);
    func_800F93DC();
    return;
L12AFE8:
    func_800F5574(0xFE);
    if (func_800F53D4() != 0)
        goto L12AFB8;
    func_800F6564(0x1BC6);
    if (func_800F6434(2) != 0)
        goto L12AFB8;
    func_800F654C(8);
    func_800F78C4(func_800F3C3C(0x34));
    func_800F824C(0xDB);
    func_800F93DC();
    return;
}
