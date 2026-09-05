#include "common.h"
__asm__(
  ".globl func_8018B16C\n"
  ".type func_8018B16C, @function\n"
  "func_8018B16C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, (0xFFFFFFF >> 16)\n\tori $v1, $v1, (0xFFFFFFF & 0xFFFF)\n\tlui $v0, (0x40000000 >> 16)\n\tand $v0, $a2, $v0\n\tand $a2, $a2, $v1\n\tsltu $v1,$zero,$v0\n\tslt $a2, $a2, $a0\n\tbeqz $a2, .L8018B1A8\n\taddu $v0, $v1, $zero\n\tbne $a1, $a3, .L8018B1B4\n\taddiu $v0, $zero, 0x2\n\tbeqz $v1, .L8018B1B4\n\taddiu $v0, $zero, 0x1\n\tj .L8018B1B4\n\taddiu $v0, $zero, 0x2\n\t.L8018B1A8:\n\tbeq $a1, $a3, .L8018B1B4\n\tnop\n\taddiu $v0, $zero, 0x1\n\t.L8018B1B4:\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018B16C, .-func_8018B16C\n"
);
