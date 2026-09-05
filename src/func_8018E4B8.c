#include "common.h"
__asm__(
  ".globl func_8018E4B8\n"
  ".type func_8018E4B8, @function\n"
  "func_8018E4B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B14C)\n\tlw $v0, %lo(D_8019B14C)($v0)\n\tnop\n\tbeq $a0, $v0, .L8018E4D4\n\tnop\n\tlui $at, %hi(D_8019B14C)\n\tsw $a0, %lo(D_8019B14C)($at)\n\t.L8018E4D4:\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018E4B8, .-func_8018E4B8\n"
);
