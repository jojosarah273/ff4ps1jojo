#include "common.h"
__asm__(
  ".globl func_80104E14\n"
  ".type func_80104E14, @function\n"
  "func_80104E14:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L80104EF4\n\tnop\n\tjal func_80104F1C\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80104F04\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x709\n\tjal func_800F5140\n\tnop\n\tjal func_800F96E0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80104EBC\n\tnop\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x6A1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3\n\tjal func_800F4370\n\taddiu $a0, $zero, 0xD2\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80104ED4\n\tnop\n\tj .L80104EF4\n\tnop\n\t.L80104EBC:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x6A1\n\tjal func_800F4370\n\taddiu $a0, $zero, 0xA\n\tj .L80104EE4\n\tnop\n\t.L80104ED4:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x6A1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\t.L80104EE4:\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80104F04\n\tnop\n\t.L80104EF4:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tj .L80104F0C\n\tnop\n\t.L80104F04:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\t.L80104F0C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80104E14, .-func_80104E14\n"
);
