#include "common.h"
__asm__(
  ".globl func_8016380C\n"
  ".type func_8016380C, @function\n"
  "func_8016380C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x12\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C8\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C7\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x202F\n\tjal func_800F7864\n\tnop\n\tjal func_800F76E8\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xAB\n\t.L8016386C:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x3540\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80163900\n\tnop\n\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlbu $v1, 0x0($v0)\n\tjal func_80152CDC\n\tsb $v1, 0x0($a0)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F5480\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x202F\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801638F0\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801638F8\n\tnop\n\t.L801638F0:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\t.L801638F8:\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x202F\n\t.L80163900:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xD\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016386C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x13\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_8015329C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016380C, .-func_8016380C\n"
);
