#include "common.h"
extern u16 *D_8019B12C;
extern u32 D_8019B13C;
u32 func_8018AA60(u32 a0, u32 a1)
{
    func_8018A75C(2, (u32)((u16)*D_8019B12C << D_8019B13C));
    func_8018A75C(0, 0);
    func_8018A75C(3, a0, a1);
    return a1;
}
