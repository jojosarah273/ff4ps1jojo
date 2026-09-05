#include "common.h"
__asm__(
  ".globl func_80196DCC\n"
  ".type func_80196DCC, @function\n"
  "func_80196DCC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019DB56)\n\tlbu $v0, %lo(D_8019DB56)($v0)\n\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsltiu $v0, $v0, 0x2\n\tbnez $v0, .L80196E08\n\tsw $ra, 0x14($sp)\n\tlui $a0, %hi(D_800F39A0)\n\taddiu $a0, $a0, %lo(D_800F39A0)\n\tlui $v0, %hi(D_8019DB50)\n\tlw $v0, %lo(D_8019DB50)($v0)\n\tnop\n\tjalr $v0\n\taddu $a1, $s0, $zero\n\t.L80196E08:\n\tjal func_801928E8\n\taddiu $a0, $zero, -0x1\n\tlui $v1, %hi(D_8019DC68)\n\tlw $v1, %lo(D_8019DC68)($v1)\n\taddiu $v0, $v0, 0xF0\n\tlui $at, %hi(D_8019DC90)\n\tsw $v0, %lo(D_8019DC90)($at)\n\tlui $at, %hi(D_8019DC94)\n\tsw $zero, %lo(D_8019DC94)($at)\n\tlw $v0, 0x0($v1)\n\tj .L80196E5C\n\tlui $v1, (0x1000000 >> 16)\n\t.L80196E38:\n\tjal func_801968CC\n\tnop\n\tbnez $v0, .L80196EB8\n\taddiu $v0, $zero, -0x1\n\tlui $v0, %hi(D_8019DC68)\n\tlw $v0, %lo(D_8019DC68)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tlui $v1, (0x1000000 >> 16)\n\t.L80196E5C:\n\tand $v0, $v0, $v1\n\tbnez $v0, .L80196E38\n\tnop\n\tlui $v0, %hi(D_8019DC5C)\n\tlw $v0, %lo(D_8019DC5C)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tlui $v1, (0x4000000 >> 16)\n\tand $v0, $v0, $v1\n\tbeqz $v0, .L80196E38\n\tnop\n\tlui $a1, %hi(func_80196EC8)\n\taddiu $a1, $a1, %lo(func_80196EC8)\n\tjal func_80192B58\n\taddiu $a0, $zero, 0x2\n\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\tnop\n\tlw $v0, 0x18($v0)\n\tnop\n\tjalr $v0\n\taddu $a0, $s0, $zero\n\taddu $v0, $zero, $zero\n\t.L80196EB8:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196DCC, .-func_80196DCC\n"
);
