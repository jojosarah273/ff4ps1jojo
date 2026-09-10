/* FF4 source-port — shop/confirm.c
 *
 * Shop confirm screen (detail_close) and item-detail cells
 * (shop_detail_cells_xe_x19_x18_xc_wi). Exact decodes; ground truth src/detail_close.c,
 * src/shop_detail_cells_xe_x19_x18_xc_wi.c (byte-verified).
 */
#include <stdint.h>

void txt_set(uint32_t id);
void txt_draw(uint32_t id);
void cell_put(uint32_t id);
void row_page(uint32_t id);
void row_read(uint32_t id);
void latch(uint32_t id);
uint32_t gate(uint32_t id);
void ok_row(void);          /* 8017559C / 801030F8 */
void sell_row(void);        /* 80103310          */
void cd_row(void);          /* 800FD718          */
void detail_pair(uint32_t id);
void detail_row(uint32_t id);
void detail_close(uint32_t id);

/* 801031F0 */
void shop_confirm_run(void)
{
    txt_set(0x1286);
    row_read(4);
    if (gate(2) == 0)
        return;
    latch(4);
    txt_draw(0x1704);
    latch(3);
    cell_put(0xAC);
    txt_draw(0x1705);
    row_page(0xB1);
    if (gate(2) != 0) {
        cd_row();
        open_row(0x79);
        sell_row();
        return;
    }
    row_page(0xE1);
    if (gate(2) != 0) {
        ok_row();
        latch(0x20);
        cell_put(0x79);
        latch(0xF);
        txt_draw(0x6FD);
        sell_row();
        return;
    }
    latch(0x20);
    cell_put(0xAD);
    latch(0x10);
    cell_put(0xB7);
    ok_row();
    latch(0xF);
    txt_draw(0x6FD);
}

/* 80105230 */
void shop_detail_run(void)
{
    row_page(0xE);
    row_read(0xF);
    cell_put(0x19);
    open_row(0x18);
    detail_pair(0x19);
    detail_pair(0x18);
    detail_row(0x18);
    row_page(0x19);
    sep();
    row_open(0x18);
    cell_put(0x19);
    row_page(0xC);
    row_read(0x10);
    if (gate(2) != 0) {
        row_page(0x19);
        sep();
        row_open(4);
        cell_put(0x19);
    }
    detail_close(0x18);
}
void open_row(uint32_t id);
void sep(void);
void row_open(uint32_t id);
