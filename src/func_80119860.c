#include "common.h"
__asm__(
  ".globl func_80119860\n"
  ".type func_80119860, @function\n"
  "func_80119860:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB2\n\tjal func_80108330\n\tnop\n\tjal func_80107C98\n\tnop\n\tjal func_80105DB4\n\tnop\n\tjal func_80107F3C\n\tnop\n\tjal func_800FE7B0\n\tnop\n\tjal func_80109A28\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xDB\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801198D8\n\tnop\n\tjal func_801175C4\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x9D3\n\t.L801198D8:\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119860, .-func_80119860\n"
);
