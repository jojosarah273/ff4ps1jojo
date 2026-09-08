#include "common.h"
void func_80185AC8(void)
{
    /* battle cutscene: 3B9C gate rows with spins; 80185764 called
       3x (L185C70/L185D8C/L185EF4); returns at L185F04. */
    /* v1/v0 gate + v0 gate -> L185C80 */
    func_800F3B9C();
    func_800F3B9C();
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    if (func_800F3B9C() != 0)
        goto L185C14;
    goto L185C70;
L185C14:
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L185C70:
    func_80185764();
    return;
L185C80:
    if (func_800F53D4() == 0)
        goto L185D9C;
    func_800F3B9C();
    func_800F3B9C();
    func_800F3B9C();
    if (func_800F53D4() == 0)
        goto L185D8C;
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L185D8C:
    func_80185764();
    return;
L185D9C:
    func_800F3B9C();
    func_800F3B9C();
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    if (func_800F3B9C() == 0)
        goto L185EF4;
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L185EF4:
    func_80185764();
    return;
}
