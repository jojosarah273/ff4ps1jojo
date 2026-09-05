#include "common.h"
__asm__(
  ".globl func_80192020\n"
  ".type func_80192020, @function\n"
  "func_80192020:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_8019BD94)\n\taddiu $s0, $s0, %lo(D_8019BD94)\n\tsw $ra, 0x14($sp)\n\tlw $v0, 0x10($s0)\n\tlw $v1, 0x8($s0)\n\tsll $v0, $v0, 2\n\taddu $v1, $v1, $v0\n\tsw $v1, 0x8($s0)\n\tlw $v0, 0x14($s0)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsw $v0, 0x14($s0)\n\tlw $v0, 0x20($s0)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsw $v0, 0x20($s0)\n\tlw $v0, 0x14($s0)\n\tnop\n\tbnez $v0, .L801920E0\n\tnop\n\tlw $a0, 0x2C($s0)\n\tjal func_80191858\n\tnop\n\tlui $v0, %hi(D_8019B9C8)\n\tlw $v0, %lo(D_8019B9C8)($v0)\n\tnop\n\tandi $v0, $v0, 0x1\n\tbeqz $v0, .L801920A8\n\tnop\n\tlw $a0, 0x30($s0)\n\tjal func_80192858\n\tnop\n\t.L801920A8:\n\tlui $a0, %hi(func_80191D78)\n\tjal func_80191838\n\taddiu $a0, $a0, %lo(func_80191D78)\n\taddiu $a0, $zero, 0x9\n\tjal func_801919B4\n\taddu $a1, $zero, $zero\n\tlui $v1, %hi(D_8019B9C4)\n\tlw $v1, %lo(D_8019B9C4)($v1)\n\taddiu $v0, $zero, 0x1\n\tbeqz $v1, .L801920E0\n\tsw $v0, 0x24($s0)\n\tlw $a1, 0x34($s0)\n\tjalr $v1\n\taddiu $a0, $zero, 0x2\n\t.L801920E0:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192020, .-func_80192020\n"
);
