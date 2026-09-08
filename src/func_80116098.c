#include "common.h"
void func_80116098(void)
{
    /* battle party-status rows: 0xA6D-0xA6F texts, 0x20/0x21/0x24
       windows, 0x300-0x303 cells, 0xACD/0xACE texts, 800FC0DC commit;
       loop L116180 on 4120(0x202). */
    func_800F6B68(0xA6D);
    func_800F6B68();
    func_800F824C(0x20);
    func_800F6B68(0xA6F);
    func_800F824C(0x21);
    func_800F6630(0x24);
    func_800F9330();
    func_800F939C();
    func_800F95A0();
    func_800F960C();
L116180:
    for (;;) {
        func_800F6630(0x20);
        func_800F5410();
        func_800F3F38(func_800F3B9C());
        func_800F8960(0x300);
        func_800F6C68();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L116234;
        func_800F6630(0x21);
        func_800F5410();
        func_800F3F38(func_800F3B9C());
        goto L11623C;
    L116234:
        func_800F654C(0xF0);
    L11623C:
        func_800F8960(0x301);
        func_800F6C68();
        func_800F8960(0x302);
        func_800F6564(0xACD);
        func_800F5140();
        func_800F78C4(func_800F3B04(0xACE));
        func_800F78C4(func_800F3B9C());
        func_800F8960(0x303);
        func_800FC0DC();
        func_800F4248(0xF);
        if (func_800F4120(0x202) != 0)
            continue;
        break;
    }
    return;
}
