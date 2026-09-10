/* FF4 source-port — battle/rows_more.c
 *
 * Battle row fragments (exact Phase A decodes).
 * Ground truth: src/battle_rows_b9c_xedb_b04_c3c_gates, 8011EF30.
 */
#include <stdint.h>

void cell_state(uint32_t id);   /* 800F3B9C/3B04/3C3C family */
void row_open(void);            /* 800F9330  */
void row_close(void);           /* 800F95A0  */
void stat_sync(void);           /* 800F939C  */
void line(void);                /* 800F926C  */
void cell_pad(void);            /* 800F9448  */
void row_tick(void);            /* 8011F030  */
void row_done(void);            /* 800F960C  */

/* 8010C1AC */
void battle_row_edb(void)
{
    cell_state(0xEDB);
    row_open();
    row_close();
}

/* 8011EF30 */
void battle_row_sync(void)
{
    row_open();
    stat_sync();
    line();
    cell_pad();
    cell_pad();
    row_tick();
    row_done();
}
