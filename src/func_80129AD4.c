#include "common.h"
__asm__(
  ".globl func_80129AD4\n"
  ".type func_80129AD4, @function\n"
  "func_80129AD4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801991A4)\n\tlhu $a0, %lo(D_801991A4)($v0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80129AD4, .-func_80129AD4\n"
);
