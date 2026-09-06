#include "common.h"
__asm__(
  ".globl func_8011B448\n"
  ".type func_8011B448, @function\n"
  "func_8011B448:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xBC\n\t.L8011B458:\n\tjal func_800F6364\n\tnop\n\tlui $a0, (0x139C00 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x139C00 & 0xFFFF)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8011B458\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xBC\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011B448, .-func_8011B448\n"
);
