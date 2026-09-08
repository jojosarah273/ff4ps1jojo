#include "common.h"
void func_80167664(void)
{
    /* battle anim loop: 80167774/8014A488/80148C8C preps; L1676DC
       alternates 80140994/8014096C/80140944/801409BC/801409E4 with
       80167604; closes via 80167844. */
    func_80167774();
    func_800F71DC();
    func_800F8D00();
    func_800F6240();
    func_800F971C();
    func_8014A488();
    func_80148C8C();
    func_800F971C();
    func_800F8D00();
    func_800F6240();
    func_800F71DC(4);
L1676dc:
    for (;;) {
        func_800F9330();
        func_80140994();
        func_80167604();
        func_8014096C();
        func_80167604();
        func_80140944();
        func_80167604();
        func_801409BC();
        func_80167604();
        func_801409E4();
        func_80167604();
        func_800F95A0();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F8F74();
    func_80167844();
    return;
}
