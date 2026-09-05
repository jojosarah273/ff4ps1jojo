#include "common.h"
__asm__(
  ".globl func_80157F30\n"
  ".type func_80157F30, @function\n"
  "func_80157F30:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xD1\n\tjal func_800F8FB8\n\taddu $a0, $zero, $zero\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38F6\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\t.L80157F58:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3601\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80157F98\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80158048\n\tnop\n\t.L80157F98:\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAE\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x29EB\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAB\n\t.L80157FE0:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4FAC\n\taddiu $a0, $zero, 0x101\n\tbnez $v0, .L80158020\n\tnop\n\tjal func_801580B0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801580A0\n\tnop\n\t.L80158020:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x7\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80157FE0\n\tnop\n\t.L80158048:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xD\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80158078\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xA9\n\t.L80158078:\n\tjal func_800F62BC\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xD\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80157F58\n\tnop\n\t.L801580A0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80157F30, .-func_80157F30\n"
);
