/* FF4 source-port — interpreted module for event_spin_l18d01c_v1_a2_v1_v0_gat.
 * Ground truth: src/event_spin_l18d01c_v1_a2_v1_v0_gat.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_spin_l18d01c_v1_a2_v1_v0_gat(void)
{
    /* event: spin L18D01C; v1/a2 + v1/v0 gate tree; 8018E4B8/
       8018ABE8 rows then 8018A75C(2/1/3); returns at L18D194. */
    for (;;) {
        if (io_just() != 0)
            break;
        if (io_just() != 0)
            continue;
        break;
    }
    /* v1/a2 latch -> L18D0B8; v1/v0 gates -> L18D068/L18D07C/
       L18D088/L18D194 */
    func_8018E4B8();
    func_8018ABE8();
L18D114:
    event_drive(2);
    event_drive();
    event_drive(1);
    event_drive(3);
    return;
L18D194:
    return;
}
