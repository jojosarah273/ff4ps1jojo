#include "common.h"
void func_8011A334(void)
{
    /* shop buy-list: 0xE2 window gate, 0x2115 title, then 8 name/price
       rows (7210 A17/A27 + 7210() pairs with A19/A29 texts). */
    func_800F6630(0xE2);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0xE2);
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F7210(0xA17);
    func_800F7210(0xA27);
    func_800F7210();
    func_800F7210(0xA19);
    func_800F7210();
    func_800F7210(0xA29);
    func_800F7210();
    func_800F7210(0xA1B);
    func_800F7210();
    func_800F7210(0xA2B);
    func_800F7210();
    func_800F7210(0xA1D);
    func_800F7210();
    func_800F7210(0xA2D);
    func_800F7210();
    func_800F7210(0xA1F);
    func_800F7210();
    func_800F7210(0xA2F);
    func_800F7210();
    func_800F7210(0xA21);
    func_800F7210();
    func_800F7210(0xA31);
    func_800F7210();
    func_800F7210(0xA23);
    func_800F7210();
    func_800F7210(0xA33);
    func_800F7210();
    func_800F7210(0xA25);
    func_800F7210();
    func_800F7210(0xA35);
    func_800F7210();
    func_800F7210(0xA27);
    func_800F7210();
    func_800F7210(0xA37);
    func_800F7210();
    return;
}
