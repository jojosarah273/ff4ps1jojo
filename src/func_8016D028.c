#include "common.h"
__asm__(
  ".globl func_8016D028\n"
  ".type func_8016D028, @function\n"
  "func_8016D028:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\taddiu $t1, $zero, 0x10\n\taddu $a2, $v0, $zero\n\tsb $zero, 0x16($a2)\n\tsb $zero, 0x17($a2)\n\tsb $zero, 0x12($a2)\n\tsb $zero, 0x13($a2)\n\tsb $zero, 0x14($a2)\n\tsb $zero, 0x15($a2)\n\t.L8016D058:\n\tlbu $v0, 0xF($a2)\n\tlbu $a1, 0xE($a2)\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tandi $t0, $a1, 0x1\n\tsrl $a1, $a1, 1\n\tsrl $v0, $a1, 8\n\tsb $a1, 0xE($a2)\n\tbeqz $t0, .L8016D0F4\n\tsb $v0, 0xF($a2)\n\tlbu $a3, 0x12($a2)\n\tlbu $v1, 0x13($a2)\n\tlbu $a1, 0x10($a2)\n\tlbu $v0, 0x11($a2)\n\tsll $v1, $v1, 8\n\tor $a3, $a3, $v1\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\taddu $t0, $a3, $a1\n\tandi $a3, $t0, 0xFFFF\n\tsrl $a0, $a3, 8\n\tsrl $v1, $t0, 16\n\tandi $t0, $v1, 0x1\n\tsb $a3, 0x12($a2)\n\tlbu $a3, 0x14($a2)\n\tlbu $a1, 0x16($a2)\n\tlbu $v0, 0x15($a2)\n\tlbu $v1, 0x17($a2)\n\tsb $a0, 0x13($a2)\n\tsll $v0, $v0, 8\n\tor $a3, $a3, $v0\n\tsll $v1, $v1, 8\n\tor $a1, $a1, $v1\n\taddu $v0, $a1, $t0\n\taddu $v0, $a3, $v0\n\tandi $a3, $v0, 0xFFFF\n\tsrl $v0, $a3, 8\n\tsb $a3, 0x14($a2)\n\tsb $v0, 0x15($a2)\n\t.L8016D0F4:\n\tlbu $v0, 0x11($a2)\n\tlbu $a1, 0x10($a2)\n\tlbu $v1, 0x17($a2)\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tsrl $t0, $a1, 15\n\tsll $v0, $a1, 1\n\tandi $a1, $v0, 0xFFFF\n\tsrl $a0, $a1, 8\n\taddiu $v0, $t1, -0x1\n\tandi $t1, $v0, 0xFFFF\n\tsb $a1, 0x10($a2)\n\tlbu $a1, 0x16($a2)\n\tsll $v1, $v1, 8\n\tsb $a0, 0x11($a2)\n\tor $a1, $a1, $v1\n\tsll $v0, $a1, 1\n\taddu $v0, $v0, $t0\n\tandi $a1, $v0, 0xFFFF\n\tsrl $v0, $a1, 8\n\tsb $a1, 0x16($a2)\n\tbnez $t1, .L8016D058\n\tsb $v0, 0x17($a2)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016D028, .-func_8016D028\n"
);
