#include "common.h"
__asm__(
  ".globl func_800FC1CC\n"
  ".type func_800FC1CC, @function\n"
  "func_800FC1CC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x3F\n\tsw $ra, 0x14($sp)\n\tjal func_800F654C\n\tsw $s0, 0x10($sp)\n\tjal func_800FD804\n\tlui $s0, %hi(D_80198A68)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x212C\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\t.L800FC200:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F7864\n\tnop\n\tjal func_800F9690\n\tnop\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\taddiu $a0, $s0, %lo(D_80198A68)\n\tlhu $v1, 0x0($v0)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\taddu $v1, $v1, $a0\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2106\n\tjal func_800F8188\n\tsb $v0, 0x0($a1)\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2A\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FC200\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xC6\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FC294\n\tnop\n\tjal func_800FD37C\n\tnop\n\t.L800FC294:\n\tjal func_800FC2AC\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FC1CC, .-func_800FC1CC\n"
);
