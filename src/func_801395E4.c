#include "common.h"
__asm__(
  ".globl func_801395E4\n"
  ".type func_801395E4, @function\n"
  "func_801395E4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BB0\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 4\n\tjal func_800F5410\n\tsb $v0, 0x0($v1)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x5F\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5B\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BB1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013964C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x78\n\tj .L80139654\n\tnop\n\t.L8013964C:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\t.L80139654:\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x300\n\tjal func_800F971C\n\tnop\n\tjal func_8011F724\n\tnop\n\tjal func_80176BFC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801395E4, .-func_801395E4\n"
);
