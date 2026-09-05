#include "common.h"
__asm__(
  ".globl func_8017091C\n"
  ".type func_8017091C, @function\n"
  "func_8017091C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4301\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L8017094C:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800F9868\n\taddu $a0, $zero, $zero\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420B\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800F9868\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x180\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8017094C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017091C, .-func_8017091C\n"
);
