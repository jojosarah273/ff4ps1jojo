/* FF4 source-port — interpreted module for func_80121124.
 * Ground truth: src/func_80121124.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80121124(void)
{
    row_open2();
    row_pad();
    row_read(0x3F);
    cell_tick_half();
    cell_put(0x63);
    sep_a();
    cell_poke0(cell_state(0x63));
    cell_set50_from40();
    cell_put(0x65);
    row_prep(0x20);
    row_prep_close();
    cell_put(0x64);
    sep_a();
    cell_poke0(cell_state(0x64));
    cell_set50_from40();
    cell_put(0x66);
    row_read(0x3F);
    cell_tick_half();
    cell_put(0x67);
    sep_a();
    cell_poke0(cell_state(0x67));
    cell_set50_from40();
    cell_put(0x69);
    row_prep(0x20);
    row_prep_close();
    cell_put(0x68);
    sep_a();
    cell_poke0(cell_state(0x68));
    cell_set50_from40();
    cell_put(0x6A);
    row_pad();
L1450:
    for (;;) {
        row_page(0x64);
        if (io_press(cell_state(0x68)) == 0)
            func_801217EC();
        row_page(0x66);
        if (io_press(cell_state(0x6A)) == 0)
            func_801218EC();
        row_page(0x63);
        if (io_press(cell_state(0x67)) == 0)
            func_801219EC();
        row_page(0x65);
        if (io_press(cell_state(0x69)) == 0)
            func_80121B5C();
        row_page(0xC2);
        if (gate(2) == 0) {
            poll_pair(0xC2);
            draw_pad(8);
            page(0x41);
            for (;;) {
                func_80121678();
                poll_pair_cur();
                if (poll_go(0x202) != 0)
                    continue;
                break;
            }
        }
        /* v0/s0 branch */
        if (1) {
            func_80126990();
        }
        func_8011F320();
        row_page(0xC3);
        wnd_open(0x85B8);
        func_80120070();
        /* v1/s0 branch */
        if (1) {
            func_80126990();
        }
        func_8016EA7C();
        page(0x63);
        if (cell_flags_cmp(cell_state(0x67)) == 0)
            continue;
        page(0x65);
        if (cell_flags_cmp(cell_state(0x69)) == 0)
            continue;
        txt_set(0x1C2);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    wnd_open(0x858C);
    label(0x1CD);
    label(0x1D0);
    return;
}
