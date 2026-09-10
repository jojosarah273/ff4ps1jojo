/* FF4 source-port — config/party.c
 *
 * Formation summary + formation-row + ability-page drivers (exact
 * Phase A decodes).
 * Ground truth: src/formation_summary_xd9_xda_windows, 8012EAC0, 80137938.
 */
#include <stdint.h>

void row_page(uint32_t id);
void row_arm(uint32_t id);
void cell_put(uint32_t id);
void page(uint32_t id);
void sep(void);
void row_open(void);
void row_open2(uint32_t id);
void row_prep(uint32_t id);
void row_sel(void);             /* 800F80D0  */
uint32_t io_go(void);           /* 800F53C0  */
void cell_step(void);
void tail(uint32_t id);
void cell_fmt(uint32_t id);
void gate_row(uint32_t id);
uint32_t gate(uint32_t id);
void io_poll(uint32_t k);
void latch(uint32_t id);
void txt_set(uint32_t id);
void txt_draw(uint32_t id);

/* 8012E33C: formation summary. */
void formation_summary(void)
{
    row_page(0xD9);
    row_arm(0);
    cell_put(0x43);
    page(0x43);
    row_page(0xDA);
    row_arm(0);
    cell_put(0x43);
    row_arm2(0x43);
    row_open();
    row_prep(0x20);
    for (;;) {
        row_sel();
        if (io_go() != 0)
            break;
        cell_step();
    }
    txt_rows();
}

/* 8012EAC0: formation live row. */
void formation_live(void)
{
    for (;;) {
        page(0x1D);
        cell_step();
        tail(0x23);
        gate_row(0x1D);
        if (gate(0x202) != 0)
            goto out;
        row_arm2(0x1D);
        cell_step();
        cell_step();
        for (;;) {
            cell_fmt(0);
            if (gate(2) != 0)
                break;
            io_poll(0xFE);
            if (io_go() != 0)
                goto out;
            cell_fmt(0);
        }
        if (gate(2) == 0)
            continue;
        break;
    }
out:
    cell_step();
}

/* 80137938: ability page block. */
void ability_page(void)
{
    row_page(0);
    row_read(0x40);
    if (gate(2) != 0)
        return;
    txt_set(0x1B7A);
    if (gate(2) != 0)
        return;
    txt_set(0x1B7C);
    sep();
    row_open2(0xA);
    io_poll(0x64);
    if (io_go() != 0)
        latch(0xA);
    txt_draw(0x1B7C);
    txt_draw2(0x1BCB);
}
void row_arm2(uint32_t id);
void txt_rows(void);
void row_read(uint32_t id);
void txt_draw2(uint32_t id);
