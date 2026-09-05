#include "common.h"
__asm__(
  ".globl func_801255E8\n"
  ".type func_801255E8, @function\n"
  "func_801255E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xA\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\t.L80125600:\n\tjal func_800F6558\n\tori $a0, $zero, 0xF0FF\n\tjal func_800F89D4\n\taddu $a0, $zero, $zero\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x3000\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x2\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80125600\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801255E8, .-func_801255E8\n"
);
