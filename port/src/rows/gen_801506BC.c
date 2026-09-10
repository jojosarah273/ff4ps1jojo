/* FF4 source-port — interpreted module for fn_1x506bc.
 * Ground truth: src/fn_1x506bc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x506bc(void)
{
    s16 f[8];
    f[0] = 0x100;
    f[1] = 0;
    f[2] = 0x100;
    f[3] = 0x40;
    cb_slot2(f, 0x80070000);
    f[1] = 0x40;
    f[3] = 0xC0;
    cb_slot2(f, 0x80088000);
    cb_slot15(0);
    f[0] = 0x300;
    f[1] = 0x100;
    f[2] = 0x100;
    f[3] = 0x37;
    func_801946A0(f, 0x80070000);
    f[1] = 0x140;
    f[3] = 0xC0;
    func_801946A0(f, 0x80088000);
    cb_slot15(0);
    f[0] = 0x100;
    f[1] = 0;
    f[2] = 0x100;
    f[3] = 0x100;
    battle_anim_gate_a(f, 0x300, 0x100);
    cb_slot15(0);
    f[1] = 0;
    f[3] = 0x80;
    cb_slot2(f, 0x80058000);
    cb_slot15(0);
    f[1] = 0x180;
    f[3] = 0x80;
    func_801946A0(f, 0x80058000);
    cb_slot15(0);
    f[0] = 0x100;
    f[1] = 0;
    f[2] = 0x100;
    f[3] = 0x100;
    battle_anim_gate_a(f, 0x100, 0x180);
    cb_slot15(0);
    f[1] = 0;
    f[3] = 0x100;
    fn_1x94518(f, 0, 0, 0);
    cb_slot15(0);
}
