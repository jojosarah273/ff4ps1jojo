/* FF4 source-port — interpreted module for func_80123878.
 * Ground truth: src/func_80123878.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F8960(u32 v0);
extern void func_800F3D48(void);
extern void func_800F9644(u32 v0);
extern void func_800F6658(u32 v0);
extern void func_800F9660(u32 v0);
extern void func_8011F3F8(void);
extern void func_800F6630(u32 v0);
extern void func_800F654C(u32 v0);
void func_80123878(void) {
    func_800F8960(0x576);
    stat_sync();
    func_800F8960(0x578);
    row_prep(0x20);
    row_read2(0x73);
    row_prep_close();
    func_8011F3F8();
    row_page(0x5B);
    func_800F8960(0x56E);
    row_page(0x5D);
    func_800F8960(0x570);
    row_page(0x5E);
    func_800F8960(0x572);
    latch(0xC8);
    func_800F8960(0x574);;
}
