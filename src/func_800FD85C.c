#include "common.h"
__asm__(
  ".globl func_800FD85C\n"
  ".type func_800FD85C, @function\n"
  "func_800FD85C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x82\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x80\n\t.L800FD87C:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $a0, 0x0($v0)\n\taddiu $v1, $zero, 0x1\n\tbeq $a0, $v1, .L800FD8AC\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\t.L800FD8AC:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F4370\n\taddiu $a0, $zero, 0x82\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FD87C\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FD87C\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x80\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FD85C, .-func_800FD85C\n"
);
