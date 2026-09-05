#include "common.h"
__asm__(
  ".globl func_8013ED14\n"
  ".type func_8013ED14, @function\n"
  "func_8013ED14:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4\n\t.L8013ED2C:\n\tlui $a0, (0x16ED80 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x16ED80 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F61E8\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x6CFD\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x40\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 4\n\tjal func_800F5410\n\tsb $v0, 0x0($v1)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x4\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x3\n\tori $v0, $v0, 0x2\n\tjal func_800F3C3C\n\tsb $v0, 0x0($v1)\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x6CFD\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x4\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8013ED2C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013ED14, .-func_8013ED14\n"
);
