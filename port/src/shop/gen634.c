/* FF4 source-port — interpreted module for func_801625A8.
 * Ground truth: src/func_801625A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F6564(u32 v0);
extern void func_800F9200(void);
extern void func_800F971C(void);
extern void func_800F8188(u32 v0);
extern void func_800F5CCC(void);
extern void func_8005FFEC(void);
extern void func_800F93DC(void);
void func_801625A8(void) {
    txt_set(0x269C);
    func_800F9200();
    txt_set(0x2729);
    func_800F9200();
    sep();
    txt_draw(0x2729);
    poll_spin();
    txt_draw(0x269C);
    func_8005FFEC();
    row_close2();
    txt_draw(0x2729);
    row_close2();
    txt_draw(0x269C);;
}
