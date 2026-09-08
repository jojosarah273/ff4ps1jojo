#include "common.h"
extern u16 D_801CFD68[];
extern s16 D_8019EDC2;
static void write_recipe(u8 *base, const u16 pairs[][2])
{
    while (pairs[0][0] != 0xFFFF) {
        *(u16 *)(base + pairs[0][0]) = pairs[0][1];
        pairs++;
    }
}
void func_80127F2C(void)
{
    /* menu text-grid: clears 4 slots, then installs the panel label
       recipe for panel geometry 7 or 8. */
    static const u16 fill7[][2] = {
        {0x70A8, 0x2054}, {0x70AA, 0x205C}, {0x70AC, 0x2071},
        {0x70AE, 0x2060}, {0x70B0, 0x20FF}, {0x70B2, 0x205C},
        {0x70B4, 0x206E}, {0x7128, 0x204E}, {0x712A, 0x2060},
        {0x712C, 0x2068}, {0x712E, 0x206A}, {0x7130, 0x20FF},
        {0x7132, 0x205F}, {0x7134, 0x205C}, {0x7136, 0x206F},
        {0x7138, 0x205C}, {0x713A, 0x207A},
        {0xFFFF, 0}
    };
    static const u16 fill8[][2] = {
        {0x70AE, 0x2054}, {0x70B0, 0x205C}, {0x70B2, 0x2071},
        {0x70B4, 0x2060}, {0x70B6, 0x20FF}, {0x70B8, 0x20FF},
        {0x707A, 0x20FF}, {0x70BA, 0x20FF}, {0x7132, 0x206D},
        {0x712E, 0x2063}, {0x7130, 0x2060}, {0x7134, 0x2060},
        {0x7136, 0x207A},
        {0xFFFF, 0}
    };
    s32 i;
    for (i = 0; i < 4; i++) {
        u16 *p = (u16 *)((u8 *)D_801CFD68 + (i << 6) + 0xF06C);
        s32 j;
        for (j = 1; j <= 6; j++)
            p[j] = 0x20FF;
    }
    if (D_8019EDC2 == 7)
        write_recipe((u8 *)D_801CFD68 + 0x8000, fill7);
    else if (D_8019EDC2 == 8)
        write_recipe((u8 *)D_801CFD68 + 0x8000, fill8);
}
