/* FF4 source-port — interpreted module for func_800FFE0C.
 * Ground truth: src/func_800FFE0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FFE0C(void)
{
    /* shop gates: 0xB1/0x5A/0x5C/0x2/0x54/0xEA windows with
       4120/6434 gates; 800FFEFC/8010A964 rows close. */
    row_page(0xB1);
    if (gate(0x202) != 0)
        return;
    row_page(0x5A);
    row_read(0xF);
    if (sel(0x202) != 0)
        return;
    row_page(0x5C);
    row_read(0xF);
    if (sel(0x202) != 0)
        return;
    row_page(2);
    row_read(0x80);
    if (sel(0x202) == 0)
        return;
    row_page(0x54);
    if (gate(2) == 0)
        return;
    key_page(0x54);
    row_page(0xEA);
    if (gate(0x202) != 0)
        goto L8FFECC;
    key_page(0xEA);
L8FFECC:
    func_800FFEFC();
    func_8010A964();
    return;
}
