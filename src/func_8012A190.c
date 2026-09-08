#include "common.h"
void func_8012A190(void)
{
La198:
    for (;;) {
        func_8012C980();
        func_800F71DC(0x6800);
        func_800F8D6C(0x1D);
        func_800F71DC(0xA600);
        func_800F8D6C(0x1F);
        func_800F654C(0x7E);
        func_800F824C(0x21);
        func_800F71DC(0x140);
        func_800F8D6C(0x22);
        func_8011F320();
        func_8011EE34();
        func_8011F6A4();
        func_80126480();
        func_8011F884();
    La208:
        func_800F6630(1);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto La258;
        func_800F6564(0x1B22);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1B22);
        if (func_800F4120(0x202) != 0)
            goto La2c8;
    La258:
        func_800F6630(1);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto La2a8;
        func_800F6564(0x1B22);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1B22);
        if (func_800F4120(2) != 0)
            goto La418;
    La2a8:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto La3f8;
    La2c8:
        func_800F6564(0x1B23);
        if (func_800F6434(0x202) != 0)
            goto La3e8;
        func_800F6564(0x1B1A);
        if (func_800F6434(2) != 0)
            goto La3f8;
        func_800F5CCC();
        func_800F8188(0x1B1A);
        func_800F9644(0x20);
        func_800F7500(8);
        for (;;) {
            func_800F6658(0x93);
            func_800F5480();
            func_800F80D0(2);
            func_800F8274(0x93);
            func_800F9660(0x20);
            func_800F6564(0x1B19);
            if (func_800F6434(2) != 0)
                goto La368;
            func_800F6240(0x311);
            func_800F6240(0x311);
        La368:
            func_800F939C();
            func_8012C980();
            func_8011F684();
            func_80126418();
            func_8016EA7C();
            func_800F960C();
            func_800F9644(0x20);
            func_800F5EA0();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F9660(0x20);
        func_8012A678();
        func_8011F7D4();
        if (func_800F53C0() != 0)
            goto La3f8;
        goto La208;
    La3e8:
        func_800F5CCC();
        func_800F8188(0x1B23);
    La3f8:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto La558;
    La418:
        func_800F6564(0x1B23);
        func_800F5574(9);
        if (func_800F53C0() == 0)
            goto La548;
        func_800F6564(0x1B1A);
        func_800F5574(0xE);
        if (func_800F53D4() != 0)
            goto La558;
        func_800F61E8();
        func_800F8188(0x1B1A);
        func_800F9644(0x20);
        func_800F7500(8);
        for (;;) {
            func_800F6658(0x93);
            func_800F5410();
            func_800F4064(2);
            func_800F8274(0x93);
            func_800F9660(0x20);
            func_800F6564(0x1B19);
            if (func_800F6434(2) != 0)
                goto La4c8;
            func_800F5D24(0x311);
            func_800F5D24(0x311);
        La4c8:
            func_800F939C();
            func_8012C980();
            func_8011F684();
            func_80126418();
            func_8016EA7C();
            func_800F960C();
            func_800F9644(0x20);
            func_800F5EA0();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F9660(0x20);
        func_8012A678();
        func_8011F7D4();
        if (func_800F53C0() != 0)
            goto La558;
        goto La208;
    La548:
        func_800F61E8();
        func_800F8188(0x1B23);
    La558:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto La5f0;
        func_800F6564(0x1B19);
        if (func_800F6434(0x202) != 0)
            goto La5a0;
        func_8012B050();
        goto La658;
    La5a0:
        func_8012B190();
        func_80120FBC();
        func_8012AAC0();
        func_800F8F74(0x1B19);
        func_8012B0B0();
        func_80126458();
        func_8011F6A4();
        goto La658;
    La5f0:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto La658;
        func_800F6564(0x1B19);
        if (func_800F6434(2) == 0)
            goto La648;
        func_8012B0B0();
        func_80125A64();
        func_800F8FB8(0x86);
        return;
    La648:
        func_800F8F74(0x1B19);
        func_8012B0B0();
    La658:
        func_8012A678();
        continue;
    }
}
