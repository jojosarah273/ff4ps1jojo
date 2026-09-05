#include "common.h"
__asm__(
  ".globl func_8018E2C8\n"
  ".type func_8018E2C8, @function\n"
  "func_8018E2C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tbeqz $a0, .L8018E2E0\n\tsw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x3\n\tbne $a0, $v0, .L8018E35C\n\taddiu $v0, $zero, 0x1\n\t.L8018E2E0:\n\tlui $v0, %hi(D_8019B114)\n\tlw $v0, %lo(D_8019B114)($v0)\n\tnop\n\tlhu $v1, 0x1AA($v0)\n\tnop\n\tandi $v1, $v1, 0xFFBF\n\tsh $v1, 0x1AA($v0)\n\tlhu $v0, 0x1AA($v0)\n\tnop\n\tandi $v0, $v0, 0x40\n\tbeqz $v0, .L8018E358\n\taddu $v1, $zero, $zero\n\taddiu $v1, $v1, 0x1\n\t.L8018E314:\n\tsltiu $v0, $v1, 0xF01\n\tbnez $v0, .L8018E334\n\tnop\n\tlui $a0, %hi(D_800F3160)\n\taddiu $a0, $a0, %lo(D_800F3160)\n\tlui $a1, %hi(D_800F3170)\n\tj .L8018E3BC\n\taddiu $a1, $a1, %lo(D_800F3170)\n\t.L8018E334:\n\tlui $v0, %hi(D_8019B114)\n\tlw $v0, %lo(D_8019B114)($v0)\n\tnop\n\tlhu $v0, 0x1AA($v0)\n\tnop\n\tandi $v0, $v0, 0x40\n\tbnez $v0, .L8018E314\n\taddiu $v1, $v1, 0x1\n\taddiu $v1, $v1, -0x1\n\t.L8018E358:\n\taddiu $v0, $zero, 0x1\n\t.L8018E35C:\n\tbeq $a0, $v0, .L8018E36C\n\taddiu $v0, $zero, 0x3\n\tbne $a0, $v0, .L8018E3F4\n\taddu $v0, $a0, $zero\n\t.L8018E36C:\n\tlui $v0, %hi(D_8019B114)\n\tlw $v0, %lo(D_8019B114)($v0)\n\tnop\n\tlhu $v1, 0x1AA($v0)\n\tnop\n\tori $v1, $v1, 0x40\n\tsh $v1, 0x1AA($v0)\n\tlhu $v0, 0x1AA($v0)\n\tnop\n\tandi $v0, $v0, 0x40\n\tbnez $v0, .L8018E3F0\n\taddu $v1, $zero, $zero\n\taddiu $v1, $v1, 0x1\n\t.L8018E3A0:\n\tsltiu $v0, $v1, 0xF01\n\tbnez $v0, .L8018E3CC\n\tnop\n\tlui $a0, %hi(D_800F3160)\n\taddiu $a0, $a0, %lo(D_800F3160)\n\tlui $a1, %hi(D_800F3180)\n\taddiu $a1, $a1, %lo(D_800F3180)\n\t.L8018E3BC:\n\tjal func_8018F0C8\n\tnop\n\tj .L8018E3F4\n\taddiu $v0, $zero, -0x1\n\t.L8018E3CC:\n\tlui $v0, %hi(D_8019B114)\n\tlw $v0, %lo(D_8019B114)($v0)\n\tnop\n\tlhu $v0, 0x1AA($v0)\n\tnop\n\tandi $v0, $v0, 0x40\n\tbeqz $v0, .L8018E3A0\n\taddiu $v1, $v1, 0x1\n\taddiu $v1, $v1, -0x1\n\t.L8018E3F0:\n\taddu $v0, $a0, $zero\n\t.L8018E3F4:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018E2C8, .-func_8018E2C8\n"
);
