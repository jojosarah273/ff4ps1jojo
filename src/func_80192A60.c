#include "common.h"
__asm__(
  ".globl func_80192A60\n"
  ".type func_80192A60, @function\n"
  "func_80192A60:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsll $a1, $a1, 15\n\tsw $a1, 0x10($sp)\n\tlui $v0, %hi(D_8019CF34)\n\tlw $v0, %lo(D_8019CF34)($v0)\n\tnop\n\tslt $v0, $v0, $a0\n\tbeqz $v0, .L80192AE8\n\tsw $ra, 0x18($sp)\n\taddiu $v1, $zero, -0x1\n\t.L80192A88:\n\tlw $v0, 0x10($sp)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsw $v0, 0x10($sp)\n\tlw $v0, 0x10($sp)\n\tnop\n\tbne $v0, $v1, .L80192AD0\n\tnop\n\tlui $a0, %hi(D_800F36D0)\n\tjal func_80191620\n\taddiu $a0, $a0, %lo(D_800F36D0)\n\tjal func_80197798\n\taddu $a0, $zero, $zero\n\taddiu $a0, $zero, 0x3\n\tjal func_801977B8\n\taddu $a1, $zero, $zero\n\tj .L80192AE8\n\tnop\n\t.L80192AD0:\n\tlui $v0, %hi(D_8019CF34)\n\tlw $v0, %lo(D_8019CF34)($v0)\n\tnop\n\tslt $v0, $v0, $a0\n\tbnez $v0, .L80192A88\n\tnop\n\t.L80192AE8:\n\tlw $ra, 0x18($sp)\n\taddiu $sp, $sp, 0x20\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192A60, .-func_80192A60\n"
);
