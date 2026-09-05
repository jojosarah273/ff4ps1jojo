#include "common.h"
__asm__(
  ".globl func_8010DF98\n"
  ".type func_8010DF98, @function\n"
  "func_8010DF98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8010DFA8:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xB\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010DFE8\n\tnop\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x1003\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tj .L8010E000\n\tnop\n\t.L8010DFE8:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1003\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\t.L8010E000:\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1007\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x1008\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x1004\n\tjal func_80117DF8\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x140\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010DFA8\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010DF98, .-func_8010DF98\n"
);
