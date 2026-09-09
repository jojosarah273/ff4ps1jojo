/* FF4 source-port — interpreted module for func_8011EDF4.
 * Ground truth: src/func_8011EDF4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F9200(void);
extern void func_8016EA1C(void);
extern void func_800F654C(u32 v0);
extern void func_800F3D48(void);
extern void func_800F93DC(void);
void func_8011EDF4(void) {
    func_800F9200();
    func_8016EA1C();
    latch(0);
    stat_sync();
    row_close2();;
}
