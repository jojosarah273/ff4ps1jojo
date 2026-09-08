#include "common.h"
extern u32 D_8019CF14[8];
extern u32 D_8019CF34;
void func_80193220(void)
{
    /* trampoline bucket: bump the tick and run the 8 registered
       callbacks. */
    s32 i;
    D_8019CF34++;
    for (i = 0; i < 8; i++) {
        void (*fp)(void) = (void (*)(void))D_8019CF14[i];
        if (fp != 0)
            fp();
    }
}
