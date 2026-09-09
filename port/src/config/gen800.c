/* FF4 source-port — interpreted module for func_80120070.
 * Ground truth: src/func_80120070.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u16 *D_8019ED4C;
void func_80120070(void)
{
    u8 s0;
    cell_put(0x1D);
    open_row(0x1E);
    /* open-depth guard in the menu-region byte buffer */
    *D_8019ED4C = *D_8019ED4C - 1;
    row_close2();
    txt_draw(0x11F);
    row_prep(0x20);
    row_read2(0x1D);
    tail(0x1D);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x1D));
    cell_put_hi9(0x1D);
    row_prep_close();
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
