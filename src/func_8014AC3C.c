#include "common.h"
__asm__(
  ".globl func_8014AC3C\n"
  ".type func_8014AC3C, @function\n"
  "func_8014AC3C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8014C96C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\tori $a0, $zero, 0xF2A0\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4\n\tjal func_8013E5D0\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF458\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_8014B9B4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F8188\n\tori $a0, $zero, 0xF13E\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014ACBC\n\tnop\n\tjal func_8013E2F8\n\tnop\n\t.L8014ACBC:\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF458\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C4\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tori $a0, $zero, 0xF13E\n\txori $v0, $v0, 0x80\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_8014BA34\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3523\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014AD14\n\tnop\n\tjal func_8013E2F8\n\tnop\n\t.L8014AD14:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014AC3C, .-func_8014AC3C\n"
);
