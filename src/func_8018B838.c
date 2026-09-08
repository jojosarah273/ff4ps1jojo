#include "common.h"
void func_8018B838(void)
{
    /* event: s0/v0 + v0/s0 latches; 8018B9A8 row; returns L18B908. */
    if (func_8018B9A8() == 0)
        goto L18B8E8;
    goto L18B904;
L18B8E8:
    /* v0/s0 latch -> L18B8E8 */
    return;
L18B904:
    return;
L18B908:
    return;
}
