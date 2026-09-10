/* FF4 source-port — interpreted module for open_depth_guard_in_the_menu_regio.
 * Ground truth: src/open_depth_guard_in_the_menu_regio.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u16 *D_8019ED4C;
void open_depth_guard_in_the_menu_regio(void)
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
    case 0: main_menu_option_config_tab_x210c();  break; /* main option 0 */
    case 1: fn_1x2ec48();  break; /* main option 1 (tail-special) */
    case 2: fn_1x32cfc();  break; /* config */
    case 3: fn_1x2db6c();  break;
    case 4: fn_1x2dd30();  break;
    case 5: fn_1x2e160();  break;
    case 6: config_row_x30_x31_windows_x8d_x8a();  break;
    case 7: v1_v0_branch();  break; /* ability */
    }
    return;
}
