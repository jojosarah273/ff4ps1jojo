/* FF4 source-port — interpreted module for func_8013DE38.
 * Ground truth: src/func_8013DE38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED50;
extern u8 *D_8019ED68;
void func_8013DE38(void)
{
    row_open();
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L3DFC0;
    row_page(1);
    sep_a();
    row_open_w(0xF);
    if (*D_8019ED50 != 0)
        goto L3DEB8;
    /* branch-skip: v1 = *D_8019ED68 | 2 (dead) */
L3DEB8:
    if (cell_flags_hi7() == 0)
        goto L3DF38;
    sep_a();
    cell_poke0(cell_state_of());
    if (io_go() == 0)
        goto L3E0B0;
    goto L3DFA0;
L3DF38:
    sep_a();
    cell_poke0(cell_state_of());
    if (io_go() != 0)
        goto L3E0B0;
L3DFA0:
    goto L3E0D0;
L3DFC0:
    row_page(1);
    if (gate(0x8080) != 0)
        goto L3E048;
    sep_a();
    cell_poke0(cell_state_of());
    if (io_go() != 0)
        goto L3E0D0;
    goto L3E0B0;
L3E048:
    sep_a();
    cell_poke0(cell_state_of());
    if (io_go() == 0)
        goto L3E0D0;
L3E0B0:
    latch(0xF0);
    cell_pull_c8(0x340);
    cell_pull_c8(0x341);
    goto L3E1C8;
L3E0D0:
    cell_pull_c8(0x340);
    row_page(2);
    sep_a();
    cell_poke0(cell_state(3));
    cell_pull_c8(0x341);
    row_page(4);
    row_read(0x60);
    cell_push_c8();
    cell_pull_c8(0x342);
    cell_push_c8();
    cell_tick_xor(cell_state(5));
    cell_cursor_dec();
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L3E1B8;
    row_close2();
    cell_cursor_dec();
L3E1B8:
    row_close2();
    cell_pull_c8(0x343);
L3E1C8:
    step2();
    step2();
    step2();
    step2();
    row_close();
    return;
}
