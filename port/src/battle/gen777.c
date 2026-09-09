/* FF4 source-port — interpreted module for func_80110474.
 * Ground truth: src/func_80110474.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_8011416C(void);
extern void func_80173780(void);



extern void func_801105A4(void);
extern void func_8010FAC4(void);
extern void func_80115488(void);
void func_80110474(void) {
    func_8011416C();
    func_80173780();
    wnd_open(0);
    latch(0x60);
    cell_put(0xC);
    latch(0x50);
    cell_put(0xE);
    func_801105A4();
    func_8010FAC4();
    latch(0x18);
    cell_put(0x91);
    latch(0x78);
    cell_put(0x8F);
    latch(0x60);
    cell_put(0x92);
    func_80115488();;
}
