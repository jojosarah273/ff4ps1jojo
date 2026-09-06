#include "common.h"
__asm__(
  ".globl func_801030F8\n"
  ".type func_801030F8, @function\n"
  "func_801030F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xACF\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD0\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD1\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x7070\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0xAD4\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x28\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0xAD2\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xACD\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xACE\n\tjal func_80115BCC\n\tnop\n\t.L80103178:\n\tjal func_800FE7D8\n\tnop\n\tjal func_80115D2C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0xAD2\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801031C0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE5\n\tjal func_800FF024\n\tnop\n\t.L801031C0:\n\tjal func_800F7210\n\taddiu $a0, $zero, 0xAD2\n\tjal func_800F5958\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80103178\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801030F8, .-func_801030F8\n"
);
