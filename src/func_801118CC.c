#include "common.h"
void func_801118CC(void)
{
    /* battle rows: 0x81/0x89/0x79 windows, 0x1705/0x340-0x343 texts,
       0x300-0x303 cells, 80111B14/80111ADC/8011EA5C rows; loop
       L111914 on 5C64(0x202). */
    func_80111B14();
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F71DC(0x200);
    func_800F8D6C(0x89);
    func_800F8FB8(0x79);
L111914:
    for (;;) {
        /* s0/v0 gate -> L11192C */
        func_800F654C(3);
        func_800F8188(0x1705);
        func_80111ADC();
        func_800F654C(0x28);
        func_800F8188(0x340);
        func_800F8188(0x300);
        func_800F6630(0x7A);
        func_800F8188(0x341);
        func_800F654C(0x30);
        func_800F8188(0x342);
        func_800F4248(4);
        func_800F8188(0x343);
        func_800F654C(0x70);
        func_800F8188(0x301);
        func_800F6630(0x7A);
        func_800F4248(2);
        func_800F5410();
        func_800F4008(0xE4);
        func_800F8188(0x302);
        func_800F654C(0x37);
        func_800F8188(0x303);
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
