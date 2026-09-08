#include "common.h"
void func_80132C0C(void)
{
    /* ability rows: 80139CA4 prep, 0x1B4A/0x1B4B texts, 0x43 window,
       80126070 close; gate 6434(0x80). */
    func_80139CA4();
    func_800F6564(0x1B4A);
    if (func_800F6434(0x80) != 0)
        goto L132C84;
    func_800F824C(0x43);
    func_800F9644(0x20);
    func_800F6658(0x43);
    func_800F516C(0x20);
    func_800F9660(0x20);
    func_800F654C(8);
    func_800F8768(0x1B4B);
L132C84:
    func_800F71DC(0x2588);
    func_80126070();
    return;
}
