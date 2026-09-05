#include "common.h"
__asm__(
  ".globl func_8017D7D8\n"
  ".type func_8017D7D8, @function\n"
  "func_8017D7D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a3, 0x4($a2)\n\tnop\n\tlhu $v0, 0x6($a3)\n\tlh $v1, 0xA($a3)\n\tsll $v0, $v0, 16\n\tsra $t0, $v0, 19\n\tsra $v0, $v0, 16\n\taddu $v0, $v0, $v1\n\taddiu $t2, $v0, 0x10\n\tslti $v0, $t2, 0xF9\n\tbnez $v0, .L8017D80C\n\taddu $t5, $a0, $zero\n\taddiu $t2, $zero, 0xF8\n\t.L8017D80C:\n\tsra $t2, $t2, 3\n\tsll $v1, $t0, 5\n\tlh $v0, 0x2($a3)\n\tlbu $a0, 0x0($a3)\n\tsll $v0, $v0, 2\n\tandi $a2, $v0, 0x3E0\n\taddu $a2, $a2, $v1\n\tslt $v0, $t0, $t2\n\tbeqz $v0, .L8017D890\n\tsrl $a0, $a0, 3\n\t.L8017D834:\n\taddu $a3, $a0, $zero\n\taddiu $t3, $t0, 0x1\n\taddiu $t4, $a2, 0x20\n\tandi $t1, $a2, 0x3E0\n\tsll $v0, $t0, 5\n\taddu $v0, $v0, $t0\n\tsll $v0, $v0, 1\n\taddu $a2, $v0, $t5\n\taddiu $t0, $zero, 0x20\n\t.L8017D858:\n\taddiu $t0, $t0, -0x1\n\tandi $v0, $a3, 0x1F\n\tor $v0, $v0, $t1\n\tsll $v0, $v0, 1\n\taddu $v0, $v0, $a1\n\tlhu $v1, 0x0($v0)\n\taddiu $a3, $a3, 0x1\n\tsh $v1, 0x0($a2)\n\tbgez $t0, .L8017D858\n\taddiu $a2, $a2, 0x2\n\taddu $t0, $t3, $zero\n\tslt $v0, $t0, $t2\n\tbnez $v0, .L8017D834\n\taddu $a2, $t4, $zero\n\t.L8017D890:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017D7D8, .-func_8017D7D8\n"
);
