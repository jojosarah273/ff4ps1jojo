/* FF4 source-port — battle/rows.c
 *
 * Battle row drivers: the cell/text rows are painted as (label, cells,
 * poll) chains. Primitives map to the window layer (port/src/panel.c).
 * Ground truth: src/func_80140CFC, 8013F96C, 801667F0, 8013A8CC,
 * 80143DB4, 80143E44, 80148D58, 80148ED0.
 */
#include <stdint.h>

void     wnd_poll(uint32_t ticks);      /* 800F5958  + 800F53D4  */
uint32_t io_just(void);                 /* 800F53D4             */
void     cell_fmt(uint32_t id);         /* 800F6B68 / 8768      */
void     cell_mix(void);                /* 800F8960 / 63BC      */
void     cell_step(void);               /* 800F6364             */
void     page(uint32_t id);             /* 800F7270             */
void     row_prep(uint32_t id, uint32_t key); /* 6630 + 4248 etc */

/* 80140CFC: hold loop over the 0x34C2 label + cell pair. */
void battle_row_hold_label(void)
{
    do {
        cell_fmt(0x34C2);
        cell_fmt(0x34C2);
        cell_step();
        wnd_poll(8);
    } while (io_just() == 0);
}

/* 8013F96C */
void battle_row_poll5(void)
{
    do {
        cell_fmt(0x2800);   /* 0x2800 cell page               */
        cell_step();
        wnd_poll(5);
    } while (io_just() == 0);
}

/* 801667F0 */
void battle_row_armed(void)
{
    page(0x4E);
    do {
        cell_fmt(0);
        cell_step();
        wnd_poll(0x20);
    } while (io_just() == 0);
}

/* 8013A8CC */
void battle_row_poll9(void)
{
    page(0x41);
    do {
        cell_fmt(0);
        cell_step();
        wnd_poll(9);
    } while (io_just() == 0);
}

/* 80143DB4 / 80143E44 / 80148D58 / 80148ED0 (twins) */
void battle_row_pair_probe(void)
{
    row_prep(0, 0);
    cell_pair();
    cell_pair();
    battle_row_close();
}
void cell_pair(void)
{
    /* 5410 + 3F38(3B04()) + 8768() */
    cell_fmt(0);
    cell_fmt(0);
}
void battle_row_close(void)
{
    row_prep(0, 0);
}
