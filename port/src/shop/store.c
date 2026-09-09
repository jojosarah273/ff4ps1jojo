/* FF4 source-port — shop/store.c
 *
 * Shop store-row driver (shop_store_run, exact decode).
 * Ground truth: src/shop_store_run.c (byte-verified).
 */
#include <stdint.h>

void sep(void);                 /* 800F971C / 5410   */
void cell_fmt(uint32_t id);     /* 800F6C68 / 8768   */
void cell_step(void);           /* 800F6364          */
void poll_t(uint32_t t);        /* 800F5958          */
uint32_t io_just(void);         /* 800F53D4          */
void row_open(void);            /* 800F926C / 9200   */
void row_pad(void);             /* 800F9448          */
void latch(uint32_t id);        /* 800F654C          */
void txt_draw(uint32_t id);     /* 800F8188          */

void shop_store_run(void)
{
    sep();
    for (;;) {
        cell_fmt(0x3304);
        cell_step();
        poll_t(0x15);
        if (io_just() != 0)
            break;
    }
    row_open();
    sep();
    row_open();
    row_pad();
    latch(0x43);
    txt_draw(0x4300);
    txt_draw(0x4310);
    latch(0x42);
    txt_draw(0x4320);
}
