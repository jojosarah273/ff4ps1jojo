#include "common.h"
__asm__(
  ".globl func_8016D160\n"
  ".type func_8016D160, @function\n"
  "func_8016D160:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tjal func_800F9330\n\taddu $s0, $v0, $zero\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\taddiu $a3, $zero, 0x10\n\tsb $zero, 0x20($s0)\n\tsb $zero, 0x21($s0)\n\tsb $zero, 0x1C($s0)\n\tsb $zero, 0x1D($s0)\n\tsb $zero, 0x1E($s0)\n\tsb $zero, 0x1F($s0)\n\t.L8016D1A0:\n\tlbu $v0, 0x19($s0)\n\tlbu $a1, 0x18($s0)\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tsrl $v1, $a1, 1\n\tsrl $v0, $a1, 9\n\tsb $v1, 0x18($s0)\n\tandi $v1, $a1, 0x1\n\tbeqz $v1, .L8016D23C\n\tsb $v0, 0x19($s0)\n\tlbu $v0, 0x1B($s0)\n\tlbu $a1, 0x1A($s0)\n\tlbu $v1, 0x1D($s0)\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tlbu $v0, 0x1C($s0)\n\tsll $v1, $v1, 8\n\tor $v0, $v0, $v1\n\taddu $a2, $v0, $a1\n\tandi $v1, $a2, 0xFFFF\n\tsrl $v0, $a2, 16\n\tandi $a2, $v0, 0x1\n\tlbu $a1, 0x20($s0)\n\tlbu $v0, 0x21($s0)\n\tsb $v1, 0x1C($s0)\n\tsrl $v1, $v1, 8\n\tsb $v1, 0x1D($s0)\n\tlbu $v1, 0x1F($s0)\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tsll $v1, $v1, 8\n\tlbu $v0, 0x1E($s0)\n\taddu $a0, $a1, $a2\n\tor $v0, $v0, $v1\n\taddu $v0, $v0, $a0\n\tandi $v0, $v0, 0xFFFF\n\tsb $v0, 0x1E($s0)\n\tsrl $v0, $v0, 8\n\tsb $v0, 0x1F($s0)\n\t.L8016D23C:\n\tlbu $v0, 0x1B($s0)\n\tlbu $a1, 0x1A($s0)\n\tlbu $v1, 0x21($s0)\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tsrl $a2, $a1, 15\n\tsll $v0, $a1, 1\n\tandi $a1, $v0, 0xFFFF\n\tsrl $a0, $a1, 8\n\taddiu $v0, $a3, -0x1\n\tandi $a3, $v0, 0xFFFF\n\tsb $a1, 0x1A($s0)\n\tlbu $a1, 0x20($s0)\n\tsll $v1, $v1, 8\n\tsb $a0, 0x1B($s0)\n\tor $a1, $a1, $v1\n\tsll $v0, $a1, 1\n\taddu $v0, $v0, $a2\n\tandi $a1, $v0, 0xFFFF\n\tsrl $v0, $a1, 8\n\tsb $a1, 0x20($s0)\n\tbnez $a3, .L8016D1A0\n\tsb $v0, 0x21($s0)\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016D160, .-func_8016D160\n"
);
