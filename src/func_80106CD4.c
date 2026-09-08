#include "common.h"
void func_80106CD4(void)
{
    /* battle dispatch: v0 + v1/v0 gates pick 80106D6C / 80071D4C /
       8016CA94 rows. */
    if (func_800F53D4() == 0)
        goto L106D5C;
    /* v1/v0 gate -> L106D44 / L106D20 */
    func_80106D6C();
    return;
L106D20:
    func_80106D6C();
    return;
L106D44:
    func_80071D4C();
    return;
L106D54:
    func_8016CA94();
    return;
L106D5C:
    return;
}
