#include "common.h"
void func_80141530(void)
{
    /* battle spell-tab flow: 0x38E8/0x38E9 rows, 0x388E/0x388F texts,
       0x1E00/0x1E02 level gate, 0x352D/0x388B/0x4218/0x1811/0x1812
       detail rows; 80145408/80167914/80169128 preps. */
    func_80145408();
    func_80167914();
    func_800F6564(0x38E8);
    if (func_800F6434(2) != 0)
        goto L1415C4;
    func_800F6564(0x38E9);
    func_800F6564(0x38EA);
    func_800F6C68();
    func_800F8960();
    func_800F8960();
    func_800F8F74(0x38E8);
L1415C4:
    func_800F6564(0x388D);
    if (func_800F6434(2) != 0)
        goto L14160C;
    func_800F6564(0x388E);
    func_800F8188(0x1E01);
    func_800F654C(1);
    func_800F8188(0x1E00);
    func_80169128();
    func_800F8F74(0x388D);
L14160C:
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L14163C;
    func_800F8188(0x1E00);
    func_80169128();
    func_800F8F74();
L14163C:
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L1416C4;
    func_800F7210();
    func_800F8D00(0x1E00);
    func_800F7210();
    func_800F8D00(0x1E02);
    func_800F6564(0x6CC0);
    if (func_800F6434(2) != 0)
        goto L1416B4;
    func_800F6564(0x1E02);
    func_800F8188();
L1416B4:
    func_80169128();
    func_800F8F74();
L1416C4:
    func_800F8F74(0x352D);
    func_800F6564();
    func_800F78C4(func_800F3B04(0x388B));
    if (func_800F7918(0x202) != 0)
        goto L141738;
    func_800F65C8(0x4218);
    func_800F3B9C();
    func_800F78C4();
    func_800F4248(0x30);
    func_800F5574(0x30);
    if (func_800F53D4() == 0)
        goto L141738;
    func_800F6240(0x352D);
L141738:
    func_800F8F74(0x1811);
    func_800F8F74(0x1812);
    func_800F62BC(0x97);
    return;
}
