#include "common.h"
__asm__(
  ".globl func_801190A8\n"
  ".type func_801190A8, @function\n"
  "func_801190A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L801190C8:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1003\n\tjal func_800F4370\n\taddiu $a0, $zero, 0x6\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1003\n\tjal func_80117DF8\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x140\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801190C8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xCC\n\tjal func_800FE778\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801190A8, .-func_801190A8\n"
);
