#include "common.h"
__asm__(
  ".globl func_80111FCC\n"
  ".type func_80111FCC, @function\n"
  "func_80111FCC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xCA\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x172C\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x172E\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFB\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8011207C\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1702\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F9200\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x172F\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1730\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1707\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x172F\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC0\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x1705\n\tsrl $v0, $v0, 6\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tj .L801120B4\n\tnop\n\t.L8011207C:\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xFB\n\tjal func_800F9200\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x172F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1730\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1707\n\t.L801120B4:\n\tjal func_800F93DC\n\tnop\n\tjal func_8011AB18\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1E05\n\tjal func_80169128\n\tnop\n\tjal func_800FD718\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xD6\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80111FCC, .-func_80111FCC\n"
);
