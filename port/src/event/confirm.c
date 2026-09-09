/* FF4 source-port — event/confirm.c
 *
 * Config confirm dialog (row_prep2_close, exact decode): 0x29 window +
 * 801245B4/885C cell rows; the loop polls the 2-gate and refreshes.
 * Ground truth: src/row_prep2_close.c (byte-verified).
 */
#include <stdint.h>

void row_open(void);            /* 800F926C/9298/9330  */
void wnd_open(uint32_t id);     /* 800F71DC           */
void cursor_row(void);          /* 800F94B8           */
void row_close(void);           /* 800F95A0           */
void row_prep(void);            /* 801245B4 + 885C    */
void cell_poke(void);           /* 800F6D70 / 3F94    */
void step2(void);               /* 800F63BC           */
uint32_t gate(uint32_t id);     /* 800F6434           */
void io_poll(uint32_t k);       /* 800F5574           */
uint32_t io_just(void);         /* 800F53D4           */
void sep(void);                 /* 800F5410           */
void row_prep2(uint32_t id);    /* 800F9644           */
void refresh_cell(void);        /* 800F6DE8           */
void open2(void);               /* 800F8D??           */

void config_confirm_run(void)
{
    row_open();
    row_open();
    wnd_open(0x100);
    row_open();
    cursor_row();
    row_close();
    row_open();
    row_prep2(0x20);
    sep();
    cell_poke();
    row_prep2_close();
    for (;;) {
        cell_poke();
        if (gate(2) != 0)
            goto done;
        step2();
        io_poll(1);
        if (io_just() != 0) {
            row_prep2(0x20);
            refresh_cell();
            sep();
            cell_poke();
            row_prep2_close();
        } else {
            row_prep();
        }
    }
done:
    row_close();
    cursor_row();
    return;
}
void row_prep2_close(void);
