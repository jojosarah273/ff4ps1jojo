#include "common.h"
__asm__(
  ".globl func_80135298\n"
  ".type func_80135298, @function\n"
  "func_80135298:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_80199208)\n\tlhu $a0, %lo(D_80199208)($v0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_80120F1C\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1A4\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A2\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x16A0\n\tjal func_80124D08\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80135298, .-func_80135298\n"
);
