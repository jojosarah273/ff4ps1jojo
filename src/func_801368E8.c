#include "common.h"
void func_801368E8(void)
{
    /* ability rows: 0x1B7B/0x1B55 texts, 801224D0 row, 801369B8
       loop; gates 6434(0x202)/5574(0xCE). */
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F6564(0x1B7B);
    func_801224D0();
    func_800F6B68(0x1B55);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F5574(0xCE);
    if (func_800F53C0() != 0)
        return;
    func_800F8188(0x1B39);
    func_800F654C();
L136980:
    for (;;) {
        func_801369B8();
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
