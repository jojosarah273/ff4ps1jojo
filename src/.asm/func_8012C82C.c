#include "common.h"
__asm__(
  ".globl func_8012C82C\n"
  ".type func_8012C82C, @function\n"
  "func_8012C82C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7500\n\taddiu $a0, $zero, 0xD\n\tjal func_800F6764\n\taddiu $a0, $zero, 0x60\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0xA\n\tjal func_800F55C0\n\taddiu $a0, $zero, 0x3E7\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8012C87C\n\tnop\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x3E7\n\t.L8012C87C:\n\tjal func_800F8378\n\taddiu $a0, $zero, 0x60\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_801221EC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C82C, .-func_8012C82C\n"
);
