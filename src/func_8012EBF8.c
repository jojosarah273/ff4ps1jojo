#include "common.h"
__asm__(
  ".globl func_8012EBF8\n"
  ".type func_8012EBF8, @function\n"
  "func_8012EBF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801210AC\n\tnop\n\tlui $v0, %hi(D_801991C0)\n\tlhu $a0, %lo(D_801991C0)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FB74\n\tnop\n\tjal func_801263F0\n\tnop\n\tjal func_8011FF40\n\tnop\n\tjal func_801263C8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012EBF8, .-func_8012EBF8\n"
);
