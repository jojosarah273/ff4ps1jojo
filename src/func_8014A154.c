#include "common.h"
void func_8014A154(void)
{
    func_800F8F74();
    /* jr $a0 : the ~46-entry battle item/action master table (invoked
       via the item menu). Each entry calls one sub-screen then jumps to
       L8014A478 (return). Handlers in index order:
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
