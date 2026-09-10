/* FF4 source-port — interpreted module for func_800FDBBC.
 * Ground truth: src/func_800FDBBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
uint32_t shop_rows_dbbc(void)
{
    /* shop title-screen: 0x7C window with 800FDA9C/8018226C rows and
       the 0x2115/0x2116/0x420B/0x4300-0x4305 register rows (801820F4
       commit); 0x2000 gate. */
    func_800F654C(0x80);
    txt_draw(0x2115);
    func_800F6630(0x7C);
    func_800F7864();
    row_read(0xF);
    cell_cur_save54();
    cell_cur_save54();
    func_800FDA9C();
    func_800F6630(0x7C);
    func_800F7864();
    row_read(0xF);
    cell_cur_save54();
    sep_a();
    func_800F4008(0x40);
    cell_cur_save54();
    func_800FDA9C();
    battle_anim_v0_gate_tree_with_spin(0x2000);
    func_800F654C(0x80);
    txt_draw(0x2115);
    wnd_open(0x1E80);
    func_800F8D00(0x2116);
    func_800F8F74(0x420B);
    func_800F8F74(0x4300);
    func_800F654C(0x19);
    txt_draw(0x4301);
    wnd_open(0x5900);
    func_800F8D00(0x4302);
    func_800F654C(0x7F);
    txt_draw(0x4304);
    wnd_open(0x100);
    func_800F8D00(0x4305);
    catalog_dispatch_0();
    battle_anim_row_v0_spin_loops_l182();
    return;
    return 0;
}
