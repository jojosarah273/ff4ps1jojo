/* FF4 source-port — interpreted module for shop_buy_list_xe2_window_gate_x211.
 * Ground truth: src/shop_buy_list_xe2_window_gate_x211.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_buy_list_xe2_window_gate_x211(void)
{
    /* shop buy-list: 0xE2 window gate, 0x2115 title, then 8 name/price
       rows (7210 A17/A27 + 7210() pairs with A19/A29 texts). */
    row_page(0xE2);
    if (gate(0x202) == 0)
        return;
    open_row(0xE2);
    latch(0x80);
    txt_draw(0x2115);
    page_open(0xA17);
    page_open(0xA27);
    page_open_cur();
    page_open(0xA19);
    page_open_cur();
    page_open(0xA29);
    page_open_cur();
    page_open(0xA1B);
    page_open_cur();
    page_open(0xA2B);
    page_open_cur();
    page_open(0xA1D);
    page_open_cur();
    page_open(0xA2D);
    page_open_cur();
    page_open(0xA1F);
    page_open_cur();
    page_open(0xA2F);
    page_open_cur();
    page_open(0xA21);
    page_open_cur();
    page_open(0xA31);
    page_open_cur();
    page_open(0xA23);
    page_open_cur();
    page_open(0xA33);
    page_open_cur();
    page_open(0xA25);
    page_open_cur();
    page_open(0xA35);
    page_open_cur();
    page_open(0xA27);
    page_open_cur();
    page_open(0xA37);
    page_open_cur();
    return;
}
