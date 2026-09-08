#include "common.h"
void func_8018F374(void)
{
    /* event: 801976E8 prep; t2/t1 latch loop; 80197608 tail. */
    func_801976E8();
    for (;;) {
        /* t2/t1 latch */
        if (func_800F53D4() == 0)
            break;
    }
    func_80197608();
    return;
}
