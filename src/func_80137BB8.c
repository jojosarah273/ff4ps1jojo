#include "common.h"
void func_80137BB8(void)
{
    func_800F6564(0x1A02);
    if (func_800F6434(0x202) != 0)
        goto L7c00;
    func_8012219C();
    return;
L7c00:
    func_80126610();
L7c08:
    func_80137B18();
    func_80178BB4();
    func_801793F8();
L7c24:
    /* v1/v0 branch */
    func_80178BB4();
    return;
    /* v1/v0 branch */
    func_80138788();
    func_80137B18();
    /* v1/v0 branch */
    func_80187CD0();
    func_80138730();
    func_800F654C(1);
    func_800F8188(0x1B47);
    func_800F654C(1);
    func_800F8188(0x1A3C);
    func_80127668();
    func_80124298();
    func_801280D4();
    goto L7d40;
L7cc8:
    func_80128598();
    func_800F654C(1);
    func_800F8188(0x1B47);
    func_800F6564(0x1A3C);
    if (func_800F6434(0x202) != 0)
        goto L7d10;
    func_800F654C(1);
    func_800F8188(0x1A3C);
L7d10:
    func_80127668();
    func_80124298();
    func_801280D4();
    func_80127168();
    if (func_800F53C0() == 0)
        goto L7ec0;
L7d40:
    func_80127808();
    if (func_800F53C0() == 0)
        goto L80dc;
    /* beqz/v1-s1 branch */
    func_801793F8();
    /* v1/s1 branch */
    func_80138788();
    goto L7c00;
    func_801382C8();
    func_800F6564(0x1A3C);
    func_800F5CCC();
    if (func_800F5B8C(0x80) != 0)
        goto L7e88;
    func_800F824C(0x46);
    func_800F8FB8(0x45);
    func_800F7594(0x45);
    func_800F71DC(0xF600);
    func_800F926C();
    func_800F9644(0x20);
    func_800F6558(0x7FF);
    func_800F3D64(0x7E70);
    func_800F9660(0x20);
    func_800F9448();
    func_80138788();
    func_8013813C();
    /* v1/v0 branch */
    func_80187CD0();
L7e88:
    func_801221EC();
    func_801210AC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    goto L7ed8;
L7ec0:
    func_800F7500();
L7ed8:
    func_8011FBA4();
    func_80138788();
    /* v1/v0 + s2 branches */
    func_80138458();
    func_80177DEC();
    func_80177DEC();
    func_80177DEC();
    func_801793F8();
    /* v1/v0 branch */
    func_801382C8();
    func_80127C70();
    func_801221EC();
    func_801210AC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FBA4();
    func_80138788();
    /* v1/v0 + s2 branches */
    func_8013836C();
L7fcc:
    func_801263F0();
    /* v0/s0, v0/s1 branches */
    func_80145AA0();
    func_80145AA0();
    func_80138620();
    /* v1/v0 branch */
    func_801383B8();
    /* s3/s2 branches */
    func_8011FF40();
    /* v0/s1 branch */
    func_80138408();
    func_80126610();
    /* v1/v0 + s2 branches */
    func_80178BB4();
    func_801793F8();
    /* v1/v0 + s2 branches */
    func_80138730();
    goto L7c24;
L80dc:
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_80126610();
    func_80138788();
    goto L7c08;
    return;
}
