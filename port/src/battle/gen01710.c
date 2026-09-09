/* FF4 source-port — interpreted module for func_8011AC64.
 * Ground truth: src/func_8011AC64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011AC64(void) { battle_tick_text(); cell_put(0xB2); func_80107FC4(); config_sub_screen(); config_confirm_loop_a(); battle_wndfx_run(); }
