#include "common.h"
void func_80168750(void)
{
    func_800F6564(0xEF87);
    if (func_800F6434(0x202) == 0)
        goto L8b14;
    func_800F6564(0xF49B);
    if (func_800F6434(2) != 0)
        goto L8798;
    func_800F6564(0xF49B);
    goto L87a0;
L8798:
    func_800F654C(3);
L87a0:
    func_80168B94();
    func_800F654C(0xE0);
    func_8017EA90();
    func_800F6564(0xEF87);
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto L8978;
    func_800F5574(2);
    if (func_800F53D4() != 0)
        goto L88c0;
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto L8978;
    func_800F5574(4);
    if (func_800F53D4() != 0)
        goto L8890;
    func_800F5574(5);
    if (func_800F53D4() != 0)
        goto L8860;
    func_800F5574(6);
    if (func_800F53D4() != 0)
        goto L88c0;
L8860:
    func_800F6564(0xF435);
    if (func_800F6434(2) == 0)
        goto L8948;
    func_800F8F74(0xF49B);
    func_800F8F74(0xEF87);
    goto L8998;
L8890:
    func_800F6564(0xF435);
    if (func_800F54D4(func_800F3B04(0xF436)) != 0)
        goto L8998;
    goto L88f8;
L88c0:
    func_800F6564(0xEF8A);
    if (func_800F6434(0x202) != 0)
        goto L8930;
    func_800F6564(0xF435);
    func_800F5574(0x1F);
    if (func_800F53D4() != 0)
        goto L8918;
L88f8:
    func_800F6240(0xF435);
    func_800F6240(0xF434);
    func_800F6240(0xF433);
    goto L8998;
L8918:
    func_800F654C(1);
    func_800F8188(0xEF8A);
    goto L8998;
L8930:
    func_800F6564(0xF435);
    if (func_800F6434(2) != 0)
        goto L8968;
L8948:
    func_800F5D24(0xF435);
    func_800F5D24(0xF434);
    func_800F5D24(0xF433);
    goto L8998;
L8968:
    func_800F8F74(0xEF8A);
    goto L8998;
L8978:
    func_800F6564(0xEF89);
    func_800F4248(2);
    if (func_800F4120(0x202) != 0)
        goto L8b04;
L8998:
    func_800F6564(0xEF88);
    func_800F4248(0x80);
    if (func_800F4120(2) == 0) {
        func_800F6564(0xF433);
        func_8017EA90();
    }
    func_800F6564(0xEF88);
    func_800F4248(0x40);
    if (func_800F4120(2) == 0) {
        func_800F6564(0xF434);
        func_8017EA90();
    }
    func_800F6564(0xEF88);
    func_800F4248(0x20);
    if (func_800F4120(2) == 0) {
        func_800F6564(0xF435);
        func_8017EA90();
    }
    func_800F6564(0xEF87);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto L8b04;
    func_800F6240(0xEF89);
    func_800F6564(0xEF89);
    func_800F4248(2);
    if (func_800F4120(0x202) != 0)
        goto L8b84;
    func_800F8F74(0xEF87);
    goto L8b84;
L8b04:
    func_800F6240(0xEF89);
    goto L8b84;
L8b14:
    func_800F6564(0xED4E);
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L8b64;
    func_800F654C(2);
    func_800F81E8(0x2130);
    func_800F81E8(0x212D);
    func_800F654C(0x41);
    func_80168B94();
    goto L8b84;
L8b64:
    func_800F971C();
    func_800F81E8(0x2130);
    func_800F81E8(0x212D);
    func_80168B94();
L8b84:
    return;
}
