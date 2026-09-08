#include "common.h"
void func_801490CC(void)
{
    /* battle info-dialog: two identical confirm blocks (54D4/53C0 ->
       option select vs 6240 tail), then 0x26/0x28/0x2A detail rows and
       8007262C commit. */
    func_800F8F74();
    func_800F7210();
    func_800F8D00();
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F6564();
    func_800F54D4(func_800F3B04());
    if (func_800F53D4() != 0)
        goto L149204;
    if (func_800F53C0() == 0)
        goto L1491AC;
    func_800F5D24();
    func_800F6564();
    func_800F5480();
    func_800F7F48(func_800F3B04());
    func_800F8188();
    func_800F7864();
    func_800F5410();
    func_800F3F38(func_800F3B04());
    func_800F8188();
    goto L149204;
L1491AC:
    func_800F6240();
    func_800F6564();
    func_800F5480();
    func_800F7F48(func_800F3B04());
    func_800F8188();
    func_800F7864();
    func_800F5410();
    func_800F3F38(func_800F3B04());
    func_800F8188();
L149204:
    func_800F6564();
    func_800F54D4(func_800F3B04());
    if (func_800F53D4() != 0)
        goto L1492F4;
    if (func_800F53C0() == 0)
        goto L14929C;
    func_800F5D24();
    func_800F6564();
    func_800F5480();
    func_800F7F48(func_800F3B04());
    func_800F8188();
    func_800F7864();
    func_800F5410();
    func_800F3F38(func_800F3B04());
    func_800F8188();
    goto L1492F4;
L14929C:
    func_800F6240();
    func_800F6564();
    func_800F5480();
    func_800F7F48(func_800F3B04());
    func_800F8188();
    func_800F7864();
    func_800F5410();
    func_800F3F38(func_800F3B04());
    func_800F8188();
L1492F4:
    func_800F6564(0x26);
    func_800F8D6C();
    func_800F6564(0x28);
    func_800F8D6C();
    func_8007262C();
    func_800F6630(0x2A);
    func_800F61E8();
    func_800F8188();
    return;
}
