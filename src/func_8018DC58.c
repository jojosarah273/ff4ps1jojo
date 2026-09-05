#include "common.h"
__asm__(
  ".globl func_8018DC58\n"
  ".type func_8018DC58, @function\n"
  "func_8018DC58:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $v1, $a0, $zero\n\tlui $v0, %hi(D_8019B584)\n\tlw $v0, %lo(D_8019B584)($v0)\n\taddu $a0, $a1, $zero\n\tbnez $v0, .L8018DC7C\n\tsw $ra, 0x10($sp)\n\tj .L8018DCC8\n\taddu $v0, $zero, $zero\n\t.L8018DC7C:\n\tlui $v0, (0xFFFFFF >> 16)\n\tori $v0, $v0, (0xFFFFFF & 0xFFFF)\n\tand $a0, $a0, $v0\n\tbeqz $a0, .L8018DCC8\n\taddiu $v0, $zero, -0x2\n\taddiu $v0, $zero, 0x4\n\tbne $v1, $v0, .L8018DCAC\n\tslti $v0, $v1, 0x4\n\tjal func_8018CFF8\n\tnop\n\tj .L8018DCC8\n\tnop\n\t.L8018DCAC:\n\tbnez $v0, .L8018DCC8\n\taddiu $v0, $zero, -0x2\n\tslti $v0, $v1, 0x7\n\tbeqz $v0, .L8018DCC8\n\taddiu $v0, $zero, -0x2\n\tjal func_8018DAB4\n\tnop\n\t.L8018DCC8:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018DC58, .-func_8018DC58\n"
);
