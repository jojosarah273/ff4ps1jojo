#include "common.h"
__asm__(
  ".globl func_8014BA34\n"
  ".type func_8014BA34, @function\n"
  "func_8014BA34:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddu $a0, $zero, $zero\n\txori $v0, $v0, 0x80\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3523\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6564\n\tori $a0, $zero, 0xF397\n\tjal func_8014DA2C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014BA34, .-func_8014BA34\n"
);
