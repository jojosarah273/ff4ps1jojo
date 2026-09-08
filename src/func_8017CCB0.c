#include "common.h"
void func_8017CCB0(void)
{
    /* battle anim: 4x 80197208 rows with v0 gates + tail gates. */
    if (func_800F53D4() == 0)
        goto L17CD3C;
    goto L17CD48;
L17CD3C:
    func_80197208();
    if (func_800F53D4() != 0)
        goto L17CD98;
    func_80197208();
    func_80197208();
    if (func_800F53D4() != 0)
        goto L17CE50;
    func_80197208();
    return;
L17CD48:
    func_80197208();
    goto L17CDA4;
L17CD98:
    func_80197208();
    return;
L17CDA4:
    func_80197208();
    if (func_800F53D4() != 0)
        goto L17CE50;
    func_80197208();
    return;
L17CE50:
    func_80197208();
    return;
}
