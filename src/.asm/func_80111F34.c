#include "common.h"
__asm__(
  ".globl func_80111F34\n"
  ".type func_80111F34, @function\n"
  "func_80111F34:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x172C\n\tjal func_800F7170\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80111F7C\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x172C\n\tjal func_80111FCC\n\tnop\n\t.L80111F7C:\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80111F34, .-func_80111F34\n"
);
