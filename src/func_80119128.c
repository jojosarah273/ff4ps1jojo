#include "common.h"
__asm__(
  ".globl func_80119128\n"
  ".type func_80119128, @function\n"
  "func_80119128:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80119148:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1003\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1003\n\tjal func_80117DF8\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x140\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80119148\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xCC\n\tjal func_800FE778\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119128, .-func_80119128\n"
);
