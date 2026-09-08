#include "common.h"
extern u16 *D_8019EF36;
extern u16 *D_8019EF30;
extern u16 *D_8019EEB8;
extern u16 *D_8019EF0A;
extern u16 *D_8019EF20;
extern u16 *D_8019EECC;
void func_80185FA0(void)
{
    func_80188940(0x40, (u32)D_801F6260);
    func_80189790();
    func_80185F2C();
    *D_8019EF36 = 0;
    *D_8019EF30 = 0;
    *D_8019EEB8 = 0x2FFF;
    func_80187608();
    func_80187AA0();
    *D_8019EF0A = 0;
    *D_8019EF20 = 0;
    *D_8019EECC = 0;
    func_80187D1C();
}
