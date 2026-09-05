#include "common.h"
__asm__(
  ".globl func_801795BC\n"
  ".type func_801795BC, @function\n"
  "func_801795BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\taddiu $a0, $sp, 0x10\n\taddiu $a1, $zero, 0x100\n\taddiu $a2, $zero, 0x100\n\tsw $s0, 0x18($sp)\n\taddiu $s0, $zero, 0x200\n\tsw $s1, 0x1C($sp)\n\taddiu $s1, $zero, 0x100\n\tsw $s2, 0x20($sp)\n\taddiu $s2, $zero, 0x80\n\tsw $ra, 0x24($sp)\n\tsh $s0, 0x10($sp)\n\tsh $zero, 0x12($sp)\n\tsh $s1, 0x14($sp)\n\tjal func_80194700\n\tsh $s2, 0x16($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\taddiu $a0, $sp, 0x10\n\taddiu $a1, $zero, 0x100\n\taddiu $a2, $zero, 0x180\n\tsh $s0, 0x10($sp)\n\tsh $s1, 0x12($sp)\n\tsh $s1, 0x14($sp)\n\tjal func_80194700\n\tsh $s2, 0x16($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\taddiu $a0, $sp, 0x10\n\taddu $a1, $zero, $zero\n\taddu $a2, $zero, $zero\n\taddu $a3, $zero, $zero\n\tsh $s1, 0x10($sp)\n\tsh $zero, 0x12($sp)\n\tsh $s1, 0x14($sp)\n\tjal func_80194518\n\tsh $s1, 0x16($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x24($sp)\n\tlw $s2, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801795BC, .-func_801795BC\n"
);
