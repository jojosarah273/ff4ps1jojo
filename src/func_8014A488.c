#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_8014A488(void)
{
    func_800F5574(0xFF);
    if (func_800F53D4() == 0) {
        func_800F5140();
        *D_8019ED54 = *D_8019ED44;
        func_8014A4DC();
    }
}
