#include "common.h"
__asm__(
  ".globl func_8014B6E8\n"
  ".type func_8014B6E8, @function\n"
  "func_8014B6E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801442BC\n\tnop\n\tjal func_8014B98C\n\tnop\n\tjal func_80148CAC\n\tnop\n\tjal func_800953F4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C2\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x1\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L8014B738:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x29C5\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8014B7AC\n\tlui $a0, (0x16FC7E >> 16)\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\tnop\n\tsb $v1, 0x0($a1)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x16FC7E & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\t.L8014B7AC:\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014B738\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x2\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3D\n\tjal func_8014DA2C\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_8014D568\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B6E8, .-func_8014B6E8\n"
);
