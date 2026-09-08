#include "common.h"
void func_8016BE1C(void)
{
    /* shop rows: 3F94(3B04) reads + 0x2000/0x2040 cells; linear. */
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3B04());
    func_800F87DC(0x2000);
    func_800F5410();
    func_800F3F94(func_800F3B04());
    func_800F87DC(0x2040);
    func_800F971C();
    func_800F9660(0x20);
    return;
}
