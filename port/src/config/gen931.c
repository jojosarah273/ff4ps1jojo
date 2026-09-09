/* FF4 source-port — interpreted module for func_801376B0.
 * Ground truth: src/func_801376B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_801376B0(void) { row_prep(0x20); row_sync2(0xF); wnd_open(0x300); battle_wait_just(0x7E7E); row_prep_close(); }
