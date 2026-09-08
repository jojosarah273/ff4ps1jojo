#include "common.h"
void func_8017F9A8(u32 a1, u32 a2, s32 a3)
{
    /* stack-swap trick: SP swapped through a scratch frame at
       0x1F80037C before calling 8017F954 (params masked). */
    func_8017F954();
}
