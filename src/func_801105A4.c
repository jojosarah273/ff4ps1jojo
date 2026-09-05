#include "common.h"
__asm__(
  ".globl func_801105A4\n"
  ".type func_801105A4, @function\n"
  "func_801105A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x14F58E >> 16)\n\t.L801105B8:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14F58E & 0xFFFF)\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x340\n\tlui $a0, (0x14F58F >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14F58F & 0xFFFF)\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xE\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x341\n\tlui $a0, (0x14F590 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14F590 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x342\n\tlui $a0, (0x14F591 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14F591 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x343\n\tjal func_800FC0DC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x18\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801105B8\n\tlui $a0, (0x14F58E >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801105A4, .-func_801105A4\n"
);
