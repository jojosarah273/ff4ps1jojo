/* FF4 source-port — event/listinit.c
 *
 * Skill/event list-initialization rows (Phase A decodes).
 * Ground truth: src/event_b04_c3c_rows_with_a70_loops, 8013F124.
 */
#include <stdint.h>

void cat_reset(void);       /* 800F3B04/3C3C gate pair    */
void row_loop2(void);       /* 800F3A70 + 3B04            */
void line_paint(void);      /* 800F922C / 9410            */
void sep(void);             /* 800F5410                   */
void done_row(void);        /* 800F971C                   */

/* 8013EFD8: reset + loop the list header rows. */
void event_list_reset(void)
{
    cat_reset();
    for (;;) {
        row_loop2();
        line_paint();
        sep();
        done_row();
        return;
    }
}

/* 8013F124: two-pass list init into the 3A70 rows, then hand off. */
void event_list_init2(void)
{
    cat_reset();
    sep();
    for (;;) {
        row_loop2();
        row_loop2();
        /* a2/s0 + a2/a0 latch spins */
        break;
    }
    event_list_reset();
}
