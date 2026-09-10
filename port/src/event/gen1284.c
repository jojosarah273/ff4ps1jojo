/* FF4 source-port — interpreted module for event_v0_gates_bc_rows_tail.
 * Ground truth: src/event_v0_gates_bc_rows_tail.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gates_bc_rows_tail(void)
{
    /* event: v0 gates; 801960BC rows (3/4/5); 80196074 tail. */
    if (io_just() != 0)
        goto L1959C4;
    if (io_just() == 0)
        goto L195AC4;
L1959C4:
    if (io_just() != 0)
        goto L1959EC;
    goto L195AC4;
L1959EC:
    func_801960BC(3);
    func_801960BC(4);
    func_801960BC(5);
    goto L195B34;
L195AC4:
    func_80196074();
    return;
L195B34:
    func_80196074();
    return;
}
