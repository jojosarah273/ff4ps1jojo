#include "common.h"
__asm__(
  ".globl func_80123908\n"
  ".type func_80123908, @function\n"
  "func_80123908:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1D\n\tjal func_8011F360\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80123940\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\t.L80123940:\n\tjal func_80123878\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80123908, .-func_80123908\n"
);
