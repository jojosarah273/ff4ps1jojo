#include "common.h"
__asm__(
  ".globl func_80110F2C\n"
  ".type func_80110F2C, @function\n"
  "func_80110F2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1705\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x58\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x60\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2E\n\tjal func_80111BBC\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x24\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80110F2C, .-func_80110F2C\n"
);
