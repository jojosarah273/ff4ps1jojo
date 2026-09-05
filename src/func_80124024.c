#include "common.h"
__asm__(
  ".globl func_80124024\n"
  ".type func_80124024, @function\n"
  "func_80124024:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x73\n\tjal func_800F3A70\n\taddu $s0, $v0, $zero\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\taddu $t0, $v0, $zero\n\taddiu $a2, $zero, 0x800\n\tlbu $a0, 0x41($s0)\n\tlbu $v0, 0x42($s0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tsll $v0, $v0, 8\n\tlhu $a1, 0x0($v1)\n\tor $a0, $a0, $v0\n\tsrl $a3, $a1, 8\n\t.L80124074:\n\taddiu $v0, $a2, -0x1\n\tandi $a2, $v0, 0xFFFF\n\taddu $v1, $t0, $a0\n\taddiu $v0, $a0, 0x2\n\tandi $a0, $v0, 0xFFFF\n\tsb $a1, 0x0($v1)\n\tbnez $a2, .L80124074\n\tsb $a3, 0x1($v1)\n\tlw $ra, 0x14($sp)\n\tsb $zero, 0x44($s0)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80124024, .-func_80124024\n"
);
