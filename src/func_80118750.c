#include "common.h"
__asm__(
  ".globl func_80118750\n"
  ".type func_80118750, @function\n"
  "func_80118750:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xB3\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x81\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801187A0\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x9D5\n\tjal func_801187C0\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tj .L801187B0\n\tnop\n\t.L801187A0:\n\tjal func_80118938\n\tnop\n\tjal func_8011EA5C\n\tnop\n\t.L801187B0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80118750, .-func_80118750\n"
);
