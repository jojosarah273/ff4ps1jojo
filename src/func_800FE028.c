#include "common.h"
__asm__(
  ".globl func_800FE028\n"
  ".type func_800FE028, @function\n"
  "func_800FE028:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x80\n\tsw $ra, 0x14($sp)\n\tjal func_800F654C\n\tsw $s0, 0x10($sp)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $s0, %hi(D_801CFD68)\n\t.L800FE050:\n\tlui $a0, (0x7F5800 >> 16)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tori $a0, $a0, (0x7F5800 & 0xFFFF)\n\tlhu $v0, 0x0($v1)\n\taddiu $a1, $s0, %lo(D_801CFD68)\n\taddiu $v0, $v0, 0x2000\n\tsll $v0, $v0, 1\n\taddu $v0, $v0, $a1\n\tlhu $v1, 0x0($v0)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tsrl $v1, $v1, 8\n\tjal func_800F885C\n\tsb $v1, 0x0($a1)\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x100\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FE050\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x7F5900 >> 16)\n\t.L800FE0B0:\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tori $a0, $a0, (0x7F5900 & 0xFFFF)\n\tlhu $v0, 0x0($v1)\n\taddiu $a1, $s0, %lo(D_801CFD68)\n\taddiu $v0, $v0, 0x1E80\n\tsll $v0, $v0, 1\n\taddu $v0, $v0, $a1\n\tlhu $v1, 0x0($v0)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tsrl $v1, $v1, 8\n\tjal func_800F885C\n\tsb $v1, 0x0($a1)\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x100\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FE0B0\n\tlui $a0, (0x7F5900 >> 16)\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FE028, .-func_800FE028\n"
);
