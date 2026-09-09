/* FF4 source-port — interpreted module for func_8011DA88.
 * Ground truth: src/func_8011DA88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011DA88(void)
{
    /* shop sale rows: 0xAB/0x99/0x95/0x9B/0x9D/0x9F windows, 0x2115/
       0x4300/0x2116/0x4302/0x4305/0xADB/0xB1B texts; 4120(0x202)/
       6434(0x202) gates; 7170(2) pick. */
    row_page(0xAB);
    row_read(1);
    if (sel(0x202) == 0)
        goto L11DAC0;
    latch(0x80);
    goto L11DAE0;
L11DAC0:
    row_page(0xAB);
    if (gate(0x202) == 0)
        goto L11DBE0;
    latch(0x81);
L11DAE0:
    txt_draw(0x2115);
    wnd_fx_tags();
    latch(1);
    txt_draw(0x4300);
    page(0x99);
    label(0x2116);
    wnd_open(0xADB);
    label(0x4302);
    page(0x95);
    label(0x4305);
    func_800FCCBC();
    page(0x9B);
    label(0x2116);
    page(0x97);
    if (cell_flags_pack(2) != 0)
        goto L11DB70;
    label(0x4305);
    func_800FCCBC();
L11DB70:
    page(0x9D);
    label(0x2116);
    wnd_open(0xB1B);
    label(0x4302);
    page(0x95);
    label(0x4305);
    func_800FCCBC();
    page(0x9F);
    label(0x2116);
    page(0x97);
    if (cell_flags_pack(2) != 0)
        return;
    label(0x4305);
    func_800FCCBC();
    return;
L11DBE0:
    return;
}
