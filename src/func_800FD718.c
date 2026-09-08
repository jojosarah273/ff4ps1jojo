#include "common.h"
void func_800FD718(void)
{
    /* battle rows: 0x1704/0x1700/0xFE2 texts, 0x1E01/0x1E00 cells,
       80169128 row; gates 6434(2)/5574(3). */
    func_800F6564(0x1704);
    if (func_800F6434(2) != 0)
        goto L8FD780;
    func_800F6564(0x1704);
    func_800F9690();
    func_800F8188(0x1E01);
    func_800F654C(3);
    goto L8FD7E4;
L8FD780:
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto L8FD7CC;
    func_800F9690();
    goto L8FD7D4;
L8FD7CC:
    func_800F6564(0xFE2);
L8FD7D4:
    func_800F8188(0x1E01);
    func_800F654C(1);
L8FD7E4:
    func_800F8188(0x1E00);
    func_80169128();
    return;
}
