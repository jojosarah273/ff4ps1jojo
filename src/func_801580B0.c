#include "common.h"
__asm__(
  ".globl func_801580B0\n"
  ".type func_801580B0, @function\n"
  "func_801580B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD2\n\tjal func_80152CDC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD3\n\tjal func_800F5140\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAF\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAF\n\tjal func_8015310C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3598\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2A04\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x2A05\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F7918\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80158180\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2A06\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80158180\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xD1\n\t.L80158180:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801580B0, .-func_801580B0\n"
);
