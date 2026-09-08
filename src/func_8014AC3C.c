#include "common.h"
void func_8014AC3C(void)
{
    /* battle call: 8014C96C/8014B9B4/8013E5D0/8013E2F8/8014BA34
       rows; 0x34C4/0x34C5 texts with 6434(2) gates. */
    func_8014C96C();
    func_800F654C(3);
    func_800F8188();
    func_800F654C(0xF);
    func_800F824C(4);
    func_8013E5D0();
    func_800F8F74();
    func_800F654C(1);
    func_8014B9B4();
    func_800F6564(0x34C4);
    func_800F8188();
    func_800F6564(0x34C5);
    if (func_800F6434(2) != 0)
        goto L14ACBC;
    func_8013E2F8();
L14ACBC:
    func_800F8F74();
    func_800F6564(0x34C4);
    func_800F8188();
    func_8014BA34();
    func_800F6564(0x3523);
    if (func_800F6434(2) != 0)
        return;
    func_8013E2F8();
    return;
}
