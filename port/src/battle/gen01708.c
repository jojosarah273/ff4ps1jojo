/* FF4 source-port — interpreted module for func_8011AD5C.
 * Ground truth: src/func_8011AD5C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011AD5C(void) { battle_tick_text(); cell_put(0xB2); func_80108330(); config_sub_screen(); config_confirm_loop_a(); battle_wndfx_run(); }
