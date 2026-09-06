#include "common.h"
__asm__(
  ".globl func_8018DFA0\n"
  ".type func_8018DFA0, @function\n"
  "func_8018DFA0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801F67A8)\n\tlw $v0, %lo(D_801F67A8)($v0)\n\tnop\n\tbeq $a0, $v0, .L8018DFBC\n\tnop\n\tlui $at, %hi(D_801F67A8)\n\tsw $a0, %lo(D_801F67A8)($at)\n\t.L8018DFBC:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018DFA0, .-func_8018DFA0\n"
);
