#include "common.h"
void func_8018B4C8(void)
{
    /* event: v0 + v1/a0 latch loop; 8018B1C8 tail. */
    for (;;) {
        if (func_800F53D4() != 0)
            goto L18B52C;
        /* v1/a0 latch -> L18B520 */
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L18B52C:
    func_8018B1C8();
    return;
}
