#include "common.h"
__asm__(
  ".globl func_801136D4\n"
  ".type func_801136D4, @function\n"
  "func_801136D4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\t.L801136E4:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x23\n\tjal func_800FD804\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xACF\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD0\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD1\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0xAD2\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xACD\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0xACE\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5140\n\tnop\n\tlui $a0, (0x14FC56 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x14FC56 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD4\n\tlui $a0, (0x14FC57 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FC57 & 0xFFFF)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD5\n\tjal func_80115BCC\n\tnop\n\t.L8011379C:\n\tjal func_800FE7D8\n\tnop\n\tjal func_80119AC8\n\tnop\n\tjal func_80115D2C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0xAD2\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x4\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801137E4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE5\n\t.L801137E4:\n\tjal func_800F5958\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8011379C\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801136E4\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801136D4, .-func_801136D4\n"
);
