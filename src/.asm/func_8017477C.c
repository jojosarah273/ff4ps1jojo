#include "common.h"
__asm__(
  ".globl func_8017477C\n"
  ".type func_8017477C, @function\n"
  "func_8017477C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7\n\tlui $a0, (0xFC8C0 >> 16)\n\t.L801747A0:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xFC8C0 & 0xFFFF)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80174808\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1560\n\tjal func_800F63BC\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x7\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x18\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80174850\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7\n\tj .L80174850\n\tnop\n\t.L80174808:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1560\n\tjal func_800F63BC\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x7\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x18\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80174808\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7\n\t.L80174850:\n\tjal func_800F6364\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x138\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801747A0\n\tlui $a0, (0xFC8C0 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017477C, .-func_8017477C\n"
);
