/* FF4 source-port — interpreted module for func_8010E338.
 * Ground truth: src/func_8010E338.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800FC548(void);
extern void func_80176060(void);
extern void func_800F5448(void);
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
void func_8010E338(void) {
    func_800FC548();
    func_80176060();
    func_800F5448();
    latch(0);
    txt_draw(0x2100);
    latch(0x81);
    txt_draw(0x4200);;
}
