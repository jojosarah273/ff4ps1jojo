#include "common.h"
__asm__(
  ".globl func_80125A64\n"
  ".type func_80125A64, @function\n"
  "func_80125A64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\t.L80125A74:\n\tjal func_8011F320\n\tnop\n\tjal func_80125ACC\n\tnop\n\tjal func_80125F38\n\tnop\n\tjal func_800F61E8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80125A74\n\tnop\n\tjal func_8011F320\n\tnop\n\tjal func_8011EF0C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80125A64, .-func_80125A64\n"
);
