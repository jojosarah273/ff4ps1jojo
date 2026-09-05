#include "common.h"
__asm__(
  ".globl func_80141290\n"
  ".type func_80141290, @function\n"
  "func_80141290:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddu $a0, $zero, $zero\n\tjal func_800F3A70\n\taddu $s0, $v0, $zero\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlw $ra, 0x14($sp)\n\tlhu $v1, 0x0($a0)\n\tlbu $a3, 0x0($a1)\n\taddu $a2, $v0, $v1\n\taddiu $a0, $a3, 0x1\n\taddiu $v1, $v1, 0x1\n\tandi $v1, $v1, 0xFFFF\n\tsb $a0, 0x0($a2)\n\taddu $a0, $v0, $v1\n\taddiu $v1, $v1, 0x1\n\tlbu $a1, 0x2($s0)\n\tandi $v1, $v1, 0xFFFF\n\tsb $a1, 0x0($a0)\n\taddu $a0, $v0, $v1\n\taddiu $v1, $v1, 0x1\n\tandi $v1, $v1, 0xFFFF\n\tsb $a3, 0x0($a0)\n\tlbu $a0, 0x2($s0)\n\tlw $s0, 0x10($sp)\n\taddu $v0, $v0, $v1\n\tsb $a0, 0x0($v0)\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\taddiu $a3, $a3, 0x2\n\tsb $a3, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141290, .-func_80141290\n"
);
