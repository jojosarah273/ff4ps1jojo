#include "common.h"
__asm__(
  ".globl func_801321E8\n"
  ".type func_801321E8, @function\n"
  "func_801321E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A04\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x10\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80132228\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_80132310\n\tnop\n\tj .L80132238\n\tnop\n\t.L80132228:\n\tjal func_80131294\n\tnop\n\tjal func_8012219C\n\tnop\n\t.L80132238:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801321E8, .-func_801321E8\n"
);
