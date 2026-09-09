/* FF4 source-port — interpreted module for func_801193F8.
 * Ground truth: src/func_801193F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801193F8(void)
{
    /* battle store/equip screen: 0x8F8-0x8FA texts, 0x1A/0xB2/0x30/0x31/
       0x32 windows; 801082C8/80107C98(row family)/801196F8/80174CE4/
       801196B0 plus the 80105AF0/80105DB4/80105D2C/80107F3C/80109A28
       sub-screens; L119548 renders the 0x16A0/0x16A1/0x16A2 stat rows. */
    battle_tick_text();
    row_sel_cell_cur();
    txt_draw(0x8F8);
    txt_draw(0x8F9);
    cell_clear_bank(0x8FA);
    latch(0x1A);
    cell_put(0xB2);
    func_801082C8();
    func_80107C98();
    func_801196F8();
    func_80174CE4();
    func_801196B0();
    func_80105AF0();
    func_80105DB4();
    func_80105D2C();
    func_80107F3C();
    wnd_fx_7d_b();
    func_80109A28();
    row_page(0xDB);
    if (gate(2) != 0)
        goto L119548;
    latch(0x1B);
    cell_put(0xB2);
    func_801082C8();
    func_80107C98();
    func_80107F3C();
    func_80109A28();
    goto L119650;
L119548:
    func_801196F8();
    page(0xB3);
    txt_cell(0x9D5);
    row_sel_cell_cur();
    txt_set(0x16A0);
    sep_b();
    cell_pos_back();
    cell_put(0x30);
    txt_set(0x16A1);
    cell_pos_back();
    cell_put(0x31);
    txt_set(0x16A2);
    cell_pos_back();
    cell_put(0x32);
    if (io_go() != 0)
        goto L119668;
    latch(0x19);
    cell_put(0xB2);
    func_801082C8();
    func_80107C98();
    func_80107F3C();
    func_80109A28();
L119650:
    func_801175C4();
    battle_wndfx_run();
    return;
L119668:
    row_page(0x30);
    txt_draw(0x16A0);
    row_page(0x31);
    txt_draw(0x16A1);
    row_page(0x32);
    txt_draw(0x16A2);
    battle_wndfx_run();
    return;
}
