#include "common.h"
void func_8011B594(void)
{
    /* battle rows: 8011B744 prep; loop L11B5AC on 5A90/53D4;
       closes with 0x3D/0x1280 reads. */
    func_8011B744();
    func_800F654C(1);
L11b5ac:
    for (;;) {
        func_800F5A90();
        if (func_800F53D4() != 0)
            goto L11B5DC;
        func_800F5140();
        func_800F5EA0();
    }
L11B5DC:
    func_800F7270(0x3D);
    func_800F78C4(func_800F3B04());
    func_800F8768(0x1280);
    return;
}
