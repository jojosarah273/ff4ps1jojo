#include "common.h"
__asm__(
  ".globl func_800FBF50\n"
  ".type func_800FBF50, @function\n"
  "func_800FBF50:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddiu $a0, $zero, 0x80\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F654C\n\tsw $s0, 0x10($sp)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x47\n\taddiu $a0, $zero, 0x3D\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $s1, 0x0($v0)\n\tjal func_800F7270\n\tlui $s2, %hi(D_801CFD68)\n\t.L800FBF94:\n\tjal func_800F6C68\n\tlui $a0, (0x80000 >> 16)\n\tlui $a0, (0x80001 >> 16)\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $s0, 0x0($v0)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x80001 & 0xFFFF)\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tlw $a0, %gp_rel(D_8019ED54)($gp)\n\tlbu $v0, 0x0($v1)\n\taddiu $v1, $s2, %lo(D_801CFD68)\n\tsll $v0, $v0, 8\n\tor $s0, $s0, $v0\n\tsll $v0, $s1, 1\n\taddu $v0, $v0, $v1\n\taddiu $v1, $s1, 0x1\n\tsh $s0, 0x0($v0)\n\tlhu $v0, 0x0($a0)\n\tandi $s1, $v1, 0xFFFF\n\taddiu $v0, $v0, 0x2\n\tsh $v0, 0x0($a0)\n\tlw $v1, %gp_rel(D_8019ED5C)($gp)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4248\n\tsb $v0, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FBF94\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F971C\n\tnop\n\tjal func_800F3D48\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $v1, %gp_rel(D_8019ED58)($gp)\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlhu $v0, 0x0($v1)\n\tlw $s0, 0x10($sp)\n\taddiu $v0, $v0, 0x2\n\tsh $v0, 0x0($v1)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FBF50, .-func_800FBF50\n"
);
