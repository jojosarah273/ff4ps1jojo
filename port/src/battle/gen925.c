/* FF4 source-port — interpreted module for func_80148BE0.
 * Ground truth: src/func_80148BE0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F71DC(u32 v0);
extern void func_800F6B68(u32 v0);
extern void func_800F8768(u32 v0);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_80148BE0(void) {
    wnd_open(0x20);
    do {
        txt_cell(0x33F);
        cell_draw(0x343);
        func_800F5E48();
    } while (poll_go(0x202) != 0);
}
