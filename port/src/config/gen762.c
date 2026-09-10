/* FF4 source-port — interpreted module for battle_rows_d690_prep_x340_x342_x3.
 * Ground truth: src/battle_rows_d690_prep_x340_x342_x3.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_d690_prep_x340_x342_x3(void)
{
    /* battle rows: 8013D690 prep, 0x340/0x342/0x380/0x382 cells;
       loop L13D600 on 5A90(0x40). */
    fn_1x3d690();
    sep();
    row_prep(0x20);
L13d600:
    for (;;) {
        cell_sink89(0x340);
        cell_stamp8_9_b(0x380);
        cell_sink89(0x342);
        cell_stamp8_9_b(0x382);
        step2();
        step2();
        step2();
        step2();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    return;
}
