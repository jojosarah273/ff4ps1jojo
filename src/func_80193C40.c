#include "common.h"
void func_80193C40(void)
{
    /* event: pure gate tree with the jr-$v0 dispatch (L193DC4) and
       regcmp spin loops; 80194008 tail row; returns at L193FE0. */
    /* v0 gates -> L193CD0 / L193C98 / L193FE0 */
    /* a0/s4 latches -> L193D48 / L193D7C */
    func_80194008();
    return;
}
