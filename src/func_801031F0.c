#include "common.h"
__asm__(
  ".globl func_801031F0\n"
  ".type func_801031F0, @function\n"
  "func_801031F0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1286\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbeqz $v0, .L80103300\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAC\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1705\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801032E8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801032B0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB7\n\tjal func_8017559C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x6FD\n\tj .L80103300\n\tnop\n\t.L801032B0:\n\tjal func_801030F8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x79\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x6FD\n\tjal func_80103310\n\tnop\n\tj .L80103300\n\tnop\n\t.L801032E8:\n\tjal func_800FD718\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_80103310\n\tnop\n\t.L80103300:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801031F0, .-func_801031F0\n"
);
