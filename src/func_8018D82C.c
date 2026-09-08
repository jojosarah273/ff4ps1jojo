#include "common.h"
void func_8018D82C(void)
{
    /* event: 8018AAC4 gate spins; then 8018E408/8018E2C8(1) rows
       with the 8018D1AC/8018A75C(3) tail. */
    /* v1/v0 gate + spin L18D8AC */
    if (func_8018AAC4() != 0)
        goto L18D958;
    if (func_800F53D4() == 0)
        goto L18D958;
L18D958:
    func_8018E408();
    func_8018E2C8(1);
    if (func_800F53D4() != 0)
        goto L18DAA4;
    func_8018D1AC();
    func_8018A75C(3);
    return;
L18DAA4:
    return;
}
