#include "common.h"
void func_80169290(void)
{
    /* battle loop: 8018F098 intro + 0x9A window; loops L169408
       (80194640/94394) and L16942C (62BC(0x9A)/6630(0x9A) gates);
       ends on 5574(0xF)/0x3303 text reads. */
    func_8018F098();
    func_8018F098();
    func_800F8FB8(0x9A);
    func_8017F8F8();
    func_80194394();
    func_801928E8();
    func_801942FC();
    func_80194640();
    func_80194394();
    func_80194640();
    func_80194394();
    func_8017F8F8();
    /* v1/v0 gate -> L16942C */
    func_80194640();
L169408:
    for (;;) {
        if (func_80194394() != 0)
            continue;
        break;
    }
L16942C:
    for (;;) {
        func_8016BB44();
        func_800F62BC(0x9A);
        func_800F6630(0x9A);
        func_800F4248(0xF);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F6240(0x3303);
        func_800F6564(0x3303);
        func_800F5574(0xF);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
