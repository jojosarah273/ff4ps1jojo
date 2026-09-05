#include "common.h"
extern u32 D_8019BC94;
void func_80191530(u32 v) {
    __asm__ __volatile__("lui $at, %hi(D_8019BC94)\n\tjr $ra\n\tsw $a0, %lo(D_8019BC94)($at)");
    __builtin_unreachable();
}
