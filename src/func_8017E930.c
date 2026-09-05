#include "common.h"
__asm__(
  ".globl func_8017E930\n"
  ".type func_8017E930, @function\n"
  "func_8017E930:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x38\n\tsw $s3, 0x24($sp)\n\taddu $s3, $a1, $zero\n\tlui $v0, %hi(D_8019EE70)\n\tlh $v0, %lo(D_8019EE70)($v0)\n\tsll $a2, $a2, 16\n\tsw $s5, 0x2C($sp)\n\tsra $s5, $a2, 16\n\tsw $ra, 0x30($sp)\n\tsw $s4, 0x28($sp)\n\tsw $s2, 0x20($sp)\n\tsw $s1, 0x1C($sp)\n\tslti $v0, $v0, 0xF0\n\tbnez $v0, .L8017E974\n\tsw $s0, 0x18($sp)\n\tbnez $s5, .L8017EA6C\n\tnop\n\t.L8017E974:\n\tlbu $v0, 0xD($s3)\n\tnop\n\tbeqz $v0, .L8017EA6C\n\taddiu $s1, $a0, 0x70\n\taddiu $s0, $a0, 0x310\n\tlbu $v1, 0xC($s3)\n\tlui $a0, %hi(D_8019EDEC)\n\tlh $a0, %lo(D_8019EDEC)($a0)\n\tlh $a1, 0xA($s3)\n\tsll $v1, $v1, 2\n\taddu $s1, $s1, $v1\n\tsll $v0, $a0, 1\n\taddu $v0, $v0, $a0\n\tsll $v0, $v0, 2\n\taddu $s0, $s0, $v0\n\tlui $v1, %hi(D_8019EDEC)\n\tlhu $v1, %lo(D_8019EDEC)($v1)\n\tlbu $a0, 0xD($s3)\n\tlh $v0, 0x6($s3)\n\taddu $v1, $v1, $a0\n\taddu $v0, $v0, $a1\n\tslti $v0, $v0, 0xF1\n\tlui $at, %hi(D_8019EDEC)\n\tsh $v1, %lo(D_8019EDEC)($at)\n\tlhu $v1, 0x6($s3)\n\tbnez $v0, .L8017E9EC\n\taddu $a0, $s0, $zero\n\taddiu $v0, $zero, 0xF0\n\tsubu $v0, $v0, $v1\n\tsh $v0, 0xA($s3)\n\t.L8017E9EC:\n\taddiu $a1, $sp, 0x10\n\tlhu $v0, 0x4($s3)\n\tlhu $v1, 0x6($s3)\n\tlhu $a2, 0x8($s3)\n\tlhu $a3, 0xA($s3)\n\taddiu $v0, $v0, 0x100\n\tsh $v0, 0x10($sp)\n\tsh $v1, 0x12($sp)\n\tsh $a2, 0x14($sp)\n\tjal func_80195120\n\tsh $a3, 0x16($sp)\n\tlbu $v0, 0xD($s3)\n\tnop\n\tbeqz $v0, .L8017EA58\n\tlui $s2, (0x10000 >> 16)\n\tlui $s4, (0x10000 >> 16)\n\t.L8017EA2C:\n\taddu $a0, $s1, $zero\n\tjal func_80197208\n\taddu $a1, $s0, $zero\n\taddu $v1, $s2, $zero\n\taddu $s2, $s2, $s4\n\taddiu $s1, $s1, 0x4\n\tlbu $v0, 0xD($s3)\n\tsra $v1, $v1, 16\n\tslt $v0, $v1, $v0\n\tbnez $v0, .L8017EA2C\n\taddiu $s0, $s0, 0xC\n\t.L8017EA58:\n\tlhu $v0, 0x6($s3)\n\tnop\n\taddu $v0, $s5, $v0\n\tlui $at, %hi(D_8019EE70)\n\tsh $v0, %lo(D_8019EE70)($at)\n\t.L8017EA6C:\n\tlw $ra, 0x30($sp)\n\tlw $s5, 0x2C($sp)\n\tlw $s4, 0x28($sp)\n\tlw $s3, 0x24($sp)\n\tlw $s2, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x38\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017E930, .-func_8017E930\n"
);
