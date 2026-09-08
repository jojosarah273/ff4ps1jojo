#include "common.h"
void func_80107FC4(void)
{
    /* shop rows: 0x1702/0x3E/0x3D/0xB2 windows, 0x1762 row texts,
       8017F9A8/800FED3C/800FAA04 sub-rows; loops L108098 on
       6434(0x202)/5C64(0x202) gates, closing via 8D00(0x1762). */
    func_800F6564(0x1702);
    func_800F8FB8(0x3E);
    func_800F5140();
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F824C(0x3D);
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto L10802C;
    func_800F62BC(0x3E);
    func_800F62BC(0x3E);
L10802C:
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x3D);
    func_800F6C68();
    func_800F824C(0x3E);
    func_800F7270(0x3D);
    func_800F6630(0xB2);
    if (func_800F6434(2) != 0)
        goto L1082A8;
L108098:
    for (;;) {
        func_800F6364();
        /* v0 gates -> L108134 */
        func_800F6C68();
        if (func_800F6434(0x202) != 0)
            continue;
        /* v0 gates -> L1081C0 / L1081A8 / L1081D4 */
        if (func_800F5574(3) != 0)
            continue;
        /* v0 gates -> L10825C */
        if (func_800F5574(4) != 0)
            continue;
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        func_800F6364();
        break;
    }
L1082A8:
    func_800F8D00(0x772);
    func_800F8FB8(0xDD);
    return;
}
