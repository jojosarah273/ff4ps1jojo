#include "common.h"
__asm__(
  ".globl func_80118428\n"
  ".type func_80118428, @function\n"
  "func_80118428:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tjal func_800F5480\n\tsb $v0, 0x0($v1)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x7\n\tjal func_800F654C\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0xFAB00 >> 16)\n\t.L8011849C:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xFAB00 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1030\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011849C\n\tlui $a0, (0xFAB00 >> 16)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x3D\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 5\n\tjal func_80150A30\n\tsb $v0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80118428, .-func_80118428\n"
);
