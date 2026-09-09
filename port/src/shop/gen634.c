/* FF4 source-port — interpreted module for func_801625A8.
 * Ground truth: src/func_801625A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern void func_8005FFEC(void);

void func_801625A8(void) {
    txt_set(0x269C);
    cell_cursor_dec();
    txt_set(0x2729);
    cell_cursor_dec();
    sep();
    txt_draw(0x2729);
    poll_spin();
    txt_draw(0x269C);
    func_8005FFEC();
    row_close2();
    txt_draw(0x2729);
    row_close2();
    txt_draw(0x269C);;
}
