#include "common.h"
__asm__(
  ".globl func_8011ACAC\n"
  ".type func_8011ACAC, @function\n"
  "func_8011ACAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xA49\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB2\n\tjal func_80107FC4\n\tnop\n\tjal func_80107C98\n\tnop\n\tjal func_80107F3C\n\tnop\n\tjal func_800FE778\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011ACAC, .-func_8011ACAC\n"
);
