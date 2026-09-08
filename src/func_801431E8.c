#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_801431E8(void)
{
    /* battle rows: 0xF42C/0xF42D texts; D54 <- D44 copy then
       80142E90. */
    func_800F8188(0xF42C);
    func_800F8F74(0xF42D);
    func_80140558();
    func_800F971C();
    D_8019ED54[0] = D_8019ED44[0];
    func_80142E90();
}
