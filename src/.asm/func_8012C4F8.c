#include "common.h"
__asm__(
  ".globl func_8012C4F8\n"
  ".type func_8012C4F8, @function\n"
  "func_8012C4F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8012C0A8\n\tnop\n\taddiu $v1, $zero, 0x2\n\tbeq $v0, $v1, .L8012C574\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x9\n\tjal func_800F6764\n\taddiu $a0, $zero, 0x60\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F8378\n\taddiu $a0, $zero, 0x60\n\tjal func_800F7500\n\taddiu $a0, $zero, 0xD\n\tjal func_800F6764\n\taddiu $a0, $zero, 0x60\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F8378\n\taddiu $a0, $zero, 0x60\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L8012C574:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C4F8, .-func_8012C4F8\n"
);
