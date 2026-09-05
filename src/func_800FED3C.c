#include "common.h"
__asm__(
  ".globl func_800FED3C\n"
  ".type func_800FED3C, @function\n"
  "func_800FED3C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD9\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x79\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x81\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\tjal func_800F5448\n\tnop\n\t.L800FED94:\n\tjal func_800FE778\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $a0, 0x0($v0)\n\taddiu $v1, $zero, 0x1F\n\tbne $a0, $v1, .L800FEDC4\n\tnop\n\tjal func_80178BB4\n\tnop\n\t.L800FEDC4:\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5B8C\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L800FED94\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xD9\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FEE14\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tj .L800FEE1C\n\tnop\n\t.L800FEE14:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\t.L800FEE1C:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FED3C, .-func_800FED3C\n"
);
