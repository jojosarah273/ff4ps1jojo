#include "common.h"
void func_8016EABC(void)
{
    /* shop flow: 0x4200/0x1000/0x4218 texts, 0x32 window, 80170198
       row; loop L16EB5C polls 9644/9330 pairs; tail 94B8/9448 close. */
    func_800F926C();
    func_800F9330();
    func_800F939C();
    func_800F9298();
    func_800F654C();
    func_800F9200();
    func_800F9448();
    func_800F71DC();
    func_800F9330();
    func_800F94B8();
    func_800F3C3C();
    func_800F3B04(0x1000);
    func_800F3B9C();
    func_800F7500(0x4218);
    func_800F71DC(4);
L16eb5c:
    for (;;) {
        func_800F939C();
        func_80170198();
        func_800F960C();
        func_800F6364();
        func_800F63BC();
        func_800F9644(0x20);
        func_800F9330();
        /* gates -> L16EBFC/L16EC3C/L16EC94 */
        func_800F95A0();
        func_800F94B8();
        func_800F3C3C(0x20);
        func_800F9660(0x20);
        func_800F960C();
        func_800F95A0();
        func_800F9448();
        break;
    }
    return;
}
