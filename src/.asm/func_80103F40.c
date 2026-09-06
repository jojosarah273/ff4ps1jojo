#include "common.h"
__asm__(
  ".globl func_80103F40\n"
  ".type func_80103F40, @function\n"
  "func_80103F40:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x14FAE6 >> 16)\n\t.L80103F54:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FAE6 & 0xFFFF)\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x300\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80103F54\n\tlui $a0, (0x14FAE6 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103F40, .-func_80103F40\n"
);
