#include "common.h"
void func_800FC110(void)
{
    /* battle rows: 0x3F/0x212C/0x79 windows, 0x420C texts, 0xAD
       window, 800FC2AC close; loop L8FC140 on 5574(0x28). */
    func_800F654C(0x3F);
    func_800FD804();
    func_800F654C(1);
    func_800F8188(0x212C);
    func_800F8FB8(0x79);
L8fc140:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800F6630(0x79);
        func_800F9690();
        func_800F6C68();
        func_800F824C(0xAD);
        func_800FE5D4();
        func_800FE6E4();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x28);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800FC2AC();
    return;
}
