/* FF4 source-port — battle/gates.c
 *
 * Battle row gates (exact Phase A decodes).
 * Ground truth: src/func_8010B5DC, 8011DFE4.
 */
#include <stdint.h>

void state_open(void);          /* 800F3C3C/3B04/3B9C */
uint32_t io_just(void);         /* 800F53D4          */

/* 8010B5DC */
void battle_gate_row(void)
{
    state_open();
    if (io_just() != 0)
        gate_b();
}

/* 8011DFE4 */
void battle_gate_latch(void)
{
    state_open();
    for (;;) {
        if (io_just() == 0)
            goto out;
        if (io_just() == 0)
            break;
        if (io_just() != 0)
            continue;
        goto out;
    }
out:
    ;
}
void gate_b(void);
