/* FF4 source-port — interpreted module for func_80126E08.
 * Ground truth: src/func_80126E08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126E08(void)
{
    /* ability/status screen. s0 = cursor; v0/s0 regcmp gates route the
       cursor-row recompute (L26FB4 vs L27048); the v1/v0 latch at L2712C
       loops back to L26F74 while unequal. */
    latch(0x15);
    txt_draw(0x1E01);
    latch(1);
    txt_draw(0x1E00);
    func_80169128();
    func_80123D3C();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
L26ef0:
    func_80194700();
    func_80194394();
    latch(0x30);
    cell_put(0xC1);
    func_80128480();
    cell_clear_bank(0x1B47);
    goto L26F74;
L27080:
    txt_set(0x1A3C);
    if (gate(0x202) != 0)
        goto L270E8;
    func_80126610();
    func_80128C4C();
    func_8013AAA8();
    row_prep(0x20);
    row_sync2(0x1BE4);
    cell_pull9_hi(0x17FE);
    row_prep_close();
    cell_clear_bank(0x17FB);
    func_80128264();
    return;
L26F74:
    for (;;) {
        func_80123FB4();
        func_801241B8();
        func_8011F6A4();
        txt_set(0x1A3C);
        func_80127668();
        /* v0/s0 gate -> L26FB4 (or L26F74 tail) */
        func_8013836C(1);
    L26FB4:
        func_80124298();
        func_801280D4();
        func_80127408();
        func_801210AC();
        draw_pad_cur();
        battle_rows_29();
        func_80126330();
        /* v0/s0 gate -> L27048 / L270E8 */
        func_80128750();
        func_8016EA7C();
        goto L270E8;
    L27048:
        func_80128598();
        func_80127168();
        /* v0/s0 gate -> return */
        break;
    L270E8:
        func_80127808();
        if (io_go() != 0) {
            func_8013B04C();
            func_8013AAA8();
            func_80187C20();
            func_80126610();
            return;
        }
        func_80187C20();
        func_80126610();
        /* v1/v0 latch -> L26F74 while unequal, else return */
        continue;
    }
    return;
}
