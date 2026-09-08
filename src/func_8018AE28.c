#include "common.h"
void func_8018AE28(void)
{
    /* event: v0 gate tree; 8018B1C8 spins L18AF44; 8018B16C + s6
       latches; returns at L18B138 via L18B13C. */
    /* v0 gates -> L18AE70/L18AE8C/L18B13C/L18AF14 */
    func_8018B1C8();
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    /* s6/v0 latch -> L18B0FC */
    func_8018B16C();
    return;
}
