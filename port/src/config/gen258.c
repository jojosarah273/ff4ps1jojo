/* FF4 source-port — interpreted module for func_80126990.
 * Ground truth: src/func_80126990.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126990(void)
{
    /* equip window cells: 0xD2/0xBE gates with the 0x59/0xB9/0xBA rows
       (3F38(3C3C) / 7F48(3C3C) value cells), 0xC0/0xBF/0xBB/0xBC bottom
       row, and the 80124704 commit; early exit when 6434(0x202)==0. */
    row_page(0xD2);
    if (gate(0x202) == 0)
        return;
    row_page(0xBE);
    if (gate_cur() != 0)
        goto L126A28;
    row_read(0x7F);
    cell_put(0x59);
    sep_a();
    row_page(0xBD);
    cell_poke0(cell_state(0xB9));
    cell_put(0xB9);
    row_page(0xBA);
    cell_poke0(cell_state(0x59));
    cell_put(0xBA);
    goto L126A70;
L126A28:
    row_page(0xB9);
    sep_b();
    func_800F7F48(cell_state(0xBD));
    cell_put(0xB9);
    row_page(0xBA);
    func_800F7F48(cell_state(0xBE));
    cell_put(0xBA);
L126A70:
    row_page(0xC0);
    if (gate_cur() != 0)
        goto L126AE8;
    row_read(0x7F);
    cell_put(0x59);
    sep_a();
    row_page(0xBF);
    cell_poke0(cell_state(0xBB));
    cell_put(0xBB);
    row_page(0xBC);
    cell_poke0(cell_state(0x59));
    cell_put(0xBC);
    goto L126B30;
L126AE8:
    row_page(0xBB);
    sep_b();
    func_800F7F48(cell_state(0xBF));
    cell_put(0xBB);
    row_page(0xBC);
    func_800F7F48(cell_state(0xC0));
    cell_put(0xBC);
L126B30:
    row_page(0xBC);
    stat_sync();
    row_page(0xBA);
    row_page(0xD3);
    func_80124704();
    poll_pair(0xD2);
    return;
}
