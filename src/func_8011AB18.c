#include "common.h"
void func_8011AB18(void)
{
    /* shop main: 0xCA window + 0x1700 gate picks the buy (800FEC74/
       800FD914/800FB09C/800FB160/800FB224/800FAA04) sub-rows; tail
       via 8017F9A8/800FED3C or close 0x81/0x4200. */
    func_800F9200();
    func_800F6630(0xCA);
    if (func_800F6434(0x202) != 0)
        goto L11AB50;
    func_800FEC74();
    goto L11AB78;
L11AB50:
    func_800F6630(0x80);
    if (func_800F6434(2) != 0)
        goto L11AB78;
    func_800F654C();
    func_800FD914();
L11AB78:
    func_800F93DC();
    func_800F8188(0x1700);
    if (func_800F6434(0x202) != 0)
        goto L11ABA8;
    func_800FB09C();
    goto L11AC00;
L11ABA8:
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L11ABD0;
    func_800FB160();
    goto L11AC00;
L11ABD0:
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L11ABF8;
    func_800FB224();
    goto L11AC00;
L11ABF8:
    func_800FAA04();
L11AC00:
    func_800F6630(0xCA);
    if (func_800F6434(0x202) != 0)
        goto L11AC3C;
    func_8017F9A8();
    func_800FED3C();
    return;
L11AC3C:
    func_800F62BC(0xCA);
    func_800F654C(0x81);
    func_800F8188(0x4200);
    return;
}
