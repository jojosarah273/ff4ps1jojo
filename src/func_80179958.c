#include "common.h"
extern s16 D_8019EEB0;
void func_80179958(void)
{
    /* battle frame ticker: cascading 1/60 counters at 0x800D16A3,
       rolling into the next when a level wraps (0x3C for the first). */
    volatile u8 *p = (volatile u8 *)0x800D16A3;
    if (D_8019EEB0 != 0)
        return;
    p[0]++;
    if ((p[0] & 0xFF) < 0x3C)
        return;
    p[1]++;
    p[0] = 0;
    if ((p[1] & 0xFF) != 0)
        return;
    p[2]++;
    if ((p[2] & 0xFF) != 0)
        return;
    p[3]++;
}
