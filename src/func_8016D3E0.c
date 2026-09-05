#include "common.h"
__asm__(
  ".globl func_8016D3E0\n"
  ".type func_8016D3E0, @function\n"
  "func_8016D3E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tlui $a0, (0x138000 >> 16)\n\tori $a0, $a0, (0x138000 & 0xFFFF)\n\taddu $s0, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tnop\n\tlhu $v1, 0x0($a0)\n\tnop\n\tandi $v1, $v1, 0x1FF\n\tsll $v1, $v1, 1\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x65C6($v1)\n\tlbu $a0, 0x65C5($v1)\n\tsll $v0, $v0, 8\n\tor $a0, $a0, $v0\n\tandi $v1, $a0, 0x8000\n\tbeqz $v1, .L8016D490\n\tnor $v0, $zero, $a0\n\tandi $a0, $v0, 0xFFFF\n\tsrl $v0, $a0, 8\n\tsb $a0, 0x1A($s0)\n\tjal func_8016D160\n\tsb $v0, 0x1B($s0)\n\tlbu $v0, 0x1F($s0)\n\tlbu $a0, 0x1E($s0)\n\tsll $v0, $v0, 8\n\tnor $v0, $v0, $a0\n\taddiu $v0, $v0, 0x1\n\tandi $a0, $v0, 0xFFFF\n\tandi $v1, $a0, 0x8000\n\tbeqz $v1, .L8016D4BC\n\tsrl $v0, $a0, 8\n\t.L8016D47C:\n\tsb $a0, 0x1E($s0)\n\tjal func_800F5480\n\tsb $v0, 0x1F($s0)\n\tj .L8016D4C8\n\tnop\n\t.L8016D490:\n\tsrl $v0, $a0, 8\n\tsb $a0, 0x1A($s0)\n\tjal func_8016D160\n\tsb $v0, 0x1B($s0)\n\tlbu $v0, 0x1F($s0)\n\tlbu $a0, 0x1E($s0)\n\tsll $v0, $v0, 8\n\tor $a0, $a0, $v0\n\tandi $v1, $a0, 0x8000\n\tbnez $v1, .L8016D47C\n\tsrl $v0, $a0, 8\n\t.L8016D4BC:\n\tsb $a0, 0x1E($s0)\n\tjal func_800F5410\n\tsb $v0, 0x1F($s0)\n\t.L8016D4C8:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016D3E0, .-func_8016D3E0\n"
);
