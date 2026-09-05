#include "common.h"
__asm__(
  ".globl func_800FD914\n"
  ".type func_800FD914, @function\n"
  "func_800FD914:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x82\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCA\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L800FD9EC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x80\n\t.L800FD95C:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L800FD9A4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x420C\n\t.L800FD9A4:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F4370\n\taddiu $a0, $zero, 0x82\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FD95C\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x80\n\tjal func_800F5B8C\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L800FD95C\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x80\n\t.L800FD9EC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FD914, .-func_800FD914\n"
);
