#include "common.h"
void func_800FED3C(void)
{
    /* shop banner: 0xD9/0x7A/0x79/0xB1 windows, 0x2100/0x4200 texts,
       80178BB4 row; loop L8FED94 on 5DA0(0x79)/5B8C; closes via
       6434(0x202) gate. */
    func_800F654C(1);
    func_800F824C(0xD9);
    func_800F8FB8(0x7A);
    func_800F654C(0x1F);
    func_800F824C(0x79);
    func_800F654C(0x80);
    func_800F8188(0x2100);
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F5448();
L8fed94:
    for (;;) {
        func_800FE778();
        func_800F6630(0x79);
        /* a0/v1 gate -> L8FEDC4 */
        func_80178BB4();
        func_800F5DA0(0x79);
        func_800F5DA0(0x79);
        if (func_800F5B8C() != 0)
            continue;
        break;
    }
    func_800F8FB8(0xD9);
    func_800F6630(0xB1);
    if (func_800F6434(0x202) != 0)
        goto L8FEE14;
    func_800F654C(0xF);
    goto L8FEE1C;
L8FEE14:
    func_800F6630(0x80);
L8FEE1C:
    func_800F8188(0x2100);
    return;
}
