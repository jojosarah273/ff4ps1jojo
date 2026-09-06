#include "common.h"
__asm__(
  ".globl func_8018DFE8\n"
  ".type func_8018DFE8, @function\n"
  "func_8018DFE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801F67AC)\n\tlw $v0, %lo(D_801F67AC)($v0)\n\tnop\n\tbeq $a0, $v0, .L8018E004\n\tnop\n\tlui $at, %hi(D_801F67AC)\n\tsw $a0, %lo(D_801F67AC)($at)\n\t.L8018E004:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018DFE8, .-func_8018DFE8\n"
);
