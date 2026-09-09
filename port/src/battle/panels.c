/* FF4 source-port — battle/panels.c
 *
 * Battle panel-state rows (exact Phase A decodes).
 * Ground truth: src/func_801466E0, 80146980, 80147020, 8014654C.
 */
#include <stdint.h>

void state_open(void);      /* 800F3C3C/3B04/3B9C family */
void row_open(void);        /* 800F9330  */
void row_sync(void);        /* 800F939C  */
void row_close(void);       /* 800F95A0  */
void row_done(void);        /* 800F960C  */
void sep_a(void);           /* 800F5410  */
void sep_b(void);           /* 800F5480  */
void gate_row(void);        /* 800728AC  */
uint32_t io_just(void);     /* 800F53D4  */

/* 801466E0 */
void battle_panel_open(void)
{
    state_open();
    row_open();
    row_sync();
    row_done();
    row_close();
}

/* 80146980 */
void battle_panel_sync(void)
{
    state_open();
    sep_a();
    sep_b();
}

/* 80147020 */
void battle_panel_gate(void)
{
    state_open();
    if (io_just() != 0) {
        gate_row();
        sep_b();
        return;
    }
    gate_row();
    if (io_just() != 0)
        sep_b();
    else
        sep_a();
}

/* 8014654C */
void battle_panel_latch(void)
{
    state_open();
    /* v1/v0 + a0/v1 + a2/v0 latch tree */
    sep_a();
}
