#include "common.h"
void func_801920F0(void)
{
    /* battle command maps: 80191838/80191858/80192858 preps with
       beqz/v0 gates routing through 801928E8/80191620/801919B4/
       80191878/80192738/801917B8/80192728/8018F688; returns at
       L1922C0. */
    func_80191838();
    if (func_80191858() == 0)
        goto L192138;
    func_80192858();
L192138:
    if (func_80192718() == 0)
        goto L1921A0;
    func_801928E8();
    if (func_80191620(1) != 0)
        goto L192170;
    func_801919B4();
    func_801928E8();
    return;
L192170:
    func_801919B4();
    func_801928E8();
    return;
L1921A0:
    func_80191620(9);
    func_80191878();
    func_80192738(2);
    func_80191878();
    if (func_80192718() == 0)
        goto L19222C;
    func_801917B8();
    func_80192728();
    /* s0/v0 gate -> L192218 */
    func_80191878(0xE);
    if (func_80192718() != 0)
        goto L192248;
L19222C:
    return;
L192248:
    func_80192738();
    func_8018F688();
    if (func_80191858() == 0)
        goto L192298;
    func_80192858(6);
L192298:
    func_801919B4();
    func_801928E8();
    return;
}
