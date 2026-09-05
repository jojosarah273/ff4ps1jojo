#include "common.h"
__asm__(
  ".globl func_80191748\n"
  ".type func_80191748, @function\n"
  "func_80191748:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\taddiu $v0, $zero, 0x2\n\tbne $s0, $v0, .L80191770\n\tsw $ra, 0x14($sp)\n\tjal func_8019119C\n\tnop\n\tj .L801917A4\n\taddiu $v0, $zero, 0x1\n\t.L80191770:\n\tjal func_801911E8\n\tnop\n\tbnez $v0, .L801917A4\n\taddu $v0, $zero, $zero\n\taddiu $v0, $zero, 0x1\n\tbne $s0, $v0, .L801917A4\n\tnop\n\tjal func_801910AC\n\tnop\n\taddu $v1, $v0, $zero\n\tbnez $v1, .L801917A4\n\taddu $v0, $zero, $zero\n\taddiu $v0, $zero, 0x1\n\t.L801917A4:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191748, .-func_80191748\n"
);
