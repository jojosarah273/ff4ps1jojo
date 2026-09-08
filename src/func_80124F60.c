#include "common.h"
void func_80124F60(void)
{
    /* equip cell: 0x43/0x29/0x41 rows, 0xDB/0x34/0x45 windows, 801245B4
       in the L125068 loop; 78C4(3C3C(0x34)) cells, 5DA0(0x45)/5B8C
       latch. */
    func_800F824C(0x43);
    func_800F9644(0x20);
    func_800F6658(0x29);
    func_800F5410();
    func_800F4064(0x40);
    func_800F8274(0x1D);
    func_800F6658(0x43);
    func_800F516C();
    func_800F5050();
    func_800F3F94(func_800F3C3C(0x43));
    func_800F9660(0x20);
    func_800F960C();
    func_800F6C68();
    func_800F82EC(0x1D);
    func_800F63BC();
    func_800F6630(0xDB);
    func_800F78C4(func_800F3C3C(0x34));
    func_800F82EC(0x29);
    func_800F82EC(0x1D);
    func_800F63BC();
    func_800F6364();
    func_800F654C(8);
    func_800F824C(0x45);
L125068:
    for (;;) {
        func_800F6C68();
        func_801245B4();
        func_800F82EC(0x29);
        func_800F3D48();
        func_800F82EC(0x1D);
        func_800F6364();
        func_800F63BC();
        func_800F6630(0xDB);
        func_800F78C4(func_800F3C3C(0x34));
        func_800F82EC(0x29);
        func_800F82EC(0x1D);
        func_800F63BC();
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F960C();
    return;
}
