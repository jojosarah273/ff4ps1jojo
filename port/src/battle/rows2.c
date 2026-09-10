/* FF4 source-port — battle/rows2.c
 *
 * Battle row loops with the D44/D54 cell copy (exact Phase A decodes).
 * Ground truth: src/battle_rows_d54_d44_loop_on_b68_xf, 80142DC0, 80135BE4.
 */
#include <stdint.h>

extern uint16_t *g_held_cell;   /* D_8019ED44 */
extern uint16_t *g_cur_cell;    /* D_8019ED54 */

void sep(void);                 /* 800F971C  */
void cell_fmt(uint32_t id);     /* 800F6B68 / 8768  */
void cell_step(void);           /* 800F6364  */
void poll_t(uint32_t t);        /* 800F5958  */
uint32_t io_just(void);         /* 800F53D4  */
void latch(uint32_t id);        /* 800F654C  */
void row_pair(void);            /* 80143E44  */
void row_init_a(void);          /* 80142E34  */
void ability_row_a(void);       /* 80135EE4  */
void ability_row_b(void);       /* 80135DE4  */
void row_done(void);            /* 8018F0E8  */

/* 80140D94 */
void battle_row_f476(void)
{
    sep();
    *g_cur_cell = *g_held_cell;
    do {
        cell_fmt(0xF476);
        cell_fmt(0x34C2);
        cell_step();
        poll_t(8);
    } while (io_just() == 0);
}

/* 80142DC0 */
void battle_row_43e44(void)
{
    row_init_a();
    sep();
    *g_cur_cell = *g_held_cell;
    do {
        latch(8);
        row_pair();
        cell_step();
        poll_t(0x10);
    } while (io_just() == 0);
}

/* 80135BE4 */
void ability_row_pick(void)
{
    if (io_just() != 0) {
        ability_row_a();
        row_done();
        return;
    }
    ability_row_a();
    row_done();
}
