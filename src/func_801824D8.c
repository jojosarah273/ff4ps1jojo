#include "common.h"
__asm__(
  ".globl func_801824D8\n"
  ".type func_801824D8, @function\n"
  "func_801824D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $t9, 0x10($sp)\n\tandi $t6, $a0, 0xFF\n\tandi $t5, $a1, 0xFF\n\tandi $t4, $a2, 0xFF\n\tandi $t3, $a3, 0xFF\n\taddu $t7, $zero, $zero\n\tlui $t8, (0x10000 >> 16)\n\tsrl $v1, $t6, 1\n\t.L801824F8:\n\tsll $v0, $t6, 1\n\tandi $t6, $v0, 0xFF\n\tandi $t2, $t5, 0x80\n\tsll $v0, $t5, 1\n\tandi $t5, $v0, 0xFF\n\tandi $t0, $t4, 0x80\n\tsll $v0, $t4, 1\n\tandi $t4, $v0, 0xFF\n\tandi $a3, $t3, 0x80\n\tsll $v0, $t3, 1\n\tandi $t3, $v0, 0xFF\n\tandi $a2, $t6, 0x80\n\tsll $v0, $t6, 1\n\tandi $t6, $v0, 0xFE\n\tandi $a1, $t5, 0x80\n\tsll $v0, $t5, 1\n\tandi $t5, $v0, 0xFE\n\tandi $a0, $t4, 0x80\n\tsll $v0, $t4, 1\n\tandi $t4, $v0, 0xFE\n\tandi $t1, $t3, 0x80\n\tsll $v0, $t3, 1\n\tandi $t3, $v0, 0xFE\n\tandi $v1, $v1, 0x40\n\tor $v1, $v1, $t2\n\tsrl $v1, $v1, 1\n\tor $t0, $t0, $v1\n\tsrl $t0, $t0, 1\n\tor $a3, $a3, $t0\n\tsrl $a3, $a3, 1\n\tor $a2, $a2, $a3\n\tsrl $a2, $a2, 1\n\tor $a1, $a1, $a2\n\tsrl $a1, $a1, 1\n\tor $a0, $a0, $a1\n\tsrl $a0, $a0, 1\n\tor $t1, $t1, $a0\n\taddu $v0, $t9, $t7\n\tsb $t1, 0x0($v0)\n\taddu $v1, $t8, $zero\n\tlui $v0, (0x10000 >> 16)\n\taddu $t8, $t8, $v0\n\tsra $t7, $v1, 16\n\tslti $v0, $t7, 0x4\n\tbnez $v0, .L801824F8\n\tsrl $v1, $t6, 1\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801824D8, .-func_801824D8\n"
);
