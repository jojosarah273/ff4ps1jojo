/* FF4 source-port — interpreted module for func_801004D4.
 * Ground truth: src/func_801004D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801004D4(void)
{
    /* battle stats: 0x16A0-0x16A2 texts, 0x30-0x32 windows rows via
       3F38(3C3C); 5574 cursor ladder. */
    txt_set(0x16A0);
    sep_a();
    cell_poke0(cell_state(0x30));
    txt_draw(0x16A0);
    txt_set(0x16A1);
    cell_poke0(cell_state(0x31));
    txt_draw(0x16A1);
    txt_set(0x16A2);
    cell_poke0(cell_state(0x32));
    txt_draw(0x16A2);
    io_poll(0x98);
    if (io_go() == 0)
        return;
    txt_set(0x16A1);
    io_poll(0x96);
    if (io_go() == 0)
        return;
    txt_set(0x16A0);
    io_poll(0x7F);
    if (io_go() == 0)
        return;
    latch(0x7F);
    txt_draw(0x16A0);
    latch(0x96);
    txt_draw(0x16A1);
    latch(0x98);
    txt_draw(0x16A2);
    return;
}
