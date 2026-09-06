#include "common.h"
__asm__(
  ".globl func_801378E0\n"
  ".type func_801378E0, @function\n"
  "func_801378E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B7A\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80137910\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3058\n\tj .L80137918\n\tnop\n\t.L80137910:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x3040\n\t.L80137918:\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x45\n\tjal func_8011F6AC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801378E0, .-func_801378E0\n"
);
