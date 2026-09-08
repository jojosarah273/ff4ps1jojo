#include "common.h"
void func_80103030(void)
{
    /* shop rows: 0x1704/0xAC/0x1701/0x171B/0x1705 texts/windows,
       801030F8/800FD718/80102ED8 rows; loop L1030B0 on 5574(4). */
    func_800F654C(3);
    func_800F8188(0x1704);
    func_800F654C(1);
    func_800F824C(0xAC);
    func_800F6564(0x1701);
    func_800F8188(0x171B);
    func_800F654C(3);
    func_800F8188(0x1705);
    func_800F6630(0xB1);
    if (func_800F6434(2) != 0)
        goto L103098;
    func_801030F8();
L103098:
    func_800FD718();
    func_800F8FB8(0x79);
    func_800F8FB8(0xB6);
L1030b0:
    for (;;) {
        func_80102ED8();
        func_800F62BC(0xB6);
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
