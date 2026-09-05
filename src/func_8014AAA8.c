#include "common.h"
__asm__(
  ".globl func_8014AAA8\n"
  ".type func_8014AAA8, @function\n"
  "func_8014AAA8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8014C96C\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF2A0\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F8188\n\tori $a0, $zero, 0xF462\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C5\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3522\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\tori $a0, $zero, 0xF463\n\tjal func_8014AA68\n\tnop\n\tjal func_8014B9B4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3522\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014AB60\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C4\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tori $a0, $zero, 0xF462\n\txori $v0, $v0, 0x80\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3523\n\tjal func_800F8188\n\tori $a0, $zero, 0xF463\n\tjal func_8014AA68\n\tnop\n\tjal func_8014BA34\n\tnop\n\t.L8014AB60:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014AAA8, .-func_8014AAA8\n"
);
