#include "common.h"
void func_8011EC44(void)
{
    /* ability wrapper: 8016EA9C/80123D3C/8017F8F8x3 in the L11ECD0
       loop with 801225C0/80126610/80122114; 0x1A65 text; v1/v0
       latch back to L11EC58. */
L11ec58:
    for (;;) {
        func_8016EA9C();
        func_80123D3C();
        func_8017F8F8();
        func_8017F8F8();
        func_8017F8F8();
    L11ecd0:
        for (;;) {
            func_80194700();
            func_80194394();
            func_800F5E48();
            func_800F5E48();
            func_800F8D00(0x1A65);
            func_801225C0();
            func_80126610();
            func_80122114();
            /* v1/v0 latch -> L11EC58 */
            continue;
        }
        break;
    }
    return;
}
