/* FF4 source-port — interpreted module for func_8015FBFC.
 * Ground truth: src/func_8015FBFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F4248(u32 v);
extern void func_800F654C(u32 v);
extern void func_800F6564(u32 v);
extern void func_800F8188(u32 v);
extern void func_800F824C(u32 v);
void func_8015FBFC(void) { txt_set(0x2704); cell_put(0xA9); row_read(0xBB); txt_draw(0x2704); txt_set(0x2706); row_read(0xC3); txt_draw(0x2706); latch(0x10); txt_draw(0x273B); }
