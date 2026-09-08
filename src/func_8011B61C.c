#include "common.h"
void func_8011B61C(void)
{
    /* battle rows (twin with 3B9C/4832): 8011B7B4 prep; loop
       L11B634 on 5A90/53D4. */
    func_8011B7B4();
    func_800F654C(1);
L11b634:
    for (;;) {
        func_800F5A90();
        if (func_800F53D4() != 0)
            goto L11B664;
        func_800F5140();
        func_800F5EA0();
    }
L11B664:
    func_800F7270(0x3D);
    func_800F78C4(func_800F3B9C());
    func_800F885C(0x12E0);
    return;
}
