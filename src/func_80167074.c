#include "common.h"
__asm__(
  ".globl func_80167074\n"
  ".type func_80167074, @function\n"
  "func_80167074:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tori $a0, $zero, 0x8000\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3B04\n\tsw $s0, 0x10($sp)\n\tlui $v1, %hi(D_8019ED48)\n\tlw $v1, %lo(D_8019ED48)($v1)\n\tnop\n\tlhu $s1, 0x0($v1)\n\taddu $s2, $v0, $zero\n\taddu $s0, $s1, $zero\n\t.L801670A8:\n\taddu $v1, $s0, $s2\n\tlbu $v0, 0x7015($v1)\n\tnop\n\tandi $v0, $v0, 0xC0\n\tbnez $v0, .L801670F8\n\taddu $v0, $s1, $s2\n\tlbu $v0, 0x7016($v1)\n\tnop\n\tandi $v0, $v0, 0x3C\n\tbnez $v0, .L801670F8\n\taddu $v0, $s1, $s2\n\t.L801670D4:\n\taddiu $v0, $s0, 0x4\n\tjal func_800F5410\n\tandi $s0, $v0, 0xFFFF\n\taddiu $v0, $s1, 0x1\n\taddiu $v1, $zero, 0x14\n\tbne $s0, $v1, .L801670A8\n\tandi $s1, $v0, 0xFFFF\n\tj .L80167104\n\tnop\n\t.L801670F8:\n\tsb $zero, 0x7099($v0)\n\tj .L801670D4\n\tsb $zero, 0x709E($v0)\n\t.L80167104:\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80167074, .-func_80167074\n"
);
