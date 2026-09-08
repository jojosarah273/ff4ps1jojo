#include "common.h"
void func_80183F40(void)
{
    /* hardware-beat driver for the battle effect overlay: writes the
       scratchpad timers (0x1F800012/16/18/1A) with step counts 0x10/0x14/
       0x30/0x40 and calls 80182E54 per sub-step. Loops: s2 in 0..3 (inner),
       s3 in 0..0xF (outer). Tail paths (L84450) run the 80182DDC/80182E18
       pair 4x then commit via 801971A8/80197208. */
    int s2, s3;
    for (s3 = 0; s3 < 0x10; s3++) {
        for (s2 = 0; s2 < 4; s2++) {
            func_80182E54();
            /* IO: 0x1F800012=0xA0, 0x1F800016, 0x1F80001A=0x40,
                   0x1F800018=0x30, base 0x1F800000 */
        }
    }
    func_801971A8(1);
    func_80197208();
    return;
}
