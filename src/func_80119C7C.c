#include "common.h"
void func_80119C7C(void)
{
    /* event: v0 spin loop L119CEC; 8017F5C0 tail. */
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_8017F5C0();
    return;
}
