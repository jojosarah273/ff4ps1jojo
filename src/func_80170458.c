#include "common.h"
void func_80170458(void)
{
    /* shop row render: 0x2115/0x4300/0x4301 title, 0x420B/0x2116/
       0x4302/0x4305 desc rows (windows 0x4C/0x4E/0x10), 800F9868
       catalog dispatch, then the 0x4F/0x79/0x50 item cells. */
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
    func_800F76BC(func_800F3C3C(0x4F));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x4F));
    func_800F76BC(func_800F3C3C(0x79));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x79));
    func_800F76BC(func_800F3C3C(0x50));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x50));
    return;
}
