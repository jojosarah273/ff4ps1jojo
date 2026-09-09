/* FF4 source-port — interpreted module for func_80166DB8.
 * Ground truth: src/func_80166DB8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void func_80166DB8(void)
{
    u16 v;
    u16 e;
    v = *D_8019ED54;
    cell_poke0(cell_peek(0xF1F3F, v) + v);
    func_800F78C4(cell_peek(func_800F3AB4(3), 0));
    v = *D_8019ED54;
    e = *(u16 *)(cell_state(0) + v);
    func_800F78C4(cell_state(e));
    func_80166E58();
}
