#include "common.h"
__asm__(
  ".globl func_80105230\n"
  ".type func_80105230, @function\n"
  "func_80105230:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x18\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xC\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F5140\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x19\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x18\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xC\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x10\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80105340\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x19\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x4\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x19\n\t.L80105340:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x18\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80105230, .-func_80105230\n"
);
