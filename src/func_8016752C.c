#include "common.h"
__asm__(
  ".globl func_8016752C\n"
  ".type func_8016752C, @function\n"
  "func_8016752C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\tjal func_80168B94\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F8188\n\tori $a0, $zero, 0xF433\n\tjal func_800F8188\n\tori $a0, $zero, 0xF435\n\tjal func_800F8188\n\tori $a0, $zero, 0xF434\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE0\n\tjal func_800F8188\n\tori $a0, $zero, 0xEF88\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\tori $a0, $zero, 0xF49B\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8188\n\tori $a0, $zero, 0xEF87\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016752C, .-func_8016752C\n"
);
