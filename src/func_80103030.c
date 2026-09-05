#include "common.h"
__asm__(
  ".globl func_80103030\n"
  ".type func_80103030, @function\n"
  "func_80103030:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAC\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x171B\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1705\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80103098\n\tnop\n\tjal func_801030F8\n\tnop\n\t.L80103098:\n\tjal func_800FD718\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xB6\n\t.L801030B0:\n\tjal func_80102ED8\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xB6\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x4\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801030B0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103030, .-func_80103030\n"
);
