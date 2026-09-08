#include "common.h"
void func_80176F88(void)
{
    /* battle anim: 3C3C(0x300)/3B04/3B9Cx2 gates; 9330 row then
       95A0 close. */
    func_800F3C3C();
    func_800F3B04(0x300);
    func_800F3B9C();
    func_800F3B9C();
    func_800F9330();
    func_800F95A0();
    return;
}
