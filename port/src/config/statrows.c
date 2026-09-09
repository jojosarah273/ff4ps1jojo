/* FF4 source-port — config/statrows.c
 *
 * Stat/options rows (exact Phase A decodes).
 * Ground truth: src/func_80161C48, 80162DF8, 8015E464.
 */
#include <stdint.h>

void latch(uint32_t id);        /* 800F654C  */
void txt_draw(uint32_t id);     /* 800F8188  */
void row_page(uint32_t id);     /* 800F6630  */
void cell_fmt(uint32_t id);     /* 800F6B68 / 8768  */
void cell_mix(uint32_t id);     /* 800F8960  */
void io_poll(uint32_t k);       /* 800F5574  */
uint32_t io_just(void);         /* 800F53D4  */
void cell_step(void);           /* 800F6364  */
void step2(void);               /* 800F63BC  */
void sep(void);                 /* 800F971C  */
void page(uint32_t id);         /* 800F7270  */
void cell_put(uint32_t id);     /* 800F824C  */
void row_arm(uint32_t id);      /* 800F4248  */
uint32_t gate(uint32_t id);     /* 800F6434 / 800F4120 */
void sub_row(void);             /* 8015329C  */
void row_a(void);               /* 80152224  */
void row_b(void);               /* 8015240C  */
void row_c(void);               /* 80153098  */
void row_d(uint32_t id);        /* 800F90EC  */

/* 80161C48 */
void stat_row_small(void)
{
    latch(0xFF);
    txt_draw(0x357B);
    latch(0x11);
    txt_draw(0x34CA);
    sub_row();
}

/* 80162DF8 */
void stat_row_paged(void)
{
    row_page(0xCD);
    if (gate(0x8080) != 0)
        goto armed;
    txt_draw(0x34C7);
    latch(0xF8);
    txt_draw(0x34C5);
    sep();
    do {
        cell_fmt(0x33C2);
        cell_mix(0x289C);
        io_poll(0xCE);
        if (io_just() != 0)
            break;
        io_poll(0xC5);
        if (io_just() != 0)
            break;
        cell_step();
        step2();
    } while (1);
    sep();
    do {
        cell_fmt(0x289C);
        cell_fmt(0x33C2);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        cell_step();
    } while (1);
armed:
    latch(0xF8);
    txt_draw(0x33C6);
    latch(4);
    txt_draw(0x33C7);
    step2();
    if (gate(2) == 0)
        return;
    page(0xA6);
    cell_fmt(0x201B);
    cell_put(0xDF);
    row_page(0xC1);
}

/* 8015E464 */
void stat_row_main(void)
{
    page(0xA6);
    latch(0x80);
    cell_fmt(0x2050);
    row_d(0x2051);
    row_d(0x2054);
    row_d(0x2053);
    cell_fmt(0x2004);
    row_arm(8);
    if (gate(2) != 0)
        return;
    for (;;) {
        latch(4);
        row_a();
        cell_put(0xA9);
        cell_put(0xDF);
        cell_fmt(0x3540);
        if (gate(0x202) != 0)
            continue;
        latch(0x80);
        cell_put(0xAB);
        row_b();
        page(0xE3);
        cell_fmt(0x2003);
        row_arm(0xC0);
        if (gate(0x202) != 0)
            continue;
        cell_fmt(0x2005);
        row_arm(0x82);
        if (gate(0x202) != 0)
            continue;
        cell_fmt(0x2006);
        if (gate(0x80) != 0)
            continue;
        row_page(0xA9);
        sep();
        row_c();
        page(0xA6);
        cell_fmt(0x2054);
    }
}
