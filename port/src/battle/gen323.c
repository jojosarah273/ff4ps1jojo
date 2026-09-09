/* FF4 source-port — interpreted module for func_8011A204.
 * Ground truth: src/func_8011A204.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F6630(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_80105230(void);
extern void func_800F8D00(u32 v0);
extern void func_800F6564(u32 v0);
extern void func_800F5410(void);
extern void func_800F4008(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F62BC(u32 v0);
extern void func_800F5DA0(u32 v0);
void func_8011A204(void) {
    row_page(0x3D);
    cell_put(0xC);
    row_page(0x3E);
    cell_put(0xE);
    func_80105230();
    label(0xA17);
    label(0xA1B);
    txt_set(0xA17);
    sep_a();
    row_open_w(0x20);
    txt_draw(0xA1B);
    key_page(0xC);
    func_80105230();
    label(0xA19);
    label(0xA1D);
    txt_set(0xA19);
    sep_a();
    row_open_w(0x20);
    txt_draw(0xA1D);
    key_page(0xE);
    func_80105230();
    label(0xA21);
    label(0xA25);
    txt_set(0xA21);
    sep_a();
    row_open_w(0x20);
    txt_draw(0xA25);
    poll_pair(0xC);
    func_80105230();
    label(0xA1F);
    label(0xA23);
    txt_set(0xA1F);
    sep_a();
    row_open_w(0x20);
    txt_draw(0xA23);;
}
