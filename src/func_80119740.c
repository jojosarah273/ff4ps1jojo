#include "common.h"
void func_80119740(void)
{
    /* battle rows: 0x89/0x8A windows with 4F28/7A40 pairs, 0x1700
       text gate (800FF024 vs 80170C14/8010B010); loop L1197D8 on
       5C64(0x202). */
    func_80117594();
    func_800F824C(0x89);
    func_800F8FB8(0x8A);
    func_800F4F28(func_800F3C3C(0x89));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x8A));
    func_800F4F28(func_800F3C3C(0x89));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x8A));
    func_800F4F28(func_800F3C3C(0x89));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x8A));
L1197d8:
    for (;;) {
        func_800FE778();
        func_800F6564(0x1700);
        func_800F5574(3);
        if (func_800F53D4() != 0)
            goto L119810;
        func_800FF024();
        goto L119820;
    L119810:
        func_80170C14();
        func_8010B010();
    L119820:
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
