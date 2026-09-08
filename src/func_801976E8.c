#include "common.h"
int func_801976E8(void)
{
    /* PSY-Q runtime lock-enter stub: syscall 0 with a0 = 1
       (handwritten instruction). Callers read the return and run the
       paired 801976F8 (lock-exit) when it comes back 1. PS1-only;
       no SNES counterpart. */
    return 0;
}
