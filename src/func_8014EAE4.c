#include "common.h"
void func_8014EAE4(void)
{
    func_800F6564();
    if (func_800F6434(2) == 0) {
        func_800F5410();
        func_800F4008(0x10);
    }
    /* jr $a0 : the 9-entry battle item-cast table. Each entry calls one
       effect then jumps to L14EC08 (return). Handlers in index order:
       8014ED40, 8014EC98, 8014EC68, 8014EC18, 8014ED10, 8014ECC8,
       8014EDD0, 8014ED88, 8014ED40 ... */
    return;
}
