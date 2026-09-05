#include "common.h"
__asm__(
  ".globl func_801120F4\n"
  ".type func_801120F4, @function\n"
  "func_801120F4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800FE7D8\n\tnop\n\tjal func_800FE870\n\tnop\n\tjal func_8011416C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8011213C\n\tnop\n\tjal func_800FF024\n\tnop\n\t.L8011213C:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x7070\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x300\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A03\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F5140\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0xE8\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x302\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A03\n\tjal func_800F5140\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x303\n\tori $v0, $v0, 0x31\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801120F4, .-func_801120F4\n"
);
