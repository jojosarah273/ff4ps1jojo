/* FF4 source-port — config/options.c
 *
 * Options-screen row drivers (exact Phase A decodes).
 * Primitive table (window layer):
 *   txt_set = 800F6564      txt_cell = 800F6B68      cell_draw = 800F8768
 *   cell_put = 800F824C     page_open = 800F7210
 *   gate      = 800F6434    io_just   = 800F53D4
 *   io_poll   = 800F5574    io_go     = 800F53C0
 *   poll_t    = 800F5958    sep       = 800F5410
 *   latch     = 800F654C    tail      = 800F8D6C
 *   opt_row_a = 8015A5B8    opt_flat  = 8015236C / 8015254C
 *   opt_end   = 8015A56C    opt_next  = 8016046C
 * Ground truth: src/options_x3558_x2016_texts_x202f_ce, 8015AACC, 8015ABEC, 8015FB70,
 * 8015FA70.
 */
#include <stdint.h>

void txt_set(uint32_t id);
void txt_cell(uint32_t id);
void cell_draw(uint32_t id);
void cell_put(uint32_t id);
void page_open(uint32_t id);
uint32_t gate(uint32_t id);
uint32_t io_just(void);
void io_poll(uint32_t k);
uint32_t io_go(void);
void poll_t(uint32_t t);
void sep(void);
void latch(uint32_t id);
void tail(uint32_t id);
void opt_row_a(void);
void opt_flat(void);
void opt_end(void);
void opt_next(void);
void row_open(uint32_t id);
void label_row(uint32_t id);
void cell_step(void);
void catalog_base(uint32_t off);

/* 8015A89C */
void options_row_main(void)
{
    txt_set(0x3558);
    if (gate(2) == 0)
        txt_cell(0x202F);
    txt_cell(0x2016);
    sep();
    row_open(0x14);
    tail(0xA9);
    opt_row_a();
    opt_end();
}

/* 8015FA70 */
void options_row_page(void)
{
    opt_flat();
    page_open(0x3949);
    poll_t(0x270F);
    if (io_go() != 0) {
        label_row(0x270F);
    }
    txt_set(0x3949);
    cell_put(0xA4);
    txt_set(0x394A);
    cell_put(0xA5);
}

/* 8015FB70 */
void options_row_latch(void)
{
    txt_set(0x38E6);
    row_open(0);
    for (;;) {
        txt_cell(0x29B5);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        cell_step();
    }
    tail(0x8A);
    latch(1);
    opt_next();
}

/* 8015AACC */
void options_row_select(void)
{
    catalog_base(0x2000);
    if (gate(0) != 0)
        opt_flat();
    else
        opt_flat();
    opt_row_a();
    opt_end();
}

/* 8015ABEC */
void opt_commit(void)
{
    catalog_base(0x2000);
    opt_flat();
    opt_flat();
}
