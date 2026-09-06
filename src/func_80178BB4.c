#include "common.h"
__asm__(
  ".globl func_80178BB4\n"
  ".type func_80178BB4, @function\n"
  "func_80178BB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, %hi(D_8019EE90)\n\taddiu $a0, $a0, %lo(D_8019EE90)\n\taddiu $v0, $zero, 0x100\n\taddiu $v1, $zero, 0x1E0\n\taddiu $a1, $zero, 0x8\n\taddiu $a2, $zero, 0x8\n\tsw $ra, 0x10($sp)\n\tlui $at, %hi(D_8019EE90)\n\tsh $zero, %lo(D_8019EE90)($at)\n\tlui $at, %hi(D_8019EE92)\n\tsh $zero, %lo(D_8019EE92)($at)\n\tlui $at, %hi(D_8019EE94)\n\tsh $v0, %lo(D_8019EE94)($at)\n\tlui $at, %hi(D_8019EE96)\n\tsh $v1, %lo(D_8019EE96)($at)\n\tjal func_80194518\n\taddiu $a3, $zero, 0x8\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80178BB4, .-func_80178BB4\n"
);
