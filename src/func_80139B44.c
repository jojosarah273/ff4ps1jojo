#include "common.h"
void func_80139B44(void)
{
    /* ability rows: 80139CA4/80139694 preps, 0x1BAF text, 0x1340/
       0x1440 gates, 80139C0C row; loop L139BD4 on 5574(5). */
    func_80139CA4();
    func_80139694();
    func_800F6564(0x1BAF);
    if (func_800F6434(2) != 0)
        goto L139B8C;
    func_800F6B68(0x1340);
    func_800F63F8();
    goto L139B9C;
L139B8C:
    func_800F6B68(0x1440);
    func_800F63F8();
L139B9C:
    if (func_800F53D4() != 0)
        return;
    func_800F5574(0xCE);
    if (func_800F53C0() != 0)
        return;
    func_800F8188(0x1B39);
    func_800F971C();
L139bd4:
    for (;;) {
        func_80139C0C();
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
