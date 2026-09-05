#include "common.h"
__asm__(
  ".globl func_80139A24\n"
  ".type func_80139A24, @function\n"
  "func_80139A24:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFFA8\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x99\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x1BCC\n\tjal func_80120E2C\n\tnop\n\tlui $v0, %hi(D_80199250)\n\tlhu $a0, %lo(D_80199250)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_80126528\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x38\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE2\n\tjal func_801399EC\n\tnop\n\tjal func_80139184\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1BCC\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80139A24, .-func_80139A24\n"
);
