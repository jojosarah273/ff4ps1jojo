#include "common.h"
__asm__(
  ".globl func_80135DE4\n"
  ".type func_80135DE4, @function\n"
  "func_80135DE4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a0, %hi(D_8019EE0C)\n\tlw $a0, %lo(D_8019EE0C)($a0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80197688\n\tnop\n\tbnez $v0, .L80135E5C\n\taddu $v0, $zero, $zero\n\tlui $a0, %hi(D_8019EE1C)\n\tlw $a0, %lo(D_8019EE1C)($a0)\n\tjal func_80197688\n\tnop\n\tbnez $v0, .L80135E5C\n\taddiu $v0, $zero, 0x1\n\tlui $a0, %hi(D_8019EE38)\n\tlw $a0, %lo(D_8019EE38)($a0)\n\tjal func_80197688\n\tnop\n\tbnez $v0, .L80135E58\n\tnop\n\tlui $a0, %hi(D_8019EDF8)\n\tlw $a0, %lo(D_8019EDF8)($a0)\n\tjal func_80197688\n\tnop\n\taddu $v1, $v0, $zero\n\tbnez $v1, .L80135E5C\n\taddiu $v0, $zero, 0x3\n\tj .L80135E5C\n\taddiu $v0, $zero, -0x1\n\t.L80135E58:\n\taddiu $v0, $zero, 0x2\n\t.L80135E5C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80135DE4, .-func_80135DE4\n"
);
