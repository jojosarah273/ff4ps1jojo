/* FF4 source-port — window/input primitive API (0x800F family).
 *
 * One mapping table for the window layer; every interpreted module
 * calls through these names. The func ids are the byte-verified Phase A
 * primitives (ground truth in src/func_800Fxxxx.c).
 */
#ifndef FF4_PORT_WINDOW_H
#define FF4_PORT_WINDOW_H

#include <stdint.h>

typedef uint32_t u32; typedef int32_t s32; typedef uint16_t u16;
typedef int16_t s16; typedef uint8_t u8;

/* cells & state */
uint32_t cell_state(uint32_t off);       /* 800F3B04 (catalog base)   */
uint32_t cell_state_of(void);            /* 800F3B04() (held cell)   */
uint32_t cell_poke(uint32_t v);          /* 800F3F38(3B04())          */
uint32_t cell_peek(void);                /* 800F3B9C/3C3C             */

/* windows / rows */
void wnd_open(uint32_t id);              /* 800F71DC                  */
void row_page(uint32_t id);              /* 800F6630                  */
void row_read(uint32_t id);              /* 800F4248                  */
void row_prep(uint32_t id);              /* 800F9644                  */
void row_prep_close(void);               /* 800F9660                  */
void latch_cur(void);                    /* 800F654C() (latch)        */
void row_open_w0(void);                  /* 800F4008()                */
void row_open(void);                     /* 800F9330                  */
void row_open2(void);                    /* 800F926C/9298/9448        */
void row_close(void);                    /* 800F95A0                  */
void row_done(void);                     /* 800F960C                  */
void row_sel_cell(void);                 /* 800F5140/4F4C             */

/* text */
void page(uint32_t id);                  /* 800F7270                  */
void page_open(uint32_t id);             /* 800F7210                  */
void page_paint(uint32_t id);            /* 800F90EC                  */
void txt_set(uint32_t id);               /* 800F6564                  */
void txt_draw(uint32_t id);              /* 800F8188                  */
void txt_cell(uint32_t id);              /* 800F6B68                  */
void cell_draw(uint32_t id);             /* 800F8768                  */
void cell_put(uint32_t id);              /* 800F824C                  */
void cell_fmt(uint32_t id);              /* 800F6B68/8768            */
void tail(uint32_t id);                  /* 800F8D6C                  */
void label(uint32_t id);                 /* 800F8D00                  */
void open_row(uint32_t id);              /* 800F8FB8                  */

/* input */
void io_poll(uint32_t k);                /* 800F5574                  */
uint32_t io_just(void);                  /* 800F53D4                  */
uint32_t io_go(void);                    /* 800F53C0                  */
uint32_t io_press(uint32_t c);           /* 800F54D4(3B04(c))         */
uint32_t gate(uint32_t id);              /* 800F6434                  */
uint32_t sel(uint32_t id);               /* 800F4120                  */
void poll_t(uint32_t t);                 /* 800F5958 / 5A90           */
void poll_pair(uint32_t id);             /* 800F5DA0 / 62BC           */
uint32_t poll_go(uint32_t id);           /* 800F5B8C / 5C64 (0x202)   */

/* flow */
void latch(uint32_t id);                 /* 800F654C                  */
void sep(void);                          /* 800F971C                  */
void sep_a(void);                        /* 800F5410                  */
void sep_b(void);                        /* 800F5480                  */
void cell_step(void);                    /* 800F6364                  */
void step2(void);                        /* 800F63BC                  */
void draw_pad(uint32_t id);              /* 800F7500                  */
void key_page(uint32_t id);              /* 800F62BC                  */
void page_paint2(uint32_t id);           /* 800F6240                  */
void cell_dispatch(void);                /* 800F6048                  */
void row_open_w(uint32_t id);            /* 800F4008                  */
void cell_fmt2(uint32_t id);             /* 800F7594                  */
void row_sel2(uint32_t cell);            /* 800F7894 / 7A40           */
void row_arm2(uint32_t id);              /* 800F4F28                  */

/* no-arg variants (0-arg call sites in the source) */
void tail_cur(void);          /* 800F8D6C()  */
void wnd_open_cur(void);      /* 800F71DC()  */
void txt_set_cur(void);       /* 800F6564()  */
void txt_cell_cur(void);      /* 800F6B68()  */
void row_prep_cur(void);      /* 800F9644()  */
void poll_t_cur(void);        /* 800F5958()  */
void io_poll_cur(void);       /* 800F5574()  */
uint32_t io_press_cur(void);  /* 800F54D4()  */
void cell_draw_cur(void);     /* 800F8768()  */
void page_cur(void);          /* 800F7270()  */

#endif

/* more no-arg variants (mapper output) */
void latch_cur(void);          /* 800F654C()  */
uint32_t cell_state_of(void);  /* 800F3B04()  */
void cell_peek_cur(void);      /* 800F3B9C()  */
void draw_pad_cur(void);       /* 800F7500()  */
void key_page_cur(void);       /* 800F62BC()  */
void poll_pair_cur(void);      /* 800F5DA0()  */
void page_paint_cur(void);     /* 800F90EC()  */
void page_paint2_cur(void);    /* 800F6240()  */
void txt_draw_cur(void);       /* 800F8188()  */
void row_scan_cur(void);       /* 800F5CF8()  */
void row_sync2_cur(void);      /* 800F6558()  */
void row_sel2_cur(void);       /* 800F7894()  */
void row_arm2_cur(void);       /* 800F4F28()  */
void row_act2_cur(void);       /* 800F7828()  */
void cell_put_cur(void);       /* 800F824C()  */
void label_cur(void);          /* 800F8D00()  */
void row_sel2_w(uint32_t id);  /* 800F7894(id) */
