/* FF4 source-port — interpreted module for func_8012BAF8.
 * Ground truth: src/func_8012BAF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_8012BA14(void);

extern void func_8012BE34(void);
extern void func_8012B0B0(void);
extern void func_80126878(void);

void func_8012BAF8(void) {
    func_8012BA14();
    battle_row_45b();
    latch(0x30);
    cell_put(0x3F);
    func_8012BE34();
    latch(0x20);
    cell_put(0x3F);
    func_8012B0B0();
    func_80126878();
    config_row_f320();
    battle_state_dc400();;
}
