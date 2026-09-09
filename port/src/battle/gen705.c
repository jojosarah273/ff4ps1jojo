/* FF4 source-port — interpreted module for func_8011F724.
 * Ground truth: src/func_8011F724.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
extern u16 *D_8019ED44;
void func_8011F724(void)
{
    latch(0xA);
    row_open2();
    func_800F9200();
    latch(0x7E);
    func_800F9200();
    row_pad();
    row_close2();
    func_800F8960(2);
    row_prep(0x20);
    *D_8019ED44 = *D_8019ED54;
    row_prep_close();
    func_800F8960(0);
    stat_sync();
    func_800F8960(1);
    row_page(0x3F);
    func_800F8960(3);
    row_pad();
}
