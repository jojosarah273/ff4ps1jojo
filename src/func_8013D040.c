#include "common.h"
void func_8013D040(void)
{
    /* battle rows: 0x342/0x341/0x343 cells, 0x6CC0 gate, 2/4 windows. */
    func_800F8960(0x342);
    func_800F6630(2);
    func_800F8960(0x341);
    func_800F6564(0x6CC0);
    if (func_800F6434(0x202) != 0)
        goto L13D098;
    func_800F6630();
    func_800F8960(0x340);
    func_800F6630(4);
    goto L13D0F4;
L13D098:
    func_800F6630();
    func_800F5480();
    func_800F8058(0x10);
    func_800F8960(0x340);
    func_800F6630(4);
L13D0F4:
    func_800F8960(0x343);
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    return;
}
