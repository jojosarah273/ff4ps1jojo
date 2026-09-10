/* FF4 source-port — interpreted module for fn_1x1dbf0.
 * Ground truth: src/fn_1x1dbf0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1dbf0(void)
{
    row_page(0xAB);
    row_read(1);
    if (sel(0x202) == 0)
        goto LDD18;
    cell_clear_bank(0x2115);
    wnd_fx_tags();
    cell_clear_bank(0x4300);
    page(0x99);
    label(0x2116);
    wnd_open(0xADB);
    label(0x4302);
    page(0x95);
    label(0x4305);
    catalog_dispatch_0();
    page(0x9B);
    label(0x2116);
    page(0x97);
    if (cell_flags_pack(2) != 0)
        goto LDCA0;
    label(0x4305);
    catalog_dispatch_0();
LDCA0:
    page(0x9D);
    label(0x2116);
    wnd_open(0xB5B);
    label(0x4302);
    page(0x95);
    label(0x4305);
    catalog_dispatch_0();
    page(0x9F);
    label(0x2116);
    page(0x97);
    if (cell_flags_pack(2) != 0)
        return;
    label(0x4305);
    catalog_dispatch_0();
    return;
LDD18:
    row_page(0xAB);
    if (gate(0x202) == 0)
        return;
    latch(3);
    txt_draw(0x2115);
    wnd_fx_tags();
    cell_clear_bank(0x4300);
    page(0x99);
    label(0x2116);
    wnd_open(0xADB);
    label(0x4302);
    page(0x95);
    label(0x4305);
    catalog_dispatch_0();
    page(0x9B);
    label(0x2116);
    page(0x97);
    if (cell_flags_pack(2) != 0)
        goto LDDC0;
    label(0x4305);
    catalog_dispatch_0();
LDDC0:
    page(0x9D);
    label(0x2116);
    wnd_open(0xB5B);
    label(0x4302);
    page(0x95);
    label(0x4305);
    catalog_dispatch_0();
    page(0x9F);
    label(0x2116);
    page(0x97);
    if (cell_flags_pack(2) != 0)
        return;
    label(0x4305);
    catalog_dispatch_0();
    return;
}
