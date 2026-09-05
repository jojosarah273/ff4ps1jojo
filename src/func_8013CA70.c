#include "common.h"
__asm__(
  ".globl func_8013CA70\n"
  ".type func_8013CA70, @function\n"
  "func_8013CA70:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x41\n\tsw $ra, 0x14($sp)\n\tjal func_800F7270\n\tsw $s0, 0x10($sp)\n\t.L8013CA84:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xFF28\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x19\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8013CB0C\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xC8\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8013CB0C\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xEE\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8013CB0C\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8013CA84\n\tnop\n\tjal func_800F5410\n\tnop\n\tj .L8013CB84\n\tnop\n\t.L8013CB0C:\n\tjal func_801210AC\n\tlui $s0, %hi(D_80199190)\n\taddiu $s0, $s0, %lo(D_80199190)\n\tlhu $a0, 0xDA($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FB74\n\tnop\n\tjal func_801263F0\n\tnop\n\tjal func_8012219C\n\tnop\n\tjal func_8011FF40\n\tnop\n\tjal func_801240A8\n\tnop\n\tlhu $a0, 0xD0($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlhu $a0, 0xD4($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FB74\n\tnop\n\tjal func_801263F0\n\tnop\n\tjal func_800F5480\n\tnop\n\t.L8013CB84:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013CA70, .-func_8013CA70\n"
);
