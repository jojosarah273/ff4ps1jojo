#include "common.h"
__asm__(
  ".globl func_80196898\n"
  ".type func_80196898, @function\n"
  "func_80196898:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801928E8\n\taddiu $a0, $zero, -0x1\n\taddiu $v0, $v0, 0xF0\n\tlui $at, %hi(D_8019DC90)\n\tsw $v0, %lo(D_8019DC90)($at)\n\tlui $at, %hi(D_8019DC94)\n\tsw $zero, %lo(D_8019DC94)($at)\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196898, .-func_80196898\n"
);
