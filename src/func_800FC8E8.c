#include "common.h"
__asm__(
  ".globl func_800FC8E8\n"
  ".type func_800FC8E8, @function\n"
  "func_800FC8E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L800FC918:\n\tlui $a0, (0x1FEED0 >> 16)\n\t.L800FC91C:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x1FEED0 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x5800\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FC918\n\tnop\n\tlui $a0, (0x1FEED0 >> 16)\n\t.L800FC968:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x1FEED0 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x5800\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x5800\n\tjal func_800F63BC\n\tnop\n\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FC968\n\tlui $a0, (0x1FEED0 >> 16)\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x100\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FC91C\n\tlui $a0, (0x1FEED0 >> 16)\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FC8E8, .-func_800FC8E8\n"
);
