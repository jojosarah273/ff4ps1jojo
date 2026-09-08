#include "common.h"
void func_80104934(void)
{
    func_800F6630(0xD5);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0xC4);
    func_80102C30();
    func_800F6630(0xB1);
    if (func_800F6434(2) == 0) {
        func_800F6630(4);
        func_800F824C(2);
        func_800F6630(5);
        func_800F824C(3);
    }
    func_800F6630(0xA1);
    func_800F4248(4);
    if (func_800F4120(0x202) == 0) {
        func_800F6630(0xA1);
        func_800F4248(3);
        func_800F824C(0xD2);
    }
    func_801051A8();
    func_800F6630(0xA1);
    func_800F4248(3);
    func_800F5410();
    func_800F4008(4);
    func_800F824C(0xA);
    func_800F6630(3);
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        goto La84;
    func_800F6630(0xCF);
    if (func_800F6434(0x202) != 0)
        goto La4c;
    func_800F654C(1);
    func_800F8188(0x1705);
La4c:
    func_800F654C(2);
    func_800F8188(0x709);
    func_801048EC();
    func_80104E14();
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Lc34;
La84:
    func_800F6630(3);
    func_800F4248(2);
    if (func_800F4120(2) != 0)
        goto Lb04;
    func_800F6630(0xCF);
    if (func_800F6434(0x202) != 0)
        goto Lacc;
    func_800F654C(3);
    func_800F8188(0x1705);
Lacc:
    func_800F654C(4);
    func_800F8188(0x709);
    func_801048EC();
    func_80104E14();
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Lc34;
Lb04:
    func_800F6630(3);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto Lb84;
    func_800F6630(0xCF);
    if (func_800F6434(0x202) != 0)
        goto Lb4c;
    func_800F654C(2);
    func_800F8188(0x1705);
Lb4c:
    func_800F654C(3);
    func_800F8188(0x709);
    func_801048EC();
    func_80104E14();
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Lc34;
Lb84:
    func_800F6630(3);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto Lc04;
    func_800F6630(0xCF);
    if (func_800F6434(0x202) != 0)
        goto Lbcc;
    func_800F654C();
    func_800F8188(0x1705);
Lbcc:
    func_800F654C(1);
    func_800F8188(0x709);
    func_801048EC();
    func_80104E14();
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Lc34;
Lc04:
    func_800F8FB8(0xAB);
    func_80105098();
    func_800F6630(0xB1);
    if (func_800F6434(0x202) != 0)
        goto Ld8c;
    return;
Lc34:
    func_800F6630(0xE0);
    if (func_800F6434(0x202) != 0)
        goto Lc9c;
    func_800F6564(0x709);
    func_800F824C(0xAB);
    func_80105098();
    func_800F6630(0xEA);
    if (func_800F6434(0x202) != 0)
        goto Lc84;
    func_800F62BC(0xEA);
Lc84:
    func_800F6630(0xB1);
    if (func_800F6434(2) == 0)
        goto Ld8c;
Lc9c:
    func_800F6630(0xAB);
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto Ld8c;
    func_800F5574();
    if (func_800F53D4() == 0)
        goto Ld34;
    func_800F6564(0x70C);
    func_800F5574(0x70);
    if (func_800F53D4() != 0)
        goto Ld0c;
    func_800F5574(0x71);
    if (func_800F53D4() == 0)
        goto Ld8c;
Ld0c:
    func_800F6564(0x1707);
    func_800F5CCC();
    func_800F824C(0xE);
    func_80104DB4();
    goto Ld8c;
Ld34:
    func_800F6564(0x70E);
    func_800F5574(0x70);
    if (func_800F53D4() != 0)
        goto Ld6c;
    func_800F5574(0x71);
    if (func_800F53D4() == 0)
        goto Ld8c;
Ld6c:
    func_800F6564(0x1707);
    func_800F61E8();
    func_800F824C(0xE);
    func_80104DB4();
Ld8c:
    func_800FFB5C();
    func_800FFCAC();
    func_8011C768();
    return;
}
