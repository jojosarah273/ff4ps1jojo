/* FF4 source-port — interpreted module for func_80127808.
 * Ground truth: src/func_80127808.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80127808(void)
{
    func_801360AC();
    func_80126610();
    func_801266A0();
    func_80123FB4();
    func_80126330();
    func_801241B8();
    func_80120E2C();
    func_80125A64();
    wnd_open(0x1BE4);
    if (func_800F56AC(cell_state(0x17FE)) == 0)
        goto L78a4;
    func_8012281C();
    goto L78f4;
L78a4:
    ;
L78b8:
    func_80120E2C();
    draw_pad_cur();
    func_8011EF30();
    wnd_open(0x394);
    draw_pad_cur();
    func_8011F8D4();
L78f4:
    func_8011F6A4();
    func_8017F8F8();
    func_80120F1C();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011EF30();
    txt_set(0x1B47);
    if (gate(2) != 0)
        goto L7980;
    draw_pad_cur();
    func_8011FBA4();
    goto L7998;
L7980:
    draw_pad_cur();
    func_8011FBA4();
L7998:
    draw_pad_cur();
    func_8011FBA4();
    txt_set(0x16A4);
    page_open(0x16A5);
    draw_pad(0xCB2E);
    func_80127538();
    draw_pad_cur();
    func_8011FBA4();
    func_80120FBC();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    wnd_open(0x676);
    func_8011F8D4();
    draw_pad(0x62C);
    txt_set(0x16A2);
    page_open(0x16A0);
    func_80124D08();
    func_80126330();
    func_8012214C();
    func_8011EF0C();
    /* s2 branch */
    txt_set(0x1B47);
    if (gate(2) != 0)
        goto L7a8c;
    /* bnez -> L7a8c */
    func_80127F2C();
L7a8c:
    func_80126590();
    func_800F8F74(0x1B46);
    /* v1 branch */
    latch(1);
    txt_draw(0x1B46);
L7abc:
    txt_set(0x1B46);
    if (gate(2) != 0)
        goto L7ae4;
    latch(0x40);
    goto L7aec;
L7ae4:
    latch(0x30);
L7aec:
    cell_put(0x46);
    latch(0xB8);
    cell_put(0x45);
    func_8011F6D4();
    func_8011F684();
    func_8011F884();
    /* beqz -> L7b4c */
    func_800F8F74(0x1B46);
    sep_b();
L7b3c:
    func_80136148();
    return;
L7b4c:
    /* v1 branch */
    func_80135BE4();
    /* blez a0 -> L7b98 */
    func_80136014();
    return;
L7b98:
    row_page(1);
    row_read(0xC);
    if (sel(2) != 0)
        goto L7bd8;
    txt_set(0x1B46);
    func_800F61E8();
    row_read(1);
    txt_draw(0x1B46);
L7bd8:
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto L7c28;
    sep_b();
    txt_set(0x1B46);
    if (gate(2) != 0)
        goto L7b3c;
    sep_a();
    goto L7b3c;
L7c28:
    row_page(1);
    row_read(0x80);
    if (sel(2) != 0)
        goto L7abc;
    sep_a();
    func_80136148();
    return;
}
