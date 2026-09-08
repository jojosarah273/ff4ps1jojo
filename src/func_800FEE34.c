#include "common.h"
void func_800FEE34(void)
{
    /* item/order sub-screen: 0x4211 text, 0xD9/0xDF/0xDA windows with
       800FE9F8/80109774/801069E0 gates; 0x7F + 0x94B8/9448 close. */
    func_800F92D8();
    func_800F9644(0x20);
    func_800F922C();
    func_800F9330();
    func_800F939C();
    func_800F926C();
    func_800F9298();
    func_800F6558();
    func_800F9660(0x20);
    func_800F71DC(0x600);
    func_800F9330();
    func_800F94B8();
    func_800F654C();
    func_800F9200();
    func_800F9448();
    func_800F6564(0x4211);
    func_800F6630(0xD9);
    if (func_800F6434(2) != 0)
        goto L8FEEE4;
    func_800FE9F8();
    goto L8FEF2C;
L8FEEE4:
    func_800F6630(0xDF);
    if (func_800F6434(2) != 0)
        goto L8FEF0C;
    func_80109774();
    goto L8FEF2C;
L8FEF0C:
    func_800F6630(0xDA);
    if (func_800F6434(2) != 0)
        goto L8FEF2C;
    func_801069E0();
L8FEF2C:
    func_800F62BC(0x7F);
    func_800F9644(0x20);
    func_800F94B8();
    func_800F9448();
    func_800F960C();
    func_800F95A0();
    func_800F9410();
    func_800F9538();
    return;
}
