#include "common.h"
s32 func_801981F8(s32 v1)
{
    /* PSY-Q BREAK hook stub: marshals a0 into a1 then `break 0, 260`;
       returns v1 (or -1 when the handler clears v0). Handwritten SDK
       hook — the only in-C observable effect is the v0<-v1/-1 latch. */
    return 0;
}
