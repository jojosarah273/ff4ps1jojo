/* FF4 source-port — shop/shop_dispatch.c
 *
 * The shop view/row drivers: window chains over the 0x82/0x79/0x80 pad
 * windows with the buy-command gates. Exact mirrors.
 *
 * Ground truth: src/shop_rows_run.c, 800FD914, 800FB09C
 * (byte-verified; asm order mirrored 1:1).
 */
#include <stdint.h>

uint32_t cell_put();
uint32_t open_row();
uint32_t row_page();
uint32_t txt_draw();
uint32_t key_page();
uint32_t cell_tick_and();
uint32_t ticker_reblend();
uint32_t io_poll();
uint32_t io_just();
uint32_t poll_pair();
uint32_t poll_go();
uint32_t latch();
uint32_t txt_set();
uint32_t wnd_open();
uint32_t draw_pad();
uint32_t cell_push_c8();
uint32_t cell_draw();
uint32_t cell_step();
uint32_t poll_t();
uint32_t cell_clear_bank();
uint32_t wnd_fx_7d_b();

extern void func_800FA460(void);
extern void func_800FB2E8(void);
extern void func_800FE028(void);
extern void func_800FE978(void);
extern void func_800FFADC(void);



/* 800FD85C: shop rows — 0x82/0x79/0x80 windows, 0x2100 text; the
 * loop polls the pad-82 gate and the 0x202 confirm. */
void shop_rows_run(void)
{
    cell_put(0x82);
    open_row(0x79);
    open_row(0x80);
    for (;;) {
        wnd_fx_7d_b();
        row_page(0x80);
        txt_draw(0x2100);
        key_page(0x79);
        row_page(0x79);
        cell_tick_and(0x82);
        if (ticker_reblend(0x202) != 0)
            continue;
        key_page(0x80);
        row_page(0x80);
        io_poll(0x10);
        if (io_just() == 0)
            continue;
        poll_pair(0x80);
        return;
    }
}

/* 800FD914: shop rows (b): 0xca row, deeper confirm ladder. */
void shop_rows2_run(void)
{
    cell_put(0x82);
    open_row(0x79);
    row_page(0xCA);
    io_poll(2);
    if (io_just() != 0)
        return;
    latch(0xF);
    cell_put(0x80);
    do {
        do {
            wnd_fx_7d_b();
            row_page(0x80);
            txt_draw(0x2100);
            txt_set(0x1700);
            io_poll(3);
            if (io_just() == 0) {
                latch(0x30);
                txt_draw(0x420C);
            }
            key_page(0x79);
            row_page(0x79);
            cell_tick_and(0x82);
        } while (ticker_reblend(0x202) != 0);
        poll_pair(0x80);
    } while (poll_go(0x8080) != 0);
    open_row(0x80);
}

/* 800FB09C: shop view: launcher + intro window + the draw-loop gate. */
void shop_view2_run(void)
{
    func_800FA460();
    func_800FB2E8();
    cell_clear_bank();
    cell_clear_bank();
    func_800FE028();
    latch(0x14);
    wnd_open(0x8900);
    func_800FE978();
    latch(0x14);
    draw_pad(0x8000);
    fn_1x1c1f8();
    wnd_open(0);
    do {
        cell_push_c8(0x148A80);
        cell_draw(0xEDB);
        cell_step();
        poll_t(0x100);
    } while (io_just() == 0);
    func_800FFADC();
    fn_1x1d218();
    fn_1x743e0();
}