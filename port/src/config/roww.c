/* FF4 source-port — config/roww.c
 *
 * Small row helpers + wrapper ladders of the config/battle menus.
 * Each is an exact mirror of its Phase A function. (The midrow_*
 * paint/prep names alongside are owned by the earlier gen wave;
 * this module only carries the ones that were still stubbed.)
 *
 * Ground truth: src/func_8011F684, 8011EF0C, 80140558, 80150C38,
 * 80169128, 80124EAC (byte-verified).
 */
#include <stdint.h>
#include "ff4_window.h"

extern void func_8017F5C0(uint32_t);
extern void func_80070174(void);
extern void func_80070154(void);
extern void func_80186120(void);
extern uint16_t D_8019ED54;
extern uint16_t D_8019ED44;

/* 8011F684: wrapper of 8011F320 (midrow_pad88, gen wave). */
void midrow_pad88_run(void)
{
    midrow_pad88();
}

/* 8011EF0C: set the battle-state mode word 0x800DC400. */
void battle_state_dc400(void)
{
    func_8017F5C0(0x800DC400);
}

/* 80140558: gpu driver kick wrapper. */
void gpu_driver_run(void)
{
    func_80070174();
}

/* 80150C38: gpu driver kick wrapper (b). */
void gpu_driver_run_b(void)
{
    func_80070154();
}

/* 80169128: battle screen callback wrapper. */
void battle_cb_86120(void)
{
    func_80186120();
}

/* 80124EAC: delta register = pos counter (u16 twin of 800F9690). */
void cell_cur_save54_b(void)
{
    D_8019ED54 = D_8019ED44;
}