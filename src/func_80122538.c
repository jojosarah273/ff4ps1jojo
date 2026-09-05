#include "common.h"
__asm__(
  ".globl func_80122538\n"
  ".type func_80122538, @function\n"
  "func_80122538:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_80120E2C\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_80199190)\n\taddiu $s0, $s0, %lo(D_80199190)\n\tlhu $a0, 0x9A($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x52E\n\tjal func_801223A4\n\tnop\n\tlhu $a0, 0x7A($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x676\n\tjal func_8011F8D4\n\tnop\n\tjal func_801237A8\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x62A\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A2\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x16A0\n\tjal func_80124D08\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80122538, .-func_80122538\n"
);
