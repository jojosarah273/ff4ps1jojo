#include "common.h"
void func_80100BE0(void)
{
    /* shop buy row: 0x711 gate, 0x3D/0x18/0x19/0x77 windows, 0xFE7/
       0x8FC texts, 80100B30/80100978 rows; loop L100C10 on
       54D4(3B04(0x711)). */
    func_800F6564(0x711);
    if (func_800F6434(0x202) == 0)
        return;
    func_80100B30();
    func_800F7500();
L100c10:
    for (;;) {
        func_800F7270(0x3D);
        func_800F5410();
        func_800F3F38(func_800F3B04(0xFE7));
        func_800F8188(0x8FC);
        func_800F939C();
        func_80100978();
        func_800F960C();
        func_800F5574();
        if (func_800F53D4() != 0)
            goto L100CE4;
        func_800F7270(0x3D);
        func_800F6C68();
        func_800F824C(0x18);
        func_800F6C68();
        func_800F824C(0x19);
        func_800F7270(0x18);
        func_800F6C68();
        func_800F5574(0x78);
        if (func_800F53D4() == 0)
            goto L100CE4;
        func_800F654C(0x77);
        func_800F885C();
    L100CE4:
        func_800F7270(0x3D);
        func_800F8D6C(0x3D);
        func_800F63BC();
        if (func_800F54D4(func_800F3B04(0x711)) == 0)
            continue;
        break;
    }
    return;
}
