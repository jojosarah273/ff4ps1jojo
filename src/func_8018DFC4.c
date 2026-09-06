#include "common.h"
__asm__(
  ".globl func_8018DFC4\n"
  ".type func_8018DFC4, @function\n"
  "func_8018DFC4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801F67A4)\n\tlw $v0, %lo(D_801F67A4)($v0)\n\tnop\n\tbeq $a0, $v0, .L8018DFE0\n\tnop\n\tlui $at, %hi(D_801F67A4)\n\tsw $a0, %lo(D_801F67A4)($at)\n\t.L8018DFE0:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018DFC4, .-func_8018DFC4\n"
);
