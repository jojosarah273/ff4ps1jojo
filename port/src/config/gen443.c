/* FF4 source-port — interpreted module for func_80152F0C.
 * Ground truth: src/func_80152F0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED58;
void func_80152F0C(void)
{
    txt_set(0x3553);
    if (gate(0x202) == 0) {
        row_page(0xCD);
        if (gate(0x8080) == 0) {
            row_read(0x7F);
            sep_a();
            row_open_w(5);
        }
        func_80152CDC();
        page(0xA6);
        sep();
        *D_8019ED58 = *D_8019ED44;
        do {
            cell_push_c8_d58(0x2680);
            cell_draw(0x2000);
            cell_step();
            step2();
            poll_t(0x80);
        } while (io_just() == 0);
    }
    row_page(0xCE);
    if (gate(0x8080) == 0) {
        row_read(0x7F);
        sep_a();
        row_open_w(5);
    }
    func_80152CDC();
    page(0xA6);
    sep();
    *D_8019ED58 = *D_8019ED44;
    do {
        cell_push_c8_d58(0x2700);
        cell_draw(0x2000);
        cell_step();
        step2();
        poll_t(0x80);
    } while (io_just() == 0);
}
