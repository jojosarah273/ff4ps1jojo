/* FF4 source-port — interpreted module for func_8013CF08.
 * Ground truth: src/func_8013CF08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013CF08(void)
{
    /* battle rows: 80143D64/80143D14/8013D040 rows; loop L13CF50
       on 5958(8). */
    sep();
L13cf50:
    for (;;) {
        func_80143D64();
        sep_a();
        cell_poke0(cell_state_of());
        cell_put_cur();
        func_80143D14();
        sep_a();
        cell_poke0(cell_state_of());
        cell_put(2);
        row_open();
        txt_set_cur();
        sep_a();
        cell_poke0(cell_state_of());
        func_800F6C68();
        cell_put(4);
        func_800F6C68();
        row_close();
        func_8013D040();
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
