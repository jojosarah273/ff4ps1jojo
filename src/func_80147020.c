#include "common.h"
__asm__(
  ".globl func_80147020\n"
  ".type func_80147020, @function\n"
  "func_80147020:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tlui $a0, (0x1C8000 >> 16)\n\tori $a0, $a0, (0x1C8000 & 0xFFFF)\n\taddu $s1, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $a0, 0x0($v1)\n\tnop\n\taddu $a0, $a0, $v0\n\tlbu $s0, 0x7F00($a0)\n\tnop\n\tandi $v0, $s0, 0x80\n\tbeqz $v0, .L801470B0\n\tnor $v0, $zero, $s0\n\tjal func_800728AC\n\tsb $v0, 0x1C($s1)\n\tlbu $v0, 0x21($s1)\n\tnop\n\tnor $v0, $zero, $v0\n\taddiu $v0, $v0, 0x1\n\tandi $s0, $v0, 0xFF\n\tandi $v1, $s0, 0x80\n\tbeqz $v1, .L801470CC\n\tnop\n\t.L801470A0:\n\tjal func_800F5480\n\tnop\n\tj .L801470D4\n\tnop\n\t.L801470B0:\n\tjal func_800728AC\n\tsb $s0, 0x1C($s1)\n\tlbu $s0, 0x21($s1)\n\tnop\n\tandi $v0, $s0, 0x80\n\tbnez $v0, .L801470A0\n\tnop\n\t.L801470CC:\n\tjal func_800F5410\n\tnop\n\t.L801470D4:\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tsb $s0, 0x0($v0)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80147020, .-func_80147020\n"
);
