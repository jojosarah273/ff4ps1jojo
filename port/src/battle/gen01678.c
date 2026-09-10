/* FF4 source-port — interpreted module for jr_a0_twin_of_a154_same_entry_batt.
 * Ground truth: src/jr_a0_twin_of_a154_same_entry_batt.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void jr_a0_twin_of_a154_same_entry_batt(void)
{
    cell_clear_bank();
    /* jr $a0 : twin of 8014A154 (same 46-entry battle item/action
       master table; entries jump to L8014A800 -> return). Handlers in
       index order:
       8014B98C, 8014B914, 8014C994, 8014C13C, 8014BB6C, 8014C114,
       8014B1D0, 8014B8AC, 8014BB0C, 8014BB3C, 8014B334, 8014B36C,
       8014B3FC, 8014B42C, 8014B454, 8014B5F8, 8014B620, 8014B648,
       8014B698, 8014B6C0, 8014B6E8, 8014B804, 8014B82C, 8014B854,
       8014B884, 8014B964, 8014B9B4, 8014B1A8, 8014B188, 8014B118,
       8014AF74, 8014AE1C, 8014AD24, 8014AC3C, 8014AB70, 8014AAA8,
       8014AB90, 8014A888, 8014ABB8, 8014AA30, 8014A8B8, 8014A920,
       8014A950, 8014A980, 8014A860, 8014A810 ... */
    return;
}
