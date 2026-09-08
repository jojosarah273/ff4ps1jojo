#include "common.h"
void func_8010543C(void)
{
    func_800F6630(0xD5);
    if (func_800F6434(0x202) == 0)
        return;
    func_80102C30();
    func_800F6630(0xB1);
    if (func_800F6434(2) == 0) {
        func_800F6630(4);
        func_800F824C(2);
        func_800F6630(5);
        func_800F824C(3);
    }
    func_800F6630(0xA1);
    func_800F4248(0x41);
    func_800F824C(0xD2);
    func_800F6564(0x1715);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L598;
    func_800F6564(0x1706);
    func_800F5480();
    func_800F7F48(func_800F3B04(0x1716));
    if (func_800F53D4() != 0)
        goto L51c;
    func_800F53FC();
    func_800F654C(1);
    goto L560;
L51c:
    func_800F6564(0x1707);
    func_800F5480();
    func_800F7F48(func_800F3B04(0x1717));
    if (func_800F53D4() != 0)
        goto L580;
    func_800F53FC();
    func_800F654C(2);
L560:
    func_800F654C();
    func_800F8188(0x1705);
    func_800F61E8();
    goto L7e8;
L580:
    func_800F654C(0x80);
    func_800F824C(2);
    func_800F8FB8(0x54);
L598:
    func_80101788();
    func_800F6630(3);
    func_800F4248(0xF);
    if (func_800F4120(2) != 0)
        goto L7d0;
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        goto L5e8;
    func_800F654C(1);
    goto L650;
L5e8:
    func_800F6630(3);
    func_800F4248(2);
    if (func_800F4120(2) != 0)
        goto L618;
    func_800F654C(3);
    goto L650;
L618:
    func_800F6630(3);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L648;
    func_800F654C(2);
    goto L650;
L648:
    func_800F654C();
L650:
    func_800F8188(0x1705);
    func_800F61E8();
    func_800F8188(0x709);
    func_800F5140();
    func_800F9690();
    func_800F6630(0xB1);
    if (func_800F6434(0x202) != 0)
        goto L7e0;
    func_800F6564(0x1700);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L72c;
    func_800F6564(0x1704);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto L6e0;
    func_800F6564(0x1287);
    goto L704;
L6e0:
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto L72c;
    func_800F6564(0x1281);
L704:
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L72c;
    func_800F654C(1);
    goto L744;
L72c:
    func_800F6564(0x1704);
    if (func_800F6434(2) != 0)
        goto L784;
L744:
    func_800F96E0();
    func_800F6A78(0xA1);
    goto L7a0;
L784:
    func_800F6A78(0xA1);
    func_800F4248(0x41);
    func_800F4370(0xD2);
L7a0:
    if (func_800F4120(2) != 0)
        goto L7d0;
    func_80105828();
    func_800F6630(0xA);
    if (func_800F6434(2) != 0)
        goto L7e0;
L7d0:
    func_800F8FB8(0xAB);
    return;
L7e0:
    func_800F6564(0x709);
L7e8:
    func_800F824C(0xAB);
    func_800FFB5C();
    func_800F6564(0x1707);
    func_800F8188(0x70A);
    func_8011DE40();
    func_8011C2C8();
    return;
}
