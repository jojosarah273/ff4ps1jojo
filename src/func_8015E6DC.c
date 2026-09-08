#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_8015E6DC(void)
{
    /* rows: 0x2050 text; D54 <- D44 copy + 971C; 80153098/
       7270(0xA6)/8768(0x2054)/71DC(1)/8D6C(0xD4). */
    func_800F654C(0x80);
    func_800F8768(0x2050);
    func_800F90EC();
    D_8019ED54[0] = D_8019ED44[0];
    func_800F971C();
    func_80153098();
    func_800F7270(0xA6);
    func_800F8768(0x2054);
    func_800F71DC(1);
    func_800F8D6C(0xD4);
}
