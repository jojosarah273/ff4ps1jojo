#include "common.h"
void func_80191DAC(void)
{
    /* event flow: a0/v0 + v1/v0 gates route 80192858/80192748/
       80192888 (or 80191C58) rows through 8018F688/80191620; then
       801928E8 + 801920F0(1) chains and the 80191858/80191838(9)/
       801919B4 tail. */
    if (func_80192858() == 0)
        goto L191E44;
    func_80192748();
    func_80192888();
    func_80192858();
    goto L191E4C;
L191E44:
    func_80191C58();
L191E4C:
    func_8018F688();
    func_80191620();
    /* v0 gate -> L191E84 */
    if (func_80192748() != 0) {
        func_80192748();
        return;
    }
    func_80191C58();
    func_801928E8();
    func_801920F0(1);
L191F40:
    /* spin -> L191F40 */
    func_801928E8();
    /* v0 gates -> L191F94 */
    if (func_80191858() != 0)
        func_80192858();
    func_80191838(9);
    func_801919B4();
    return;
}
