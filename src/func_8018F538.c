#include "common.h"
void func_8018F538(void)
{
    /* event: 8018F5C8 + v0/v1 + s0/v0 latch loop; 8018F0C8 tail. */
    func_8018F5C8();
    /* v0/v1 latch -> L18F598 / L18F5B8; s0/v0 loop -> L18F548 */
    func_8018F0C8();
    return;
L18F598:
    return;
}
