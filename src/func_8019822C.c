#include "common.h"
__asm__(
  ".globl func_8019822C\n"
  ".type func_8019822C, @function\n"
  "func_8019822C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a1, $zero\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a2, $zero\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $zero, $zero\n\tsw $s6, 0x28($sp)\n\taddu $s6, $a0, $zero\n\tsw $ra, 0x2C($sp)\n\tsw $s5, 0x24($sp)\n\tsw $s4, 0x20($sp)\n\tbeqz $s1, .L801982BC\n\tsw $s0, 0x10($sp)\n\tori $s5, $zero, 0x8000\n\taddiu $s4, $zero, -0x1\n\tsltu $v0,$s5,$s1\n\t.L80198270:\n\tbeqz $v0, .L8019827C\n\taddu $s0, $s1, $zero\n\tori $s0, $zero, 0x8000\n\t.L8019827C:\n\taddu $a0, $zero, $zero\n\taddu $a1, $s6, $zero\n\taddu $a2, $s0, $zero\n\tjal func_801982E8\n\taddu $a3, $s2, $zero\n\tbne $v0, $s4, .L801982A0\n\taddu $s3, $s3, $v0\n\tj .L801982C0\n\taddiu $v0, $zero, -0x1\n\t.L801982A0:\n\taddu $s2, $s2, $v0\n\tsubu $s1, $s1, $v0\n\tslt $v0, $v0, $s0\n\tbnez $v0, .L801982C0\n\taddu $v0, $s3, $zero\n\tbnez $s1, .L80198270\n\tsltu $v0,$s5,$s1\n\t.L801982BC:\n\taddu $v0, $s3, $zero\n\t.L801982C0:\n\tlw $ra, 0x2C($sp)\n\tlw $s6, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019822C, .-func_8019822C\n"
);
