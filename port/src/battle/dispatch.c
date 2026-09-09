/* FF4 source-port — battle/dispatch.c
 *
 * Small battle dispatchers (exact Phase A decodes).
 * Ground truth: src/func_800FEF7C, 80106CD4.
 */
#include <stdint.h>

uint32_t io_gate(void);      /* 800F53D4  */
void row_a(void);            /* 800FEE34  */
void row_b(void);            /* 80138F68  */
void row_c(void);            /* 80073D58  */
void row_d(void);            /* 80106D6C  */
void row_e(void);            /* 80071D4C  */
void row_f(void);            /* 8016CA94  */

/* 800FEF7C: three-way shop/battle row select. */
void dispatch_rows_3(void)
{
    if (io_gate() != 0)
        return;
    /* v1/v0 + v0 path */
    if (io_gate() == 0) {
        row_a();
        row_a();
        return;
    }
    row_b();
    row_b();
    row_c();
}

/* 80106CD4: three-way battle row select. */
void dispatch_rows_3b(void)
{
    if (io_gate() == 0)
        return;
    if (io_gate() == 0) {
        row_d();
        return;
    }
    row_e();
    return;
}
