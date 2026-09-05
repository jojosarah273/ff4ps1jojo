#include "common.h"
__asm__(
  ".globl func_801398F4\n"
  ".type func_801398F4, @function\n"
  "func_801398F4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80139694\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1340\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801399DC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x41\n\t.L80139934:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x1440\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801399A4\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80139934\n\tnop\n\tjal func_80120E2C\n\tnop\n\tlui $v0, %hi(D_80199254)\n\tlhu $a0, %lo(D_80199254)($v0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_80126528\n\tnop\n\tj .L801399DC\n\tnop\n\t.L801399A4:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x1340\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x1440\n\tjal func_800F9140\n\taddiu $a0, $zero, 0x1340\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_801399EC\n\tnop\n\tjal func_801264C0\n\tnop\n\t.L801399DC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801398F4, .-func_801398F4\n"
);
