/* FF4 source-port — config/store.c
 *
 * Config store screen (config_store_x43_x48_x5e_x5b_x5a_x, exact decode): the count-limit
 * row set with item-quantity value rows; two nested poll loops on
 * 800F5DA0/5B8C(0x202).
 * Ground truth: src/config_store_x43_x48_x5e_x5b_x5a_x.c (byte-verified).
 */
#include <stdint.h>

void cell_put(uint32_t id);     /* 800F824C  */
void row_prep(uint32_t id);     /* 800F9644/9660  */
void row_read(uint32_t id);     /* 800F6658  */
void row_scan(void);            /* 800F5CF8  */
void row_arm(uint32_t id);      /* 800F516C  */
void row_sync(void);            /* 800F6558  */
void sep_b(void);               /* 800F5480  */
void arm_sub(uint32_t id);      /* 800F7FCC(800F3C3C(id)) */
void stat_sync(void);           /* 800F3D48  */
void row_act(void);             /* 800F4264  */
void row_sel(void);             /* 800F7894  */
void sep_a(void);               /* 800F5410  */
void cell_poke(void);           /* 800F3F94(800F3B9C()) */
void row_ptr(uint32_t id);      /* 800F66D8  */
void rfn_row(void);             /* 8012FBB0  */
void step_cell(void);           /* 800F63BC  */
void poll_pair(uint32_t id);    /* 800F5DA0 + 5B8C(0x202) */
uint32_t poll_go(void);

void config_store_run(void)
{
    cell_put(0x43);
    row_open2();                /* 80120FBC  */
    row_prep(0x20);
    row_read(0x43);
    row_scan_v();
    row_arm_s();
    cell_poke2(0x48);
    row_open_big();
    row_ptr(0x60);
    row_prep_close();
    open_row(0x5E);
    open_row(0x5B);
    latch(8);
    cell_put(0x5A);
    page(0x41);
    for (;;) {
        latch(3);
        cell_put(0x5D);
        for (;;) {
            row_prep(0x20);
            row_read(0x5D);
            row_scan();
            row_arm(8);
            row_sync();
            sep_b();
            arm_sub(0x5A);
            stat_sync();
            row_act();
            row_sel();
            sep_a();
            cell_poke();
            row_prep_close();
            row_ptr(0x60);
            rfn_row();
            step_cell();
            poll_pair(0x5D);
            if (poll_go() != 0)
                continue;
            break;
        }
        poll_pair(0x5A);
        if (poll_go() != 0)
            continue;
        break;
    }
    row_prep_close();
}
void row_open2(void);
void row_scan_v(void);
void row_arm_s(void);
void cell_poke2(uint32_t id);
void row_open_big(void);
void open_row(uint32_t id);
void latch(uint32_t id);
void page(uint32_t id);
void row_prep_close(void);
