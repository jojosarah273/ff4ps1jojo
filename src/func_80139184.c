#include "common.h"
__asm__(
  ".globl func_80139184\n"
  ".type func_80139184, @function\n"
  "func_80139184:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80120E2C\n\tnop\n\tlui $v0, %hi(D_80199248)\n\tlhu $a0, %lo(D_80199248)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_801264C0\n\tnop\n\tjal func_80126528\n\tnop\n\tjal func_801391D4\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80139184, .-func_80139184\n"
);
