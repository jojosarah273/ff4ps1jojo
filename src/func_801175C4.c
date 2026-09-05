#include "common.h"
__asm__(
  ".globl func_801175C4\n"
  ".type func_801175C4, @function\n"
  "func_801175C4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x9D3\n\tjal func_800F6364\n\tnop\n\tlui $a0, (0x128200 >> 16)\n\t.L801175E0:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x128200 & 0xFFFF)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80117610\n\tnop\n\tjal func_800F6364\n\tnop\n\tj .L801175E0\n\tlui $a0, (0x128200 >> 16)\n\t.L80117610:\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x9D3\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801175C4, .-func_801175C4\n"
);
