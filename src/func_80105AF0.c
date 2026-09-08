#include "common.h"
void func_80105AF0(void)
{
    /* shop list render: 2115/4300/4304 header + 4 item rows (2882/28B2/
       28E2/2912 desc, 4302/4305 cells, 420B cursor); loop L105C48 polls
       634/70 key read with 6B68(0x634)/5574(0x80) gates. */
    func_800FE778();
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800FCC84();
    func_800F654C(1);
    func_800F8188(0x4300);
    func_800F654C(0x14);
    func_800F8188(0x4304);
    func_800F71DC();
    func_800F8D00(0x4302);
    func_800F71DC(0x28A2);
    func_800F8D00(0x2116);
    func_800F71DC(0x18);
    func_800F8D00(0x4305);
    func_800FCCBC();
    func_800F71DC(0x28B2);
    func_800F8D00(0x2116);
    func_800F8F74(0x420B);
    func_800F71DC();
    func_800F8D00(0x4302);
    func_800F71DC(0x18);
    func_800F8D00(0x4305);
    func_800FCCBC();
    func_800F71DC(0x28E2);
    func_800F8D00(0x2116);
    func_800F8F74(0x420B);
    func_800F71DC();
    func_800F8D00(0x4302);
    func_800F71DC(0x18);
    func_800F8D00(0x4305);
    func_800FCCBC();
    func_800F71DC(0x2912);
    func_800F8D00(0x2116);
    func_800F8F74(0x420B);
    func_800F71DC();
    func_800F8D00(0x4302);
    func_800F71DC(0x18);
    func_800F8D00(0x4305);
    func_800FCCBC();
    func_800F8FB8(0xA);
    func_800F71DC();
L105c48:
    for (;;) {
        func_800F6B68(0x634);
        func_800F5574(0x80);
        if (func_800F53D4() == 0)
            goto L105CA8;
        func_800F5958(7);
        if (func_800F53D4() != 0)
            goto L105CA8;
        func_800F6630(0xA);
        if (func_800F6434(0x202) != 0)
            goto L105CB0;
        func_800F654C(0xFF);
        goto L105CBC;
    L105CA8:
        func_800F62BC(0xA);
    L105CB0:
        func_800F6B68(0x634);
    L105CBC:
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
