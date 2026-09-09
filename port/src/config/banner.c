/* FF4 source-port — config/banner.c
 *
 * Options banner rows (byte-verified on gcc-2.95.2; exact decodes).
 * Ground truth: src/func_80160AAC, 80160B8C, 80162628.
 */
#include <stdint.h>

void txt_set(uint32_t id);
void txt_draw(uint32_t id);
void row_read(uint32_t id);
void latch(uint32_t id);
uint32_t sel(uint32_t id);      /* 800F4120 (2 = armed) */
uint32_t io_just(void);
void io_poll(uint32_t k);
uint32_t io_go(void);
void row_helper(void);          /* 80153218 / 8015329C */
void aux_row(void);             /* 80062B08          */

/* 80160AAC: on/off banner (0x2726 page). */
void banner_main(void)
{
    txt_set(0x2726);
    row_read2(0x28A2);
    if (sel(2) != 0) {
        txt_set(0x2725);
        row_read2(0x28A2);
        if (sel(2) != 0)
            return;
        latch(1);
        txt_draw(0x38FE);
        txt_set(0x2725);
        row_read(0x40);
        if (sel(2) != 0)
            return;
        latch(0x82);
        txt_draw(0x38FE);
        return;
    }
    row_prep();
    txt_draw(0x38FE);
    txt_set(0x2726);
    row_read(0x40);
    if (sel(2) != 0)
        return;
    latch(0x84);
    txt_draw(0x38FE);
}

/* 80160B8C: banner poll (0x38FE, key 2). */
void banner_poll(void)
{
    txt_set(0x38FE);
    io_poll(2);
    if (io_just() == 0)
        return;
    txt_set(0x2721);
    row_read2(0x28A2);
    if (sel(2) == 0) {
        latch(8);
        txt_draw(0x38FE);
        return;
    }
    txt_set(0x2720);
    row_read2(0x28A2);
    if (sel(2) == 0) {
        latch(4);
        txt_draw(0x38FE);
    }
}

/* 80162628: sound-page option rows (0x80 gate). */
void banner_sound(void)
{
    row_helper();
    io_poll(0x80);
    if (io_go() != 0) {
        row_helper();
        latch(0x10);
        txt_draw(0x34CA);
        return;
    }
    latch(0xE);
    txt_draw(0x26D2);
    aux_row();
    latch(0xB);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
}
void row_read2(uint32_t id);
void row_prep(void);
