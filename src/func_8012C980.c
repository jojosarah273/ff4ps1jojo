#include "common.h"
void func_8012C980(void)
{
    /* config save-screen: 0x1B23/0x1B1A texts, 0x1440/0x45/0x54 windows,
       801210AC/801224D0/8011EF30 preps; L12CA7C confirm loop on
       53D4/6434(0x202)/5B8C(0x202); L12CB04 alt with 801240A8. */
    func_801210AC();
    func_800F6564(0x1B23);
    func_800F5410();
    func_800F3F38(func_800F3B04(0x1B1A));
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3B04(0x1B22));
    func_800F5140();
    func_801224D0();
    func_800F6B68(0x1440);
    func_800F9200();
    func_800F7500();
    func_8011EF30();
    func_800F93DC();
    func_800F5574(0xCE);
    if (func_800F53C0() == 0)
        goto L12CB04;
    func_800F5574(0xE7);
    if (func_800F53C0() != 0)
        goto L12CB04;
    func_800F5480();
    func_800F8058(0xCE);
    func_801224D0();
    func_800F6C68();
    func_800F824C(0x45);
    func_800F71DC();
    func_800F712C();
L12ca7c:
    for (;;) {
        if (func_800F53D4() != 0)
            goto L12CACC;
        func_800F6364();
        func_800F6C68();
        if (func_800F6434(0x202) != 0)
            continue;
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        func_800F6364();
    }
L12CACC:
    func_800F654C(0xF);
    func_800F71DC(0x54);
    func_8011F9C4();
    return;
L12CB04:
    func_801240A8();
    func_800F7500();
    func_8011FB74();
    return;
}
