#include "common.h"
__asm__(
  ".globl func_80187608\n"
  ".type func_80187608, @function\n"
  "func_80187608:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x40\n\tsw $ra, 0x38($sp)\n\tjal func_80188C58\n\taddiu $a0, $zero, 0x1\n\taddiu $a0, $sp, 0x10\n\taddiu $v0, $zero, 0x3CF\n\taddiu $v1, $zero, 0x3F80\n\tsw $v0, 0x10($sp)\n\taddiu $v0, $zero, 0x1\n\tsh $v1, 0x14($sp)\n\tsh $v1, 0x16($sp)\n\tsh $zero, 0x18($sp)\n\tsh $zero, 0x1A($sp)\n\tsh $v1, 0x20($sp)\n\tsh $v1, 0x22($sp)\n\tsw $zero, 0x24($sp)\n\tjal func_8018ECE8\n\tsw $v0, 0x28($sp)\n\tjal func_80188C58\n\taddu $a0, $zero, $zero\n\taddiu $a0, $zero, 0xFF\n\taddu $a1, $zero, $zero\n\taddiu $a2, $zero, 0xFF\n\tjal func_80188EF8\n\taddu $a3, $zero, $zero\n\tlw $ra, 0x38($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x40\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187608, .-func_80187608\n"
);
