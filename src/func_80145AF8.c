#include "common.h"
void func_80145AF8(void)
{
    /* battle rows: a0/v0 latch picks the 0x40/0x50 vs 0x80/0x50
       window sets. */
    if (func_800F6434() != 0)
        goto L145B48;
    func_800F654C(0x40);
    func_800F824C(0x45);
    func_800F654C(0x50);
    func_800F824C(0x46);
    return;
L145B48:
    func_800F654C(0x80);
    func_800F824C(0x45);
    func_800F654C(0x50);
    func_800F824C(0x46);
    return;
}
