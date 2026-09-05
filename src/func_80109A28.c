#include "common.h"
__asm__(
  ".globl func_80109A28\n"
  ".type func_80109A28, @function\n"
  "func_80109A28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xEC\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80109AF8\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xEC\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800FCC84\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2840\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x10\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x610\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x40\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2860\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420B\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x610\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x40\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\t.L80109AF8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80109A28, .-func_80109A28\n"
);
