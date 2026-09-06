#include "common.h"
__asm__(
  ".globl func_80197E30\n"
  ".type func_80197E30, @function\n"
  "func_80197E30:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801976E8\n\tnop\n\tlui $a1, %hi(D_801FEBE8)\n\taddiu $a1, $a1, %lo(D_801FEBE8)\n\tjal func_80197D48\n\taddiu $a0, $zero, 0x1\n\tjal func_801976F8\n\tnop\n\tlw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x1\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197E30, .-func_80197E30\n"
);
