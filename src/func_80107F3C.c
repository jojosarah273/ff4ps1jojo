#include "common.h"
__asm__(
  ".globl func_80107F3C\n"
  ".type func_80107F3C, @function\n"
  "func_80107F3C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80107F44:\n\tjal func_800FE778\n\tnop\n\t.L80107F4C:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80107F4C\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80107F44\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xEC\n\tjal func_800FE778\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xDF\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80107F3C, .-func_80107F3C\n"
);
