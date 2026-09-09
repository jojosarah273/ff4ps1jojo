/* FF4 source-port — interpreted module for func_8011E16C.
 * Ground truth: src/func_8011E16C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011E16C(void)
{
    /* battle verdict (twin of 8011E318): 3D/3E/40 rows with 885C
       fills, 6434(2) exit gate; loops L11E1B0 and L11E214. */
    page(0x3D);
    func_800F6C68();
    cell_put(0x3D);
    func_800F6C68();
    cell_put(0x3E);
    page(0x3D);
L11E1B0:
    for (;;) {
        func_800F6C68();
        if (gate_cur() != 0)
            goto L11E29C;
        row_read(0x7F);
        func_800F9200();
        func_800F6C68();
        step2();
        row_close2();
        page(0x40);
    L11e214:
        for (;;) {
            func_800F885C();
            cell_step();
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        tail(0x40);
        if (gate(2) != 0)
            goto L11E308;
        page(0x3D);
        tail(0x3D);
    }
L11E29C:
    page(0x40);
    func_800F885C();
    cell_step();
    tail(0x40);
    if (gate(2) != 0)
        goto L11E308;
    page(0x3D);
    cell_step();
    tail(0x3D);
    goto L11E1B0;
L11E308:
    return;
}
