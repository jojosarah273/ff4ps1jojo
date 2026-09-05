#include "common.h"
__asm__(
  ".globl func_8018CAD8\n"
  ".type func_8018CAD8, @function\n"
  "func_8018CAD8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B0A4)\n\tlw $v0, %lo(D_8019B0A4)($v0)\n\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $zero, 0x1\n\tbeq $v0, $s0, .L8018CB10\n\tsw $ra, 0x18($sp)\n\tlui $v0, %hi(D_8019B148)\n\tlw $v0, %lo(D_8019B148)($v0)\n\tnop\n\tbne $v0, $s0, .L8018CB18\n\tnop\n\t.L8018CB10:\n\tj .L8018CB68\n\taddiu $v0, $zero, 0x1\n\t.L8018CB18:\n\tlui $a0, %hi(D_8019B09C)\n\tlw $a0, %lo(D_8019B09C)($a0)\n\tjal func_80197688\n\tnop\n\tbne $s1, $s0, .L8018CB58\n\tnop\n\tbnez $v0, .L8018CB60\n\taddiu $v0, $zero, 0x1\n\t.L8018CB38:\n\tlui $a0, %hi(D_8019B09C)\n\tlw $a0, %lo(D_8019B09C)($a0)\n\tjal func_80197688\n\tnop\n\tbeqz $v0, .L8018CB38\n\taddiu $v0, $zero, 0x1\n\tj .L8018CB60\n\tnop\n\t.L8018CB58:\n\tbne $v0, $s0, .L8018CB68\n\tnop\n\t.L8018CB60:\n\tlui $at, %hi(D_8019B148)\n\tsw $v0, %lo(D_8019B148)($at)\n\t.L8018CB68:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018CAD8, .-func_8018CAD8\n"
);
