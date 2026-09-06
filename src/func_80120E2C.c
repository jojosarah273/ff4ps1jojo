#include "common.h"
__asm__(
  ".globl func_80120E2C\n"
  ".type func_80120E2C, @function\n"
  "func_80120E2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F9330\n\tnop\n\tjal func_800F71DC\n\tori $a0, $zero, 0xD600\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x7000\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x35\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC3\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x34\n\tjal func_800F95A0\n\tnop\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80120E2C, .-func_80120E2C\n"
);
