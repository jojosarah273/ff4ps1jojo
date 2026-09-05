#include "common.h"
__asm__(
  ".globl func_80189790\n"
  ".type func_80189790, @function\n"
  "func_80189790:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8018AD28\n\tnop\n\taddiu $a0, $zero, 0x8\n\tlui $a1, %hi(D_801F6698)\n\tjal func_8018ADC8\n\taddiu $a1, $a1, %lo(D_801F6698)\n\tjal func_8018CA18\n\taddu $a0, $zero, $zero\n\tjal func_8018C9B8\n\taddiu $a0, $zero, 0x1010\n\tlui $a0, (0x7EFF0 >> 16)\n\tjal func_8018C858\n\tori $a0, $a0, (0x7EFF0 & 0xFFFF)\n\taddiu $v1, $zero, 0x7\n\tlui $v0, %hi(D_801F66E8)\n\taddiu $v0, $v0, %lo(D_801F66E8)\n\taddiu $v0, $v0, 0x8C\n\tsh $zero, %gp_rel(D_8019EF98)($gp)\n\t.L801897E0:\n\tsw $zero, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L801897E0\n\taddiu $v0, $v0, -0x14\n\taddu $a0, $zero, $zero\n\tlui $a1, (0xFFFFFF >> 16)\n\tjal func_8018C438\n\tori $a1, $a1, (0xFFFFFF & 0xFFFF)\n\taddu $a0, $zero, $zero\n\tlui $a1, (0xFFFFFF >> 16)\n\tjal func_8018B548\n\tori $a1, $a1, (0xFFFFFF & 0xFFFF)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189790, .-func_80189790\n"
);
