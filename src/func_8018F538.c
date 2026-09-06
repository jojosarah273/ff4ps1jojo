#include "common.h"
__asm__(
  ".globl func_8018F538\n"
  ".type func_8018F538, @function\n"
  "func_8018F538:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $zero, 0x4\n\tsw $ra, 0x14($sp)\n\t.L8018F548:\n\tjal func_8018F5C8\n\tnop\n\taddiu $v1, $zero, 0x1\n\tbne $v0, $v1, .L8018F598\n\taddiu $v0, $zero, 0x1\n\tlui $v1, %hi(func_8018F604)\n\taddiu $v1, $v1, %lo(func_8018F604)\n\tlui $at, %hi(D_8019B9EC)\n\tsw $v1, %lo(D_8019B9EC)($at)\n\tlui $v1, %hi(func_8018F62C)\n\taddiu $v1, $v1, %lo(func_8018F62C)\n\tlui $at, %hi(D_8019B9F0)\n\tsw $v1, %lo(D_8019B9F0)($at)\n\tlui $v1, %hi(func_8018F654)\n\taddiu $v1, $v1, %lo(func_8018F654)\n\tlui $at, %hi(D_8019B9C4)\n\tsw $v1, %lo(D_8019B9C4)($at)\n\tlui $at, %hi(D_8019B9C8)\n\tj .L8018F5B8\n\tsw $zero, %lo(D_8019B9C8)($at)\n\t.L8018F598:\n\taddiu $s0, $s0, -0x1\n\taddiu $v0, $zero, -0x1\n\tbne $s0, $v0, .L8018F548\n\tnop\n\tlui $a0, %hi(D_800F3210)\n\tjal func_8018F0C8\n\taddiu $a0, $a0, %lo(D_800F3210)\n\taddu $v0, $zero, $zero\n\t.L8018F5B8:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F538, .-func_8018F538\n"
);
