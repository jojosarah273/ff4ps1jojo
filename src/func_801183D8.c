#include "common.h"
__asm__(
  ".globl func_801183D8\n"
  ".type func_801183D8, @function\n"
  "func_801183D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xB3\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x9D5\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xB\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80118418\n\tnop\n\tjal func_80118428\n\tnop\n\t.L80118418:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801183D8, .-func_801183D8\n"
);
