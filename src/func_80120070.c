#include "common.h"
extern u8 *D_8019ED40;
extern u16 *D_8019ED4C;
void func_80120070(void)
{
    u8 s0;
    func_800F824C(0x1D);
    func_800F8FB8(0x1E);
    /* open-depth guard in the menu-region byte buffer */
    *D_8019ED4C = *D_8019ED4C - 1;
    func_800F93DC();
    func_800F8188(0x11F);
    func_800F9644(0x20);
    func_800F6658(0x1D);
    func_800F8D6C(0x1D);
    func_800F516C();
    func_800F5050();
    func_800F3F94(func_800F3C3C(0x1D));
    func_800F8274(0x1D);
    func_800F9660(0x20);
    s0 = *D_8019ED40;
    /* -------- category ladder on (v1,v0) --------
       assembly compares (not yet reconstructed); each leg dispatches a
       submenu table on s0 (menu cursor). Tables:
       L20244 jtbl_800F27DC  s0<8 : main-option handlers
       L20320 jtbl_800F27FC  s0<5 : sub-option handlers
       L20398 regcmp s0      : 801210AC / 80120FBC / 80120F1C / 80120E2C
       L201C8 regcmp s0      : 80126418 / 80126480 / 801264E8 / 80126550
       L2052C jtbl_800F288C  s0<6 : 801321E8 (index 0; rest -> default)
       L20564 jtbl_800F28A4  s0<0xD: 80131644..80131F68 (13)
       L20414 jtbl_800F2814  s0<0x1D: 8012C360..8012CF18 (15 distinct)
       Each table entry: call handler; addu v0,s1 (propagate return); jump
       L206C4 (tail: sh 0x2FC->D_8019ED4C, return) or L206C8 (return). */
    switch (s0) {
    case 0: func_80129F54();  break; /* main option 0 */
    case 1: func_8012EC48();  break; /* main option 1 (tail-special) */
    case 2: func_80132CFC();  break; /* config */
    case 3: func_8012DB6C();  break;
    case 4: func_8012DD30();  break;
    case 5: func_8012E160();  break;
    case 6: func_80139CF4();  break;
    case 7: func_80137BB8();  break; /* ability */
    }
    return;
}
