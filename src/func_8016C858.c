#include "common.h"
void func_8016C858(void)
{
    /* battle terrain/affinity screen: 0x2101/0x2102/0x2100 title rows,
       0x2005/0x2001/0x2003 gates, 0x50/0x4A windows; 8016C280/8016C624
       row draws, 8016C0A8/8016C128 area cells, 8016AACC/8016AA84 and
       8016BE1C/8016B470 commits. */
    func_800F8F74(0x2101);
    func_800F8F74(0x2102);
    func_800F8FB8(0x50);
    func_800F6564(0x2005);
    func_800F4248(1);
    func_800F8188(0x2100);
    func_800F6564(0x2001);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto L16C8C0;
    func_8016C280();
    func_800F6240(0x2101);
L16C8C0:
    func_800F6564(0x2003);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto L16C8F0;
    func_8016C624();
    func_800F6240(0x2102);
L16C8F0:
    func_8016BFE8();
    func_800F6564(0x2101);
    if (func_800F6434(0x202) != 0)
        goto L16C918;
    func_8016C280();
L16C918:
    func_800F6564(0x2102);
    if (func_800F6434(0x202) != 0)
        goto L16C938;
    func_8016C624();
L16C938:
    func_800F6564(0x2007);
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        goto L16C970;
    func_8016C0A8();
    func_8016C128();
    goto L16C980;
L16C970:
    func_8016C128();
    func_8016C0A8();
L16C980:
    func_800F6564(0x2100);
    if (func_800F6434(0x202) != 0)
        goto L16C9A8;
    func_8016AACC();
    goto L16C9B0;
L16C9A8:
    func_8016AA84();
L16C9B0:
    func_8016B470();
    func_800F71DC();
    func_800F7500();
    func_8016BE1C();
    func_800F71DC(2);
    func_800F7500();
    func_8016BE1C();
    func_800F6564(0x2100);
    func_800F6C68();
    func_800F824C(0x28);
    func_800F6630(0x4A);
    func_800F4370(0x28);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F71DC(4);
    func_800F7500();
    func_8016BE1C();
    func_800F71DC(6);
    func_800F7500();
    func_8016BE1C();
    func_800F71DC(8);
    func_800F7500();
    func_8016BE1C();
    return;
}
