#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_8014D490(void)
{
    /* battle rows: 0x1813 text + 0x07 cells; D54 <- D44 copy then
       8014D4D4. */
    func_800F6564(0x1813);
    func_800F4248(7);
    D_8019ED54[0] = D_8019ED44[0];
    func_8014D4D4();
}
