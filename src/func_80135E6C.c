#include "common.h"
__asm__(
  ".globl func_80135E6C\n"
  ".type func_80135E6C, @function\n"
  "func_80135E6C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80135E74:\n\tlui $a0, %hi(D_8019EE0C)\n\tlw $a0, %lo(D_8019EE0C)($a0)\n\tjal func_80197688\n\tnop\n\tbnez $v0, .L80135ED4\n\taddu $v0, $zero, $zero\n\tlui $a0, %hi(D_8019EE1C)\n\tlw $a0, %lo(D_8019EE1C)($a0)\n\tjal func_80197688\n\tnop\n\tbnez $v0, .L80135ED4\n\taddiu $v0, $zero, 0x1\n\tlui $a0, %hi(D_8019EE38)\n\tlw $a0, %lo(D_8019EE38)($a0)\n\tjal func_80197688\n\tnop\n\tbnez $v0, .L80135ED4\n\taddiu $v0, $zero, 0x2\n\tlui $a0, %hi(D_8019EDF8)\n\tlw $a0, %lo(D_8019EDF8)($a0)\n\tjal func_80197688\n\tnop\n\tbeqz $v0, .L80135E74\n\taddiu $v0, $zero, 0x3\n\t.L80135ED4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80135E6C, .-func_80135E6C\n"
);
