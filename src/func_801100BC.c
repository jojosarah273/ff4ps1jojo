#include "common.h"
__asm__(
  ".globl func_801100BC\n"
  ".type func_801100BC, @function\n"
  "func_801100BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L801100CC:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x3B0\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x28\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x3B0\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x3B1\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x3B1\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801101A4\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801101A4\n\tnop\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x410\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x28\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x410\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x411\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x2B\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x411\n\t.L801101A4:\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x10\n\taddiu $v0, $v0, 0x4\n\tjal func_800F5A90\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801100CC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801100BC, .-func_801100BC\n"
);
