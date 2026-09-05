#include "common.h"
__asm__(
  ".globl func_80129838\n"
  ".type func_80129838, @function\n"
  "func_80129838:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B09\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B08\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1B0A\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x6\n\t.L80129860:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x7\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tjal func_800F6364\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80129860\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80129838, .-func_80129838\n"
);
