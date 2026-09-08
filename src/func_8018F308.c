#include "common.h"
s32 func_8018F308(u32 *ctl)
{
    /* status hook: waits for the busy flag to clear, then tail-jumps
       through the low-RAM vector (0x8000DFFC). */
    if (ctl[0x1074 / 4] & 0x80) {
        while (ctl[0x1044 / 4] & 0x80)
            ;
        ((void (*)(void))(*(u32 *)0x8000DFFC))();
    }
    return 0;
}
