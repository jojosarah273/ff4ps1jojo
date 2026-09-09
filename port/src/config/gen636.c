/* FF4 source-port — interpreted module for func_8015D0B8.
 * Ground truth: src/func_8015D0B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015D0B8(void)
{
    /* options seeds: 0x1822/0x38FC/0x3975 texts, 0x32ED-0x32F0 cells,
       80152908/80152CDC/8015A284/80155778/801583FC rows; 6434
       gates. */
    txt_set(0x1822);
    func_800F6D70(0x38FC);
    if (gate(2) != 0)
        return;
    txt_set(0x1822);
    txt_draw(0x3975);
    func_80152908();
    func_800F6D70(0x38FC);
    if (gate_cur() != 0)
        goto L15D160;
    cell_step();
    cell_step();
    cell_step();
    cell_step();
L15D160:
    sep();
    func_800F8960(0x38FC);
    page_paint(0x32DB);
    page_paint(0x32DC);
    latch(0x80);
    cell_draw(0x32DA);
    txt_set(0x3975);
    func_80152CDC();
    func_8015A284();
    func_80155778();
    func_801583FC();
    return;
}
