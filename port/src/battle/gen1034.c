/* FF4 source-port — interpreted module for func_8010DA88.
 * Ground truth: src/func_8010DA88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010DA88(void)
{
    func_80117594();
    open_row(0x3E);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    func_800F7A68();
    cell_put(0x3D);
    page(0x3D);
    /* jr $a0 : the ~73-entry master battle-command jump table (invoked by
       func_80116720). Each entry calls one battle-command screen then jumps
       to L8010DF88 (return). Handlers in index order:
       80114194, 801142FC, 80113CCC, 80112A68, 8011285C, 801120F4, 80113DCC,
       80113E04, 8011383C, 801121C4, 80111F34, 80111F94, 801136D4, 80111EF4,
       801126A0, 801118CC, 801115F0, 8011124C, 801147C0, 80114880, 80114938,
       80114788, 801151BC, 80114DC8, 80114EBC, 801110CC, 80111134, 8011117C,
       8011102C, 80110FE4, 80113644, 801109A8, 8010F254, 8010F2F4, 8010F944,
       8010FB58, 8010FD30, 8010FEEC, 801101E4, 80110334, 8011107C, 801107A0,
       80110CFC, 80114AF0, 80114BC0, 8010F1D4, 8010F11C, 8010F144, 8010F08C,
       801133B0, 8010EB14, 8010E98C, 8010E58C, 80110818, 8010E388, 8010E278,
       8010E2B8, 801798F0, 80179670, 80179930, 8010E2F8, 8011368C, 8010E158,
       8010E050, 8010E0A8, 8010E100, 8010DF98, 80110664 ... */
    return;
}
