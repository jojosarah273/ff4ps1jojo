#include "common.h"
__asm__(
  ".globl func_80126D48\n"
  ".type func_80126D48, @function\n"
  "func_80126D48:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x48\n\t.L80126D58:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x48\n\tjal func_80132178\n\tnop\n\tjal func_800F6B68\n\taddu $a0, $zero, $zero\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80126DB0\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x48\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x48\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80126D58\n\tnop\n\t.L80126DB0:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x48\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE7\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B3E\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B8A\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFFD8\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1BA5\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A9\n\tjal func_800F63F8\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1C\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80126D48, .-func_80126D48\n"
);
