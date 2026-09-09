/* FF4 source-port — config/formation.c
 *
 * Formation/party rows (exact Phase A decodes).
 * Ground truth: src/func_8012E5A8, 8012E844.
 */
#include <stdint.h>

void row_poke(uint32_t id);     /* 800F5DA0 / 800F62BC */
void row_mix(void);             /* 8012E7CC + 8011F684 */
void row_close(void);           /* 800F5E48 + poll 5C64 */
void tail(uint32_t id);         /* 800F8D6C  */
void row_prep(uint32_t id);     /* 800F9644  */
uint32_t io_just(void);         /* 800F53D4  */
void sep(void);                 /* 800F5410  */
void row_open(uint32_t id);     /* 800F4064  */

/* 8012E5A8: formation row loop. */
void formation_row_loop(void)
{
    row_prep_a();               /* 8012E264 + 71DC(8) */
    for (;;) {
        row_poke(0xD5);
        row_poke(0xD5);
        row_poke(0xD5);
        row_mix();
        row_close();
        if (io_just() != 0)
            break;
    }
}
void row_prep_a(void);

/* 8012E844: member row with the 0x1340 gate split. */
void formation_member_row(void)
{
    tail(0x1D);
    tail(0x1F);
    row_prep(0x1340);
    if (io_just() != 0) {
        sep();
        row_open(0xFA);
    } else {
        sep();
        row_open(0x5E);
    }
    cell_put(0x21);
    row_done();
}
void cell_put(uint32_t id);
void row_done(void);
