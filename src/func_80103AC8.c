#include "common.h"
__asm__(
  ".globl func_80103AC8\n"
  ".type func_80103AC8, @function\n"
  "func_80103AC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA1\n\t.L80103AE8:\n\tjal func_80103EAC\n\tnop\n\tjal func_800FF024\n\tnop\n\tjal func_800FE7B0\n\tnop\n\tjal func_80103F00\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x28\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80103AE8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103AC8, .-func_80103AC8\n"
);
