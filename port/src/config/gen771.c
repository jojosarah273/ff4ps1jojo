/* FF4 source-port — interpreted module for func_801219EC.
 * Ground truth: src/func_801219EC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53C0(void);
extern void func_801220EC(void);
extern void func_800F62BC(u32 v);
extern void func_80121F8C(void);
extern void func_800F5DA0(u32 v);
extern void func_800F654C(u32 v);
extern void func_800F824C(u32 v);
extern void func_80121A74(void);
void func_801219EC(void) {
    if (io_go() == 0) {
        func_80121F8C();
        poll_pair(99);
    } else {
        func_801220EC();
        key_page(99);
    }
    latch(0xF7);
    cell_put(0x1E);
    latch(0xFA);
    cell_put(0x1F);
    latch(0xFC);
    cell_put(0x20);
    func_80121A74();
}
