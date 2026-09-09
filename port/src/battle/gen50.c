/* FF4 source-port — interpreted module for func_8011DBF0.
 * Ground truth: src/func_8011DBF0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011DBF0(void)
{
    row_page(0xAB);
    row_read(1);
    if (sel(0x202) == 0)
        goto LDD18;
    func_800F8F74(0x2115);
    func_800FCC84();
    func_800F8F74(0x4300);
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
    if (func_800F7170(2) != 0)
        goto LDCA0;
    label(0x4305);
    func_800FCCBC();
LDCA0:
    page(0x9D);
    label(0x2116);
    wnd_open(0xB5B);
    label(0x4302);
    page(0x95);
    label(0x4305);
    func_800FCCBC();
    page(0x9F);
    label(0x2116);
    page(0x97);
    if (func_800F7170(2) != 0)
        return;
    label(0x4305);
    func_800FCCBC();
    return;
LDD18:
    row_page(0xAB);
    if (gate(0x202) == 0)
        return;
    latch(3);
    txt_draw(0x2115);
    func_800FCC84();
    func_800F8F74(0x4300);
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
    if (func_800F7170(2) != 0)
        goto LDDC0;
    label(0x4305);
    func_800FCCBC();
LDDC0:
    page(0x9D);
    label(0x2116);
    wnd_open(0xB5B);
    label(0x4302);
    page(0x95);
    label(0x4305);
    func_800FCCBC();
    page(0x9F);
    label(0x2116);
    page(0x97);
    if (func_800F7170(2) != 0)
        return;
    label(0x4305);
    func_800FCCBC();
    return;
}
