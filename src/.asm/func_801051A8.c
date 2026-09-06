#include "common.h"
__asm__(
  ".globl func_801051A8\n"
  ".type func_801051A8, @function\n"
  "func_801051A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801051F8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3\n\tjal func_800F4370\n\taddiu $a0, $zero, 0xD2\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80105220\n\tnop\n\t.L801051F8:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1707\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE\n\tjal func_8010D2A0\n\tnop\n\t.L80105220:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801051A8, .-func_801051A8\n"
);
