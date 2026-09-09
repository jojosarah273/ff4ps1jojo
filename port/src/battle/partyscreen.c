/* FF4 source-port — battle/partyscreen.c
 *
 * Party/ability screen (func_8013B95C, exact decode).
 * Ground truth: src/func_8013B95C.c (byte-verified).
 */
#include <stdint.h>

void row_open(void);            /* 800F926C/9298  */
void party_prep(void);          /* 8016EA9C      */
void party_rows(void);          /* 80123D3C      */
void txt_set(uint32_t id);
void page(uint32_t id);
void tail(uint32_t id);
void txt_draw(uint32_t id);
void latch(uint32_t id);
void cell_put(uint32_t id);
void cell_fmt(uint32_t id);
void cell_page(uint32_t id);
void gate_row(uint32_t id);
uint32_t gate(uint32_t id);
void io_poll(uint32_t k);
uint32_t io_go(void);
void cell_mix(uint32_t id);
void cell_step(void);
void poll_pair(uint32_t id);
uint32_t poll_go(void);
void party_end(void);           /* 8013BB0C + 80126610 + 80122114 */
void cursor_row(void);          /* 800F94B8 + 9448 */

void party_screen_run(void)
{
    row_open();
    party_prep();
    party_rows();
    txt_set(0x1A83);
    page(0x41);
    tail(0x1BB3);
    tail(0x1BB5);
    txt_draw(0x1BB5);
    latch(8);
    cell_put(0x45);
    page(0x41);
    for (;;) {
        cell_fmt(0x1804);
        if (gate(2) != 0)
            goto alt;
        io_poll(0x54);
        if (io_go() != 0)
            goto alt;
        cell_mix(0);
        goto norm;
    alt:
        cell_mix(0);
    norm:
        latch(0);
        cell_mix(0);
        cell_step();
        cell_step();
        cell_step2();
        poll_pair(0x45);
        if (poll_go() != 0)
            continue;
        break;
    }
    party_end();
    txt_set(0x1BC6);
    cursor_row();
}
void cell_step2(void);
