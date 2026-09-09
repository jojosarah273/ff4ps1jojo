/* FF4 source-port — interpreted module for func_80141C98.
 * Ground truth: src/func_80141C98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80141C98(void)
{
    /* battle: 3C3C(4)/3A70/3B04 rows; 6EA8 + s1/v1 latch route to
       5410. */
    cell_state_of();
    func_800F3A70(4);
    cell_state_of();
    func_800F6EA8();
    /* s1/v1 latch -> L141D1C / L141D40 */
    sep_a();
    return;
}
