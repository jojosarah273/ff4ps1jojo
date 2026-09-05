#include "common.h"
__asm__(
  ".globl func_80160AAC\n"
  ".type func_80160AAC, @function\n"
  "func_80160AAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2726\n\tjal func_800F4280\n\taddiu $a0, $zero, 0x28A2\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80160B1C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38FE\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2726\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x40\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80160B7C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x84\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38FE\n\tj .L80160B7C\n\tnop\n\t.L80160B1C:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2725\n\tjal func_800F4280\n\taddiu $a0, $zero, 0x28A2\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80160B7C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38FE\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2725\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x40\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80160B7C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x82\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38FE\n\t.L80160B7C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80160AAC, .-func_80160AAC\n"
);
