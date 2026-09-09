/* FF4 source-port — config/rows2.c
 *
 * Options sub-rows (exact Phase A decodes).
 * Ground truth: src/options_rows_run, 8015A9BC.
 */
#include <stdint.h>

void state_open(void);      /* 800F3C3C/3B04(0x2000) */
void row_cell(void);        /* 8015240C            */
void row_flat(void);        /* 8015236C            */
void opt_end(void);         /* 8015A56C            */
void opt_commit(void);      /* 8015ABEC            */

/* 80152CDC */
void options_rows_quad(void)
{
    state_open();
    row_cell();
    row_cell();
    row_cell();
    row_cell();
    row_flat();
}

/* 8015A9BC */
void options_rows_tick(void)
{
    state_open();
    row_cell();
    opt_commit();
    opt_end();
}
