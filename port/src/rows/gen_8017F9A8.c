/* FF4 source-port — interpreted module for stack_swap_trick_sp_swapped_throug.
 * Ground truth: src/stack_swap_trick_sp_swapped_throug.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void stack_swap_trick_sp_swapped_throug(u32 a1, u32 a2, s32 a3)
{
    /* stack-swap trick: SP swapped through a scratch frame at
       0x1F80037C before calling 8017F954 (params masked). */
    func_8017F954();
}
