#include "common.h"
__asm__(
  ".globl func_80103DD8\n"
  ".type func_80103DD8, @function\n"
  "func_80103DD8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFF98\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x5C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x79\n\taddiu $v0, $zero, 0x1BE\n\tlui $at, %hi(D_8019EE28)\n\tsw $v0, %lo(D_8019EE28)($at)\n\t.L80103E0C:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420C\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6E\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x6F\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6E\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6F\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800FE6E4\n\tnop\n\tjal func_80103F00\n\tnop\n\tjal func_8010408C\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80103E0C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103DD8, .-func_80103DD8\n"
);
