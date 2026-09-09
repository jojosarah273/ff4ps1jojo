/* FF4 source-port — battle/spell.c
 *
 * Battle spell-cast helper (func_801109A8, exact decode). Two poll
 * loops: the first waits for the spell screens to arm (0x202 gate),
 * the second walks the target/0x24 rows with the 0x48/0x24/0x64 keys.
 * Ground truth: src/func_801109A8.c (byte-verified).
 */
#include <stdint.h>

void latch(uint32_t id);            /* 800F654C  */
void txt_draw(uint32_t id);         /* 800F8188  */
void row_prep(void);                /* 80110F2C  */
void cast_row(void);                /* 80110FA4  */
void cast_cell(void);               /* 80110B08  */
void row_page(uint32_t id);         /* 800F6630  */
void row_read(uint32_t id);         /* 800F4248  */
uint32_t wnd_gate(uint32_t id);     /* 800F4120  */
void key_page(uint32_t id);         /* 800F62BC  */
void io_poll(uint32_t k);           /* 800F5574  */
uint32_t io_just(void);             /* 800F53D4  */
uint32_t io_go(void);               /* 800F53C0  */
void open_row(uint32_t id);         /* 800F8FB8  */
void sep(void);                     /* 800F5410  */
void row_open(uint32_t id);         /* 800F4008  */
void cell_put(uint32_t id);         /* 800F824C  */
void spell_panel(void);             /* 80173780  */
void spell_commit_row(void);        /* 80110BC8  */
void spell_done(void);              /* 8011EA5C  */

void battle_spell_run(void)
{
    latch(1);
    txt_draw(0x6C8);
    row_prep();
    /* phase 1: wait for the spell menu to arm */
    for (;;) {
        cast_row();
        cast_cell();
        row_page(0x7A);
        row_read(7);
        if (wnd_gate(0x202) != 0)
            continue;
        key_page(0x24);
        row_page(0x24);
        io_poll(0x32);
        if (io_just() != 0)
            break;
    }
    open_row(0x24);
    /* phase 2: walk the cast rows */
    for (;;) {
        cast_row();
        row_page(0x24);
        io_poll(0x48);
        if (io_go() == 0) {
            sep();
            row_open(0xDC);
            cell_put(0xB9);
        }
        spell_panel();
        spell_commit_row();
        row_page(0x24);
        io_poll(0x24);
        if (io_go() != 0)
            cast_cell();
        row_page(0x7A);
        row_read(7);
        if (wnd_gate(0x202) != 0)
            continue;
        key_page(0x24);
        row_page(0x24);
        io_poll(0x64);
        if (io_just() != 0)
            break;
    }
    open_row(0xC8);
    spell_done();
}
