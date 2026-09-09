/* FF4 source-port — interpreted module for func_8011ADA4.
 * Ground truth: src/func_8011ADA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011ADA4(void) { battle_tick_text(); cell_put(0xB2); func_80108398(); config_sub_screen(); config_confirm_loop_a(); battle_wndfx_run(); }
