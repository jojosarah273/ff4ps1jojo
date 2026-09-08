#include "common.h"
void func_8018CA48(void)
{
    /* event: v0 gate; 8018A9DC/8018AB08 rows. */
    if (func_800F53D4() == 0)
        goto L18CA74;
    func_8018A9DC();
    func_8018AB08();
    return;
L18CA74:
    func_8018A9DC();
    func_8018AB08();
    return;
}
