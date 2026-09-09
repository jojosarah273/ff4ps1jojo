/* FF4 source-port — battle/itemcast.c
 *
 * Battle item/stat-cast root (func_80149614, exact decode): confirm
 * key 0x8C, the 0x29B5 item list poll, then the cast rows with the
 * 0x38E6 confirm screens; commits via 801495F4/8014D568.
 * Ground truth: src/func_80149614.c (byte-verified).
 */
#include <stdint.h>

void txt_set(uint32_t id);
void txt_draw(uint32_t id);
void io_poll(uint32_t k);
uint32_t io_just(void);
uint32_t io_go(void);
void cell_fmt(uint32_t id);
void cell_step(void);
uint32_t cell_go(void);
void poll_t(uint32_t t);
void sep(void);
void gate_row(uint32_t id);
uint32_t gate(uint32_t id);
void row_read(uint32_t id);
void cast_tail(void);           /* 800976A4 / 801495D4 etc */
void cast_commit(void);         /* 801495F4 + 8014D568  */

void battle_itemcast_run(void)
{
    txt_set(0);
    io_poll(0x8C);
    if (io_just() != 0) {
        txt_draw(0);
    }
    txt_set(0);
    if (gate(0x202) != 0)
        goto confirm;
    sep();
    for (;;) {
        cell_fmt(0x29B5);
        if (cell_go() == 0)
            goto confirm;
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            goto cast_list;
    }
confirm:
    txt_set(0x38E6);
    io_poll(3);
    if (io_just() != 0)
        goto cast_list;
    txt_set(0x29A4);
    row_read(0x10);
    if (gate(2) != 0)
        goto cast_alt;
    txt_set(0x38E6);
    if (gate(0x202) != 0)
        goto cast_alt;
    cast_tail();
    goto commit;
cast_alt:
    cast_alt_rows();
    gate_row(0x1800);
    poll_t(0x1B7);
    if (io_just() == 0)
        goto commit;
    txt_set(0x38E6);
    if (gate(0x202) != 0)
        goto commit;
    cast_alt2();
commit:
    cast_commit();
    sep();
}
void cast_alt_rows(void);
void cast_alt2(void);
