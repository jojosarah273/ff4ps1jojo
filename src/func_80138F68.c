#include "common.h"
void func_80138F68(void)
{
    /* config rows: 0x1E0/0x1E0/0x19A texts, 0x212C window, 0x1E0
       gate picks the 0x1F/0x1E2 route. */
    func_800F9644(0x20);
    func_800F922C();
    func_800F9660(0x20);
    func_800F926C();
    func_800F654C();
    func_800F9200();
    func_800F9448();
    func_800F6564(0x1E0);
    if (func_800F6434(2) != 0)
        goto L139024;
    func_800F8F74(0x1E0);
    return;
L139024:
    func_800F654C(0x1F);
    func_800F8188(0x212C);
    func_800F6240(0x1E0);
    func_800F6564(0x19A);
    func_800F3D48();
    func_800F6564(0x199);
    return;
}
