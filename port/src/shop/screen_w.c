/* FF4 source-port — interpreted module for func_8016A4E4.
 * Ground truth: src/func_8016A4E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016A4E4(void)
{
    sep();
    tail_cur();
    open_row(0xA);
La51c:
    for (;;) {
        txt_cell(0x2703);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        func_8016A390();
        func_8016A390();
        row_prep(0x20);
        cell_sink8_9(0x2703);
        cell_stamp8_9(0x2B03);
        cell_sink8_9(0x2705);
        cell_stamp8_9(0x2B05);
        cell_sink8_9(0x2707);
        cell_stamp8_9(0x2B07);
        cell_sink8_9(0x2709);
        cell_stamp8_9(0x2B09);
        func_800F9140(0x2F03);
        func_800F9140(0x2F05);
        func_800F9140(0x2F07);
        func_800F9140(0x2F08);
        sep();
        row_prep_close();
        row_open();
        row_page_cur();
        sep_a();
        cell_poke0(cell_state(1));
        sep();
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x42);
            cell_step();
            step2();
            poll_t(8);
            if (io_just() != 0)
                break;
        }
        row_close();
        latch(0x30);
        cell_put(4);
        for (;;) {
            func_80169C7C();
            row_arm2(cell_state(0x47));
            row_sel_cell2_cur();
            row_sel2(cell_state(0x46));
            cell_flags_repack2();
            row_sel2(cell_state(0x45));
            cell_flags_repack2();
            row_sel2(cell_state(0x44));
            cell_flags_repack2();
            row_sel2(cell_state(0x43));
            cell_flags_repack2();
            row_sel2(cell_state(0x42));
            cell_flags_repack2();
            if (func_800F7AC8(0x101) != 0)
                goto La718;
            func_80169DE8();
        La718:
            poll_pair(4);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_open();
        row_page(4);
        cell_put_cur();
        row_page(1);
        sep_a();
        cell_poke0(cell_state(4));
        row_read(0x1F);
        cell_push_c8();
        if (gate(2) != 0)
            goto La944;
        row_close();
        cell_put(4);
        for (;;) {
            cell_word_half(cell_state_of());
            cell_flags_repack();
            cell_word_half_s(cell_state_of());
            func_800F7D0C();
            cell_word_half_s(cell_state_of());
            func_800F7D0C();
            cell_word_half_s(cell_state_of());
            func_800F7D0C();
            cell_word_half_s(cell_state_of());
            func_800F7D0C();
            cell_word_half_s(cell_state_of());
            func_800F7D0C();
            cell_word_half_s(cell_state_of());
            func_800F7D0C();
            cell_word_half_s(cell_state_of());
            func_800F7D0C();
            poll_pair(4);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_open();
    La944:
        row_page_cur();
        sep_a();
        row_open_w(0x40);
        cell_put_cur();
        key_page(0xA);
        row_page(0xA);
        row_read(7);
        if (sel(0x202) == 0) {
            row_page(1);
            sep_a();
            row_open_w(8);
            cell_put(1);
        }
        row_page(0xA);
        row_read(0x3F);
        if (sel(0x202) == 0)
            open_row(1);
        row_close();
        row_prep(0x20);
        sep_a();
        cell_pos_fwd(8);
        sep();
        row_prep_close();
        poll_t(0x400);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
