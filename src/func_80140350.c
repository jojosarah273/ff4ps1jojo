#include "common.h"
void func_80140350(void)
{
    /* battle rows: 0x2A window, 3F94(3C3C) reads; linear cell fill. */
    func_800F939C();
    func_800F8EBC();
    func_800F9644(0x20);
    func_800F8274(0x2A);
    func_800F5410();
    func_800F3F94(func_800F3C3C());
    func_800F6658(0x2A);
    func_800F5410();
    func_800F3F94(func_800F3C3C());
    func_800F971C();
    func_800F9660(0x20);
    func_800F6C68();
    func_800F8960();
    func_800F8960();
    func_800F960C();
    return;
}
