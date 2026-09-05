#include "common.h"
__asm__(
  ".globl func_80189B28\n"
  ".type func_80189B28, @function\n"
  "func_80189B28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x48\n\tsw $s0, 0x38($sp)\n\taddu $s0, $a0, $zero\n\tsw $s1, 0x3C($sp)\n\taddu $s1, $a1, $zero\n\tsw $ra, 0x40($sp)\n\tjal func_8018CB88\n\taddiu $a0, $sp, 0x10\n\tlh $v0, 0x14($sp)\n\tnop\n\tbgez $v0, .L80189B5C\n\tnop\n\taddiu $v0, $v0, 0x7F\n\t.L80189B5C:\n\tlh $v1, 0x16($sp)\n\tsra $v0, $v0, 7\n\tbgez $v1, .L80189B70\n\tsh $v0, 0x0($s0)\n\taddiu $v1, $v1, 0x7F\n\t.L80189B70:\n\tlw $ra, 0x40($sp)\n\tsra $v0, $v1, 7\n\tsh $v0, 0x0($s1)\n\tlw $s1, 0x3C($sp)\n\tlw $s0, 0x38($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x48\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189B28, .-func_80189B28\n"
);
