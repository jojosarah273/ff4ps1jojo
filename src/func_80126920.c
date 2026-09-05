#include "common.h"
__asm__(
  ".globl func_80126920\n"
  ".type func_80126920, @function\n"
  "func_80126920:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_801268C0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F971C\n\tnop\n\t.L80126950:\n\tjal func_800F8768\n\tori $a0, $zero, 0xA000\n\tjal func_800F6364\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80126950\n\tnop\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80126920, .-func_80126920\n"
);
