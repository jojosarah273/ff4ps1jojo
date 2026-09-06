#include "common.h"
__asm__(
  ".globl func_8012807C\n"
  ".type func_8012807C, @function\n"
  "func_8012807C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFE28\n\tjal func_800F7500\n\tori $a0, $zero, 0xA160\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x9F\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0x7E7E\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_8011F320\n\tnop\n\tjal func_8011EF0C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012807C, .-func_8012807C\n"
);
