#include "common.h"
__asm__(
  ".globl func_8014B044\n"
  ".type func_8014B044, @function\n"
  "func_8014B044:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x16FC7E >> 16)\n\t.L8014B058:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x16FC7E & 0xFFFF)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3523\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8014B0A8\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014B058\n\tlui $a0, (0x16FC7E >> 16)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8014B0A8:\n\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x49\n\tjal func_800F8188\n\tsb $v1, 0x0($a1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B044, .-func_8014B044\n"
);
