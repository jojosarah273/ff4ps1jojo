/* FF4 source-port — config/ability.c
 *
 * Ability-bank row drivers (exact Phase A decodes).
 * Ground truth: src/config_rows_x1a02_text_x202_cell_g, 8012CD6C.
 */
#include <stdint.h>

void txt_set(uint32_t id);
void txt_cell(uint32_t id);
void cell_put(uint32_t id);
uint32_t gate(uint32_t id);
uint32_t io_sel(uint32_t key);
void bank_rows(void);   /* 8012C250 */
void bank_rows2(void);  /* 8012CEA8 */

/* 8012CC74: 0x1A02 label; gate 0x202 selects 8012C250 vs 8012CEA8. */
void ability_row_cc74(void)
{
    txt_set(0x1A02);
    if (gate(0x202) != 0)
        bank_rows2();
    else
        bank_rows();
}

/* 8012CD6C: 0x1A04 label; gate 2 selects 8012CC4C vs the label set. */
void ability_row_cd6c(void)
{
    txt_set(0x1A04);
    cell_draw2(0x80);
    if (io_sel(2) == 0) {
        latch(7);
        txt_cell(0x1A03);
        row_set(0x1B19);
        cell_put(0x93);
        tail(0x1BA5);
        page_open(0x1A65);
        return;
    }
    bank_rows();
}
void cell_draw2(uint32_t id);
void latch(uint32_t id);
void row_set(uint32_t id);
void tail(uint32_t id);
void page_open(uint32_t id);
