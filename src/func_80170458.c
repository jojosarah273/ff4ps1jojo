#include "common.h"
void func_80170458(void)
{
    int i;
    /* shop row render: 0x2115/0x4300/0x4301 title, 0x421F/0x2116/
       0x4302/0x4305 desc rows, 800F9868 catalog dispatch, then the
       0x4F/0x79/0x50 item cells; L170608 repeats the header/detail row
       pack while 5804(3C3C(0x4E)) holds, then commits 80194394/80181300. */
    func_800F8F74(0x420B);
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F654C(8);
    func_800F8188(0x4300);
    func_800F654C(0x19);
    func_800F8188(0x4301);
    func_800F8F74(0x4304);
    func_800F7270(0x4C);
    func_800F8D00(0x2116);
    func_800F8FB8(0x10);
    func_800F71DC(0x610);
    func_800F8D00(0x4302);
    func_800F7270(0x4E);
    func_800F8D00(0x4305);
    func_800F9868();
    func_800F7210(0x2116);
    func_800F8F74(0x420B);
    for (i = 0; i < 4; i++) {
        func_800F76BC(func_800F3C3C(0x4F));
        func_800F76E8();
        func_800F7CC8(func_800F3C3C(0x4E));
    }
    func_800F654C(0x18);
    func_800F8188(0x4301);
    func_800F7270(0x4C);
    func_800F8D00(0x2116);
    func_800F7270(0x4A);
    func_800F8D00(0x4302);
    func_800F6630(0x49);
    func_800F8188(0x4304);
    func_800F7500();
L170608:
    for (;;) {
        func_800F8F74(0x420B);
        func_800F654C(0x80);
        func_800F8188(0x2115);
        func_800F654C(1);
        func_800F8188(0x4300);
        func_800F71DC(0x10);
        func_800F8D00(0x4305);
        func_800F9868();
        func_800F8F74(0x420B);
        func_800F8F74(0x2115);
        func_800F8F74(0x4300);
        func_800F71DC(8);
        func_800F8D00(0x4305);
        func_800F9868();
        func_800F63BC();
        if (func_800F5804(func_800F3C3C(0x4E)) == 0)
            continue;
        break;
    }
    func_80194394();
    func_80181300();
    return;
}
