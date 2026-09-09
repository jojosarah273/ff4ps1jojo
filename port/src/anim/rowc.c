/* FF4 source-port — interpreted module for func_80177DEC.
 * Ground truth: src/func_80177DEC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80177DEC(void)
{
    /* battle anim chain: 80194394/801928E8/80194988/8017841C/
       80178C14/8011EF0C/800FEF7C/801947B8/8017D078/8017E220/
       8017E740/80178D00; linear. */
    cb_slot15();
    event_spin_wait();
    func_80194988();
    func_8017841C();
    status_table_init();
    battle_state_dc400();
    func_800FEF7C();
    func_801947B8();
    func_8017D078();
    func_8017E220();
    func_8017E740();
    func_80178D00();
    return;
}
