#include "common.h"
void func_80147888(void)
{
    /* battle item detail (twin of 801462DC): 0x47 window; 6434(0x202)
       gate routes the 4248(0x30/0x20) row picks; 801470F8 +
       960C/95A0 close. */
    func_800F9330();
    func_800F939C();
    func_800F8EBC();
    func_800F7270();
    func_800F6630(0x47);
    func_800F971C();
    func_800F8960();
    func_800F6630(0x47);
    func_800F6D70();
    func_800F4248(0xC0);
    if (func_800F4120(0x202) != 0)
        goto L147A80;
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L147994;
    func_800F9330();
    func_800F6630(0x47);
    func_800F6C68();
    func_800F95A0();
    goto L1479D0;
L147994:
    func_800F9330();
    func_800F6630(0x47);
    func_800F6C68();
    func_800F95A0();
L1479D0:
    func_800F8768();
    func_800F6D70();
    func_800F4248(0x30);
    if (func_800F4120(2) != 0)
        goto L147A58;
    func_800F4248(0x20);
    if (func_800F4120(2) != 0)
        goto L147A38;
    func_800F6B68();
    func_800F8768();
L147A38:
    func_800F6B68();
    func_800F5140();
    func_800F8768();
    goto L147A80;
L147A58:
    func_800F6B68();
    func_800F8768();
    return;
L147A80:
    func_801470F8();
    func_800F960C();
    func_800F95A0();
    return;
}
