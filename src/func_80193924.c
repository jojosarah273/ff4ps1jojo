#include "common.h"
void func_80193924(void)
{
    /* battle anim: v1/v0 gate tree; 801972B8/80197208 rows;
       returns at L193C10. */
    if (func_800F53D4() != 0)
        goto L1939B8;
    goto L193C10;
L1939B8:
    func_801972B8();
    /* gate tree -> L193A50/L193AB8/L193B44/L193B5C */
    func_80197208();
    func_801972B8();
    return;
L193C10:
    return;
}
