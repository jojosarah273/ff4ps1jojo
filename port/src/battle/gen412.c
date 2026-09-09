/* FF4 source-port — interpreted module for func_8010E98C.
 * Ground truth: src/func_8010E98C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010E98C(void)
{
    /* battle row: 0xAD/0x20 windows, 0x420C text, 8010E0D0/8017559C/
       8010E128/8011EA5C rows; 3 loops (L10E9B4 menu, L10EA2C confirm,
       L10EA7C second menu). */
    func_8010E0D0();
    latch(0x20);
    cell_put(0xAD);
    func_800FE870();
L10E9B4:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        key_page(0xAD);
        func_800FE5D4();
        func_800FE6E4();
        row_page(0xAD);
        func_800F61E8();
        func_8017559C();
        row_page(0xAD);
        io_poll(0x78);
        if (io_just() == 0)
            continue;
        break;
    }
L10EA2C:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800FE6E4();
        row_page(2);
        if (gate(0x202) != 0)
            goto L10EA74;
        row_page(3);
        if (gate(2) != 0)
            continue;
    }
L10EA74:
    func_8010E128();
    goto L10EA7C;
L10EA7C:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        poll_pair(0xAD);
        func_800FE5D4();
        func_800FE6E4();
        row_page(0xAD);
        func_8017559C();
        row_page(0xAD);
        io_poll(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(0x10);
    cell_put(0xAD);
    func_8011EA5C();
    return;
}
