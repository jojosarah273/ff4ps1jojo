#include "common.h"
void func_8015A6CC(void)
{
    /* options rows: 0x1F/0xA9/0xAA windows, 0x388B text,
       8015ABEC/8015A56C rows; 6434(2) gate. */
    func_800F4248(0x1F);
    func_800F8D6C(0xA9);
    func_800F4F28(func_800F3C3C(0xA9));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0xAA));
    func_800F6564(0x388B);
    if (func_800F6434(2) != 0)
        goto L15A764;
    func_800F971C();
    func_800F8D6C(0xA9);
L15A764:
    func_8015ABEC();
    func_8015A56C();
    return;
}
