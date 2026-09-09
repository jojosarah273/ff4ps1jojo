/* FF4 source-port — interpreted module for func_8014C13C.
 * Ground truth: src/func_8014C13C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014C13C(void)
{
    txt_set(0x34C5);
    if (gate(0x202) == 0)
        return;
    func_8014D680();
    func_80148CAC();
    func_8014046C();
    wnd_open(5);
    latch(0x27);
    func_800760D0();
    func_80148E08();
    sep();
    label(0xF111);
    label(0xF113);
    func_80148E80();
    latch(0x60);
    func_800F81E8(0x2107);
    latch(0x58);
    func_800F81E8(0x2108);
    latch(3);
    txt_draw(0xF1B5);
    func_800F61E8();
    txt_draw(0xF1B3);
    txt_set(0xED4E);
    row_read(0xBF);
    txt_draw(0xED4E);
    sep();
    func_80071C2C();
    func_80091AB8();
L23c:
    for (;;) {
        func_8007259C();
        func_8014C4BC();
        txt_set(0xF111);
        sep_a();
        row_open_w(4);
        txt_draw(0xF111);
        txt_draw(0xF133);
        txt_set(0xF113);
        sep_a();
        row_open_w(8);
        txt_draw(0xF113);
        txt_draw(0xF134);
        draw_pad_cur();
    L2a4:
        for (;;) {
            wnd_open_cur();
            func_80148F60();
            func_800F8960(0x7614);
            func_800F8960(0x7694);
            func_800F8960(0x7714);
            func_800F8960(0x7794);
            func_800F8960(0x7814);
            wnd_open(1);
            func_80148F60();
            func_800F9200();
            func_800F9200();
            func_800F8960(0x7612);
            func_800F8960(0x7692);
            func_800F8960(0x7712);
            func_800F8960(0x7792);
            func_800F8960(0x7812);
            row_close2();
            if (gate(0x80) != 0)
                goto L34c;
            sep();
            goto L354;
        L34c:
            latch(1);
        L354:
            func_800F8960(0x7613);
            func_800F8960(0x7693);
            func_800F8960(0x7713);
            func_800F8960(0x7793);
            func_800F8960(0x7813);
            row_close2();
            func_800F8960(0x7992);
            func_800F8960(0x7A12);
            func_800F8960(0x7A92);
            func_800F8960(0x7B12);
            poll_t(0x30);
            if (io_go() != 0)
                goto L3c4;
            func_800F8960(0x7B92);
        L3c4:
            txt_set(0xF133);
            sep_a();
            row_open_w(8);
            txt_draw(0xF133);
            txt_set(0xF134);
            sep_a();
            row_open_w(8);
            txt_draw(0xF134);
            poll_t(0x80);
            if (io_just() == 0)
                goto L2a4;
            txt_set(0xF112);
            txt_draw(0xF1B4);
            txt_set(0xF111);
            txt_draw(0xF133);
            txt_set(0xF113);
            txt_draw(0xF134);
            page_paint2(0xF112);
            txt_set(0xF112);
            io_poll(0x64);
            if (io_just() == 0)
                goto L23c;
            page_paint2(0xF425);
            return;
        }
    }
}
