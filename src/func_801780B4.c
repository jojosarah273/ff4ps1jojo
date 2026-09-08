#include "common.h"
void func_801780B4(void)
{
    /* battle anim: 80197378/801972D8/80197308 preps; loop L17815C
       with 80197338 + s2/s7 regcmp branch to 801972D8; 80197398
       closes. */
    func_80197378();
    func_801972D8();
    func_80197308();
L17815c:
    for (;;) {
        func_80197338();
        /* s2/s7 latch -> L178188 */
        func_801972D8();
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80197398();
    return;
}
