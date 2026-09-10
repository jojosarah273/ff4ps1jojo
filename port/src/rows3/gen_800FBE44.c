/* FF4 source-port — interpreted module for func_800FBE44.
 * Ground truth: src/func_800FBE44.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
uint32_t shop_rows_47(void)
{
    /* shop rows: 0x47/0x45/0x60/0x61 windows, 0x2800 texts, 801766B0
       rows + 8017F8F8 preps; ends 80194700/80194394. */
    wnd_open_cur();
    func_800F8D6C(0x47);
    wnd_open(0x2800);
    func_800F8D6C(0x45);
    func_800F654C(8);
    cell_put(0x60);
    wnd_open_cur();
    func_800F8D6C(0x61);
    fn_1x766b0();
    wnd_open(0x4000);
    func_800F8D6C(0x47);
    fn_1x766b0();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_anim_gate_a();
    func_80194394();
    return;
    return 0;
}
