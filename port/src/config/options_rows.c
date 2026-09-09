/* FF4 source-port — config/options_rows.c
 *
 * The options-list row drivers (single row + the four-row run).
 * Exact mirrors of the Phase A sources.
 *
 * Ground truth: src/func_8015240C.c, 80152CDC (byte-verified).
 */
#include <stdint.h>
#include "ff4_window.h"

extern void func_8015236C(void);

/* 8015240C: one options row (0x394D cell + sep close). */
void options_row_run(void)
{
    cell_state();
    catalog_base(0x394D);
    sep();
}

/* 80152CDC: the options row chain (four rows + tail row). */
void options_rows_run(void)
{
    cell_state();
    catalog_base(0x2000);
    options_row_run();
    options_row_run();
    options_row_run();
    options_row_run();
    func_8015236C();
}