#include "common.h"
void func_801101E4(void)
{
    /* battle row: 0x89/0x7A windows, 80110024/8011050C/801100BC/
       8011EA5C rows; loops L11020C (row read) and L11029C (7F48
       detail). */
    func_80110024();
    func_800F71DC(0x20);
    func_800F8D6C(0x89);
    func_800F8FB8(0x7A);
L11020c:
    for (;;) {
        func_8011050C();
        func_800F8FB8(0x28);
        func_800F6630(0x89);
        func_800F7864();
        func_800F5410();
        func_800F4008(0x20);
        func_800F824C(0x29);
        func_800F654C(0x20);
        func_800F824C(0x2B);
        func_801100BC();
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F71DC();
    func_800F8D6C(0x89);
    func_800F8FB8(0x7A);
L11029c:
    for (;;) {
        func_8011050C();
        func_800F654C();
        func_800F5480();
        func_800F7F48(func_800F3C3C(0x89));
        func_800F824C(0x28);
        func_800F654C(0x20);
        func_800F824C(0x29);
        func_800F824C(0x2B);
        func_801100BC();
        func_800F7270(0x89);
        func_800F6364();
        func_800F8D6C(0x89);
        func_800F5958(0x60);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
