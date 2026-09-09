/* FF4 source-port — battle/monster.c
 *
 * Monster status rows (monster_status_run, exact decode): the 0x95 window
 * and 0x300..0x303 stat cells, with the 0x2384/0x2383/0x2483 variant
 * labels and the 0x96 press-poll loop.
 * Ground truth: src/monster_status_run.c (byte-verified).
 */
#include <stdint.h>

void row_page(uint32_t id);      /* 800F6630  */
uint32_t gate(uint32_t id);      /* 800F6434  */
void open_row(uint32_t id);      /* 800F8FB8  */
void mon_prep(void);             /* 8016B650  */
void sep(void);                  /* 800F971C  */
void row_open(void);             /* 800F9330  */
void cell_fmt(uint32_t id);      /* 800F6B68  */
void cell_mix(uint32_t id);      /* 800F8960  */
void cell_v(uint32_t id);        /* 800F78C4(800F3B04(id)) */
uint32_t gate2(uint32_t id);     /* 800F7918  */
void latch(uint32_t id);         /* 800F654C  */
void tail(uint32_t id);          /* 800F924? / 824C */
void row_arm(uint32_t id);       /* 800F4248  */
void step2(void);                /* 800F63BC  */
void row_close(void);            /* 800F95A0  */
void sep_a(void);                /* 800F5410  */
void cell_poke(void);            /* 800F3F38(800F3B04()) */
void cell_step(void);            /* 800F6364  */
uint32_t press(uint32_t id);     /* 800F56AC(800F3C3C(id)) */

void monster_status_run(void)
{
    row_page(0x95);
    if (gate(0x202) == 0)
        return;
    open_row(0x95);
    mon_prep();
    sep();
    for (;;) {
        row_open();
        cell_fmt(0x2303);
        if (gate(2) != 0)
            goto skiprow;
        row_open();
        row_arm(0);
        cell_fmt(0x2384);
        cell_v(0);
        if (gate2(2) != 0)
            goto alt;
        latch(0xF0);
        cell_mix(0x300);
        cell_mix(0x301);
        goto cells;
    alt:
        cell_fmt(0x2383);
        cell_mix(0x300);
        cell_fmt(0x2483);
        cell_mix(0x301);
    cells:
        row_close();
        cell_fmt(0x2683);
        sep_a();
        cell_poke();
        cell_fmt(0);
        tail(0x28);
        row_arm(0x3F);
        cell_mix(0x302);
        row_page(0x28);
        row_arm(0xC0);
        cell_mix(0x303);
        step2();
        step2();
        step2();
        step2();
    skiprow:
        row_close();
        cell_step();
        if (press(0x96) == 0)
            continue;
        break;
    }
}
