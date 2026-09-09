/* FF4 source-port — config/miscrows.c
 *
 * Battle/shop row fragments (exact Phase A decodes).
 * Ground truth: src/func_80141100, 801460A4, 8016CA94, 80165B94.
 */
#include <stdint.h>

void state_open(void);
uint32_t io_just(void);
void row_pair_a(void);          /* 801411BC  */
void row_pair_b(void);          /* 80141240  */
void sep_b(void);               /* 800F5480  */
void row_prep(uint32_t id);     /* 800F9644  */
void line(void);                /* 800F922C  */
void row_open(void);            /* 800F9330  */
void row_sync(void);            /* 800F939C  */
void row_open2(void);           /* 800F926C/9298  */
void cursor_row(void);          /* 800F94B8  */
void sep(void);                 /* 800F971C  */
void row_prep_close(void);      /* 800F9660  */
void latch(uint32_t id);        /* 800F654C  */
void row_pad(void);             /* 800F9448  */
void row_page(uint32_t id);     /* 800F6630  */
void shop_row(void);            /* 80165C7C  */

/* 80141100 */
void battle_row_pair_screen(void)
{
    state_open();
    if (io_just() != 0) {
        row_pair_a();
        row_pair_b();
    }
}

/* 801460A4 */
void battle_row_latch(void)
{
    state_open();
    /* s0/v0 + s0/v1 latches */
    sep_b();
}

/* 8016CA94 */
void shop_row_ca94(void)
{
    row_prep(0x30);
    line();
    row_open();
    row_sync();
    row_open2();
    wnd_open();
    row_open();
    cursor_row();
    sep();
    row_prep_close();
    latch(0x7E);
    row_open2();
    row_pad();
    row_page(0x40);
}
void wnd_open(void);

/* 80165B94 */
void shop_row_5b94(void)
{
    state_open();
    /* s0/a0 + s0/s4 loups */
    shop_row();
    sep();
}
