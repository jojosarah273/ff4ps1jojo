#include "common.h"
void func_8010E388(void)
{
    /* battle spell screen: 0xACF-0xAD8 texts, 0xE3/0x89 windows,
       80115BCC/80115D2C sub-renders; loop L10E428 (5C64(0x202))
       scrolls rows. */
    func_800F654C(0x10);
    func_800F8188(0xACF);
    func_800F71DC(0x20);
    func_800F8D00(0xAD2);
    func_800F654C(7);
    func_800F8188(0xACD);
    func_800F8F74(0xACE);
    func_800F654C(2);
    func_800F8188(0xAD0);
    func_800F8188(0xAD1);
    func_80115BCC();
    func_800F654C(1);
    func_800F824C(0xE3);
    func_800F654C(0x23);
    func_800FD804();
    func_800F71DC(0xC0);
    func_800F8D6C(0x89);
L10e428:
    for (;;) {
        func_800FE778();
        func_800FE870();
        func_800F6564(0x1707);
        func_800F5480();
        func_800F8058(0x10);
        func_800F6630(1);
        func_800F4248(0xD8);
        func_800F8188();
        func_800F5410();
        func_800F4008();
        func_800F8188(0xAD5);
        func_80115D2C();
        func_800FF024();
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F8FB8(0xE3);
    func_8011EA5C();
    return;
}
