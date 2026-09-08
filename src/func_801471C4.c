#include "common.h"
void func_801471C4(void)
{
    /* battle status-cast: 0x29C5/0x2003/0x2001 texts, 80147434 +
       801473A4 rows, 8007275C/80072CB0 commits; loop L1471DC polls
       5574(0xFF)/5958(5). */
    func_800F71DC();
    func_800F8D6C(0xA);
L1471dc:
    for (;;) {
        func_800F9330();
        func_800F6B68(0x29C5);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L147334;
        func_800F9330();
        func_80147434();
        func_800F6B68(0x2003);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L147244;
        func_800F654C(0xE);
        goto L147254;
    L147244:
        func_800F6B68(0x2001);
        func_800F4248(0x1F);
    L147254:
        func_800F95A0();
        func_800F8768();
        func_800F5574(0xF);
        if (func_800F53C0() == 0)
            goto L14728C;
        func_801473A4();
        goto L1472C4;
    L14728C:
        func_800F8D6C(0x26);
        func_800F71DC(0x800);
        func_800F8D6C(0x28);
        func_8007275C();
    L1472C4:
        func_800F9644(0x20);
        func_800F6658(0x2A);
        func_800F5410();
        func_800F4064(0x800);
        func_800F6558();
        func_800F8274();
        func_800F7594(0xA);
        func_800F971C();
        func_800F9660(0x20);
        func_800F654C(0x1A);
        func_80072CB0();
    L147334:
        func_800F9644(0x20);
        func_800F6658(0xA);
        func_800F5410();
        func_800F4064(0x400);
        func_800F8274(0xA);
        func_800F971C();
        func_800F9660(0x20);
        func_800F95A0();
        func_800F6364();
        func_800F5958(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
