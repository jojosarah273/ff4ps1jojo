#include "common.h"
__asm__(
  ".globl func_8010F484\n"
  ".type func_8010F484, @function\n"
  "func_8010F484:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8010F494:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xE1B\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xE3B\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010F494\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010F484, .-func_8010F484\n"
);
