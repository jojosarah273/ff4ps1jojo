#include "common.h"
void func_801582D8(void)
{
    /* ability plot: 0x3975 text, 0xA7/0xA6 windows, 80151CD8/
       801571DC/80155778/801583FC rows; loop L158374 on 5A90(0x40). */
    func_800F6564(0x3975);
    func_800F9200();
    func_80151CD8();
    func_800F93DC();
    func_800F8188(0x3975);
    func_801571DC();
    func_80155778();
    func_801583FC();
    func_800F76BC(func_800F3C3C(0xA7));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0xA6));
    func_800F7270(0xA6);
    func_800F971C();
L158374:
    for (;;) {
        func_800F66D8(0x80);
        func_800F8768(0x1000);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7500(0x41);
    func_800F66D8(0x80);
    func_800F7270(0xA6);
    func_800F8768(0x102D);
    func_800F63BC();
    func_800F6364();
    func_800F66D8(0x80);
    func_800F8768(0x102D);
    return;
}
