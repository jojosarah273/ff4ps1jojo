#include "common.h"
void func_8013D4C8(void)
{
    /* battle rows (twin of 8013D040): 0x342/0x341/0x343 cells with
       0x3F/0x7F cursor codes; gates 6434(0x202). */
    func_800F8960(0x342);
    func_800F6630(2);
    func_800F8960(0x341);
    func_800F6564(0x6CC0);
    if (func_800F6434(0x202) != 0)
        goto L13D520;
    func_800F6630();
    func_800F8960(0x340);
    func_800F654C(0x3F);
    goto L13D550;
L13D520:
    func_800F6630(0x340);
    func_800F8960();
    func_800F654C(0x7F);
L13D550:
    func_800F5ECC(func_800F3B04());
    func_800F8960(0x343);
    func_800F63BC();
    func_800F63BC();
    return;
}
