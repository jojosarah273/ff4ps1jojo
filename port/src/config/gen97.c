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
    if (func_800F53FC() == 0)
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
    func_800F8960(0x340);
    func_800F8960(0x341);
    goto L3E1C8;
L3E0D0:
    func_800F8960(0x340);
    row_page(2);
    sep_a();
    cell_poke0(cell_state(3));
    func_800F8960(0x341);
    row_page(4);
    row_read(0x60);
    func_800F6C68();
    func_800F8960(0x342);
    func_800F6C68();
    func_800F5ECC(cell_state(5));
    func_800F9200();
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L3E1B8;
    row_close2();
    func_800F9200();
L3E1B8:
    row_close2();
    func_800F8960(0x343);
L3E1C8:
    step2();
    step2();
    step2();
    step2();
    row_close();
    return;
}
