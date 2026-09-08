#include "common.h"
void func_8018CE98(void)
{
    /* event: 8018E4B8 gate, 8018ABE8(1); spins L18CF58 on the
       8018A75C rows (2/1/3). */
    if (func_8018E4B8() == 0)
        goto L18CF04;
    func_8018ABE8(1);
L18CF04:
L18CF44:
    /* spin loops L18CF58 -> L18CF74 */
    func_8018A75C(2);
    func_8018A75C();
    func_8018A75C(3);
    return;
}
