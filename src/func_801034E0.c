#include "common.h"
__asm__(
  ".globl func_801034E0\n"
  ".type func_801034E0, @function\n"
  "func_801034E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xB8\n\t.L801034F8:\n\tjal func_80102E78\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80103540\n\tnop\n\tjal func_800F7864\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x6FD\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tj .L801034F8\n\tnop\n\t.L80103540:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xB8\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB8\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB8\n\tjal func_8017559C\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x30\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801034F8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801034E0, .-func_801034E0\n"
);
