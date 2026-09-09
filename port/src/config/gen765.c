/* FF4 source-port — interpreted module for func_80132490.
 * Ground truth: src/func_80132490.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F926C(void);
extern void func_800F9298(void);
extern void func_8016EA9C(void);
extern void func_801324F8(void);
extern void func_80122114(void);
extern void func_800F971C(void);
extern void func_800F81E8(u32 v0);
extern void func_800F3D48(void);
extern void func_800F94B8(void);
extern void func_800F9448(void);
void func_80132490(void) {
    row_open2();
    row_open3();
    func_8016EA9C();
    func_801324F8();
    func_80122114();
    sep();
    func_800F81E8(0x1B49);
    stat_sync();
    func_800F94B8();
    row_pad();;
}
