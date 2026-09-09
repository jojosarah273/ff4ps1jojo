/* FF4 source-port — interpreted module for func_80105AF0.
 * Ground truth: src/func_80105AF0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80105AF0(void)
{
    /* shop list render: 2115/4300/4304 header + 4 item rows (2882/28B2/
       28E2/2912 desc, 4302/4305 cells, 420B cursor); loop L105C48 polls
       634/70 key read with 6B68(0x634)/5574(0x80) gates. */
    wnd_fx_7d();
    latch(0x80);
    txt_draw(0x2115);
    wnd_fx_tags();
    latch(1);
    txt_draw(0x4300);
    latch(0x14);
    txt_draw(0x4304);
    wnd_open_cur();
    label(0x4302);
    wnd_open(0x28A2);
    label(0x2116);
    wnd_open(0x18);
    label(0x4305);
    catalog_dispatch_0();
    wnd_open(0x28B2);
    label(0x2116);
    cell_clear_bank(0x420B);
    wnd_open_cur();
    label(0x4302);
    wnd_open(0x18);
    label(0x4305);
    catalog_dispatch_0();
    wnd_open(0x28E2);
    label(0x2116);
    cell_clear_bank(0x420B);
    wnd_open_cur();
    label(0x4302);
    wnd_open(0x18);
    label(0x4305);
    catalog_dispatch_0();
    wnd_open(0x2912);
    label(0x2116);
    cell_clear_bank(0x420B);
    wnd_open_cur();
    label(0x4302);
    wnd_open(0x18);
    label(0x4305);
    catalog_dispatch_0();
    open_row(0xA);
    wnd_open_cur();
L105c48:
    for (;;) {
        txt_cell(0x634);
        io_poll(0x80);
        if (io_just() == 0)
            goto L105CA8;
        poll_t(7);
        if (io_just() != 0)
            goto L105CA8;
        row_page(0xA);
        if (gate(0x202) != 0)
            goto L105CB0;
        latch(0xFF);
        goto L105CBC;
    L105CA8:
        key_page(0xA);
    L105CB0:
        txt_cell(0x634);
    L105CBC:
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
