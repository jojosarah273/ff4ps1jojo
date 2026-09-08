#include "common.h"
void func_801974CC(void)
{
    /* event: v1/v0 gate; 3x 8019428C + v0/s2 latch + 8018F0C8
       rows; returns at L1975CC. */
    /* v1/v0 gate -> L197500 / L1975CC */
    func_8019428C();
    /* v0/s2 latch -> L19752C */
    func_8018F0C8();
    func_8019428C();
    func_8018F0C8();
    func_8019428C();
    func_8018F0C8();
    /* v0 gate -> L1975A0 / L1975AC */
    return;
L1975CC:
    return;
}
