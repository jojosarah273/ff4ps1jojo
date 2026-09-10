/* FF4 source-port — shop/shop.c
 *
 * Shop rows (exact Phase A decodes). Row = window/text/cells + poll.
 * Primitive table:
 *   wnd_open   = 800F71DC      tail        = 800F8D6C
 *   row_page   = 800F6630      row_read    = 800F4248
 *   txt_set    = 800F6564 / 800F7210
 *   cell_put   = 800F824C      cell_fmt    = 800F8768 / 800F6B68
 *   cell_poke  = 800F3F94(800F3B04())       cell_draw = 800F8188 /
 *               800F81E8 / 800F8D00 / 800F8FB8 / 800F9644
 *   gate       = 800F6434 / 800F4120       io_poll   = 800F55XX
 *   poll_t     = 800F5958 / 800F5A90       io_just   = 800F53D4
 *   sep        = 800F5410 / 800F971C       latch     = 800F654C
 *   row_close  = 800F9330 / 800F9660 / 800F95A0
 * Ground truth: src/shop_rows_x18_x1a_x1c_windows_x421, 8016BE1C, 8016BED4, 8016D160,
 * 8016D2B0, 8016D348, 8016D3E0, 8016DCE0, 8016ED64, 8016EEDC,
 * 8016FFC0, 80167074, 8016B530, 80168E30.
 */
#include <stdint.h>

void wnd_open(uint32_t id);
void tail(uint32_t id);
void row_page(uint32_t id);
void row_read(uint32_t id);
void txt_set(uint32_t id);
void page_open(uint32_t id);
void cell_put(uint32_t id);
void cell_fmt(uint32_t id);
void cell_poke(void);
void cell_draw(uint32_t id);
void gate(uint32_t id);
uint32_t io_just(void);
void poll_t(uint32_t t);
void sep(void);
void latch(uint32_t id);
void row_close(void);

/* 8016BD78: title rows around the 0x4218 text. */
void shop_row_title(void)
{
    row_page(0x18);
    row_page(0x1A);
    sep();
    page_open(0x4218);
    row_page(0x1C);
    row_close();
}

/* 8016BE1C: two cell-poke pairs. */
void shop_row_poke2(void)
{
    cell_poke();
    cell_poke();
}

/* 8016BED4: 0x2000/0x2040 cell loop. */
void shop_row_cells(void)
{
    row_close();
    latch(0x80);
    row_page(0x20);
    do {
        cell_fmt(0x2000);
        cell_fmt(0x2040);
        step2();
        poll_t(0x40);
    } while (io_just() == 0);
    row_close();
}

/* 8016DCE0: two shop loops over 0x2303/0x2883. */
void shop_row_loops(void)
{
    row_close();
    do {
        cell_fmt(0x2303);
        step2();
        poll_t(0x900);
    } while (io_just() == 0);
    row_close();
    do {
        cell_fmt(0x2883);
        step2();
        poll_t(0x80);
    } while (io_just() == 0);
}

/* 8016ED64 / 8016EEDC: value rows (0x64/0x6A/0x6B texts). */
void shop_row_values(int32_t page)
{
    row_prep(0x10);
    latch(page);
    cell_draw(0x64);
    latch(0x50 + page * 0x60);
    cell_draw(0x6A);
    latch(6 + page * 7);
    cell_draw(0x6B);
    shop_close();
}

/* 8016FFC0: 0x2100/0x2115 label pair. */
void shop_row_labels(void)
{
    row_prep(0);
    latch(0x80);
    cell_draw(0x2100);
    cell_put(0x88);
    latch(0x80);
    cell_draw(0x2115);
    row_close();
}

/* 8016D160/8016D2B0/8016D348: catalog + close triple. */
void shop_row_cat(void)
{
    row_prep(0);
    shop_row_poke2();
    row_close();
}

/* 80167074: gate + 5410 spin. */
void shop_row_gate(void)
{
    do {
        if (io_just() != 0)
            break;
        sep();
    } while (io_just() == 0);
}

/* 8016B530: shop row pair (8016D348 + 8016D2B0). */
void shop_row_pair(void)
{
    row_prep(0);
    shop_row_cat();
    shop_row_cat();
}

/* 80168E30: catalog gate + 0x37 row. */
void shop_row_cat37(void)
{
    catalog_guard();
    row_close();
    cell_put(0x37);
}
void step2(void);
void row_prep(uint32_t id);
void shop_close(void);
void catalog_guard(void);
