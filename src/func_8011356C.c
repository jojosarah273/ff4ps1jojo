#include "common.h"
__asm__(
  ".globl func_8011356C\n"
  ".type func_8011356C, @function\n"
  "func_8011356C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xACF\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD0\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD1\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0xAD2\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xACD\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0xACE\n\tjal func_80115BCC\n\tnop\n\t.L801135CC:\n\tjal func_800FE7D8\n\tnop\n\tjal func_80119AC8\n\tnop\n\tjal func_80115D2C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80113614\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x23\n\tjal func_800FD804\n\tnop\n\t.L80113614:\n\tjal func_800F7210\n\taddiu $a0, $zero, 0xAD2\n\tjal func_800F7170\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801135CC\n\tnop\n\tjal func_800FE8B4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011356C, .-func_8011356C\n"
);
