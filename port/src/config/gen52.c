/* FF4 source-port — interpreted module for func_8015DCA4.
 * Ground truth: src/func_8015DCA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015DCA4(void)
{
    sep();
    tail(0x8E);
LDCD4:
    for (;;) {
        page(0x8E);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            goto LDFA8;
        txt_cell(0x3560);
        if (gate(2) == 0)
            goto LDFA8;
        options_rows_run();
        page(0xA6);
        txt_cell(0x2003);
        row_read(0xC0);
        if (sel(0x202) != 0)
            goto LDD68;
        txt_cell(0x2004);
        row_read(0x30);
        cell_flags_tick2();
    LDD68:
        if (io_just() == 0)
            goto LDFA8;
        txt_cell(0x2005);
        row_read(0x40);
        if (sel(2) == 0)
            goto LDFA8;
        txt_cell(0x2004);
        row_read(0xC);
        if (sel(2) != 0)
            goto LDE30;
        txt_cell(0x2005);
        row_read(0xFB);
        cell_draw(0x2005);
        txt_cell(0x2004);
        row_read(4);
        if (sel(2) != 0)
            goto LDE00;
        func_8015E464();
        goto LDF48;
    LDE00:
        txt_cell(0x2004);
        row_read(8);
        if (sel(2) != 0)
            goto LDE30;
        func_8015DFE0();
        goto LDF48;
    LDE30:
        txt_cell(0x2006);
        row_read(1);
        if (sel(2) != 0)
            goto LDFA8;
        txt_cell(0x2000);
        row_read(0x1F);
        io_poll(5);
        if (io_just() == 0)
            goto LDFA8;
        txt_set(0x3582);
        if (gate(0x202) != 0)
            goto LDFA8;
        latch(3);
        func_8015310C();
        page_open(0x3598);
        txt_cell(0x2A06);
        row_read(8);
        if (sel(0x202) != 0)
            goto LDFA8;
        page(0xA6);
        txt_cell(0x2006);
        if (gate(0x8080) != 0)
            goto LDF18;
        func_8015E758();
        poll_spin();
        if (poll_go(0x202) != 0)
            goto LDFA8;
        func_8015E6A4();
        goto LDF60;
    LDF18:
        func_8015E758();
        poll_spin();
        if (poll_go(2) != 0)
            goto LDFA8;
        func_8015E66C();
        goto LDF60;
    LDF48:
        open_row(0xD6);
        row_page(0x8E);
        options_value_table();
    LDF60:
        latch(3);
        option_row_d4();
        latch(8);
        cell_draw(0x2A06);
        page(0x8E);
        cell_dispatch(cell_state_of());
    LDFA8:
        key_page(0x8E);
        row_page(0x8E);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
