/* FF4 source-port — battle/subscreen.c
 *
 * Battle item sub-screen root (func_8010B010, gate-heavy): opens the
 * 3C3C/3B04/3B9C state, walks the a3/v0 gate tree and drives the
 * 8010B5DC row until the v0/v1 latch closes.
 * Ground truth: src/func_8010B010.c.
 */
#include <stdint.h>

void state_open(void);      /* 800F3C3C/3B04/3B9C */
void row_drive(void);       /* 8010B5DC           */
void door_close(void);      /* 800F5410/5480      */

/* segment: the gate tree L10B084..L10B454 */
void battle_subscreen_run(void)
{
    state_open();
    if (gate_p()) {
        /* L10B148: poll the row drive until one of the gates trips */
        do {
            row_drive();
        } while (state_ok());
    }
    door_close();
}
void gate_p(void);
void state_ok(void);
