#include "common.h"
void func_8011B6B4(void)
{
    /* battle rows: 8011B744 prep + 0x3D/0x1280 cells; loop L11B6DC
       on 5A90/53D4. */
    func_800F9330();
    func_8011B744();
    func_800F7270(0x3D);
    func_800F6B68(0x1280);
L11b6dc:
    for (;;) {
        func_800F5A90();
        if (func_800F53D4() != 0)
            goto L11B70C;
        func_800F7864();
        func_800F5EA0();
    }
L11B70C:
    func_800F7864();
    func_800F76E8();
    func_800F654C();
    func_800F4008();
    func_800F95A0();
    return;
}
