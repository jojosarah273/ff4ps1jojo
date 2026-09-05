#include "common.h"
__asm__(
  ".globl func_8010CA74\n"
  ".type func_8010CA74, @function\n"
  "func_8010CA74:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAE\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x9D1\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x9CF\n\tlui $a0, (0x138300 >> 16)\n\t.L8010CA98:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x138300 & 0xFFFF)\n\tjal func_8010D61C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x9CF\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x9CF\n\taddiu $v0, $v0, 0x4\n\tjal func_800F8D00\n\tsh $v0, 0x0($v1)\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xAE\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAE\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xC\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010CA98\n\tlui $a0, (0x138300 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010CA74, .-func_8010CA74\n"
);
