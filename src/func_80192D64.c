#include "common.h"
void func_80192D64(void)
{
    /* event: 8018F0C8/801976B8 rows; spin loops L192E04/L192DF8 on
       v0 gates; closes 8018F0C8/801976B8. */
    if (func_800F53D4() != 0)
        goto L192DBC;
    func_8018F0C8();
    func_801976B8();
L192DBC:
    /* gate loops L192E04 / L192DF8 */
    if (func_800F53D4() == 0)
        goto L192E84;
    func_8018F0C8();
    goto L192F08;
L192E84:
    func_801976B8();
    return;
L192F08:
    func_801976B8();
    return;
}
