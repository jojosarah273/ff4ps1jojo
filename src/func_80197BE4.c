#include "common.h"
__asm__(
  ".globl func_80197BE4\n"
  ".type func_80197BE4, @function\n"
  "func_80197BE4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_801976E8\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x1\n\tlui $v1, %hi(D_801FEBEC)\n\taddiu $v1, $v1, %lo(D_801FEBEC)\n\taddiu $s0, $v1, -0x4\n\tlui $v0, %hi(func_80197C5C)\n\taddiu $v0, $v0, %lo(func_80197C5C)\n\tsw $v0, 0x0($v1)\n\tlui $v0, %hi(func_80197CC4)\n\taddiu $v0, $v0, %lo(func_80197CC4)\n\tsw $v0, 0x4($v1)\n\tlui $at, %hi(D_801FEBE8)\n\tsw $zero, %lo(D_801FEBE8)($at)\n\tlui $at, %hi(D_801FEBF4)\n\tsw $zero, %lo(D_801FEBF4)($at)\n\tjal func_80197D48\n\taddu $a1, $s0, $zero\n\taddiu $a0, $zero, 0x1\n\tjal func_80197D38\n\taddu $a1, $s0, $zero\n\tjal func_801976F8\n\tnop\n\taddiu $v0, $zero, 0x1\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197BE4, .-func_80197BE4\n"
);
