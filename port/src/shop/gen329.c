/* FF4 source-port — interpreted module for func_8016C858.
 * Ground truth: src/func_8016C858.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016C858(void)
{
    /* battle terrain/affinity screen: 0x2101/0x2102/0x2100 title rows,
       0x2005/0x2001/0x2003 gates, 0x50/0x4A windows; 8016C280/8016C624
       row draws, 8016C0A8/8016C128 area cells, 8016AACC/8016AA84 and
       8016BE1C/8016B470 commits. */
    cell_clear_bank(0x2101);
    cell_clear_bank(0x2102);
    open_row(0x50);
    txt_set(0x2005);
    row_read(1);
    txt_draw(0x2100);
    txt_set(0x2001);
    row_read(1);
    if (sel(0x202) != 0)
        goto L16C8C0;
    func_8016C280();
    page_paint2(0x2101);
L16C8C0:
    txt_set(0x2003);
    row_read(1);
    if (sel(0x202) != 0)
        goto L16C8F0;
    func_8016C624();
    page_paint2(0x2102);
L16C8F0:
    func_8016BFE8();
    txt_set(0x2101);
    if (gate(0x202) != 0)
        goto L16C918;
    func_8016C280();
L16C918:
    txt_set(0x2102);
    if (gate(0x202) != 0)
        goto L16C938;
    func_8016C624();
L16C938:
    txt_set(0x2007);
    row_read(1);
    if (sel(2) != 0)
        goto L16C970;
    func_8016C0A8();
    func_8016C128();
    goto L16C980;
L16C970:
    func_8016C128();
    func_8016C0A8();
L16C980:
    txt_set(0x2100);
    if (gate(0x202) != 0)
        goto L16C9A8;
    func_8016AACC();
    goto L16C9B0;
L16C9A8:
    func_8016AA84();
L16C9B0:
    func_8016B470();
    wnd_open_cur();
    draw_pad_cur();
    func_8016BE1C();
    wnd_open(2);
    draw_pad_cur();
    func_8016BE1C();
    txt_set(0x2100);
    cell_push_c8();
    cell_put(0x28);
    row_page(0x4A);
    func_800F4370(0x28);
    if (sel(0x202) != 0)
        return;
    wnd_open(4);
    draw_pad_cur();
    func_8016BE1C();
    wnd_open(6);
    draw_pad_cur();
    func_8016BE1C();
    wnd_open(8);
    draw_pad_cur();
    func_8016BE1C();
    return;
}
