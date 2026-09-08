#include "common.h"
void func_8018A9DC(void)
{
    /* event: v0 gate picks 8018A75C(2/1/3) vs 8018A438 row. */
    if (func_800F53D4() != 0)
        goto L18AA3C;
    func_8018A75C(2);
    func_8018A75C();
    func_8018A75C(1);
    func_8018A75C(3);
    return;
L18AA3C:
    func_8018A438();
    return;
L18AA4C:
    return;
}
