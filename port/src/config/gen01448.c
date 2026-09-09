/* FF4 source-port — interpreted module for func_80152CDC.
 * Ground truth: src/func_80152CDC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152CDC(void)
{
    /* options: 3C3C/3B04(0x2000) gates; 4x 8015240C + 8015236C
       rows. */
    cell_state_of();
    cell_state(0x2000);
    func_8015240C();
    func_8015240C();
    func_8015240C();
    func_8015240C();
    func_8015236C();
    return;
}
