#include "common.h"
__asm__(
  ".globl func_8017E740\n"
  ".type func_8017E740, @function\n"
  "func_8017E740:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddiu $s1, $a0, 0x114\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $a0, 0x70\n\tsw $s2, 0x18($sp)\n\taddiu $s2, $zero, 0x28\n\tsw $ra, 0x1C($sp)\n\t.L8017E760:\n\taddu $a0, $s0, $zero\n\tjal func_80197208\n\taddu $a1, $s1, $zero\n\taddiu $s2, $s2, -0x1\n\taddiu $s0, $s0, 0x4\n\tbgez $s2, .L8017E760\n\taddiu $s1, $s1, 0xC\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017E740, .-func_8017E740\n"
);
