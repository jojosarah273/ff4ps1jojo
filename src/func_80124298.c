#include "common.h"
__asm__(
  ".globl func_80124298\n"
  ".type func_80124298, @function\n"
  "func_80124298:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xE4\n\t.L801242A8:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE4\n\tjal func_80124EAC\n\tnop\n\tjal func_800F5140\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x43\n\tjal func_800F6B68\n\taddu $a0, $zero, $zero\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1A67\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE4\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5B\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1A68\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5C\n\tjal func_80124358\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xE4\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE4\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801242A8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80124298, .-func_80124298\n"
);
