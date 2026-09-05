#include "common.h"
__asm__(
  ".globl func_8017953C\n"
  ".type func_8017953C, @function\n"
  "func_8017953C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\taddiu $a0, $sp, 0x10\n\taddiu $a1, $zero, 0x200\n\taddu $a2, $zero, $zero\n\tsw $s0, 0x18($sp)\n\taddiu $s0, $zero, 0x100\n\tsw $s1, 0x1C($sp)\n\taddiu $s1, $zero, 0x80\n\tsw $ra, 0x20($sp)\n\tsh $s0, 0x10($sp)\n\tsh $s0, 0x12($sp)\n\tsh $s0, 0x14($sp)\n\tjal func_80194700\n\tsh $s1, 0x16($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\taddiu $a0, $sp, 0x10\n\taddiu $a1, $zero, 0x200\n\taddiu $a2, $zero, 0x100\n\taddiu $v0, $zero, 0x180\n\tsh $s0, 0x10($sp)\n\tsh $v0, 0x12($sp)\n\tsh $s0, 0x14($sp)\n\tjal func_80194700\n\tsh $s1, 0x16($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017953C, .-func_8017953C\n"
);
