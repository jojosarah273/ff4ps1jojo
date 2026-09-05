#include "common.h"
__asm__(
  ".globl func_8018B4C8\n"
  ".type func_8018B4C8, @function\n"
  "func_8018B4C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $v1, %hi(D_8019B174)\n\tlw $v1, %lo(D_8019B174)($v1)\n\taddu $a2, $zero, $zero\n\tblez $v1, .L8018B52C\n\tsw $ra, 0x10($sp)\n\tlui $t1, (0x40000000 >> 16)\n\tlui $v0, (0x80000000 >> 16)\n\tor $t0, $a0, $v0\n\taddu $a3, $v1, $zero\n\tlui $a1, %hi(D_8019B17C)\n\tlw $a1, %lo(D_8019B17C)($a1)\n\tnop\n\t.L8018B4FC:\n\tlw $v1, 0x0($a1)\n\tnop\n\tand $v0, $v1, $t1\n\tbnez $v0, .L8018B52C\n\tnop\n\tbne $v1, $a0, .L8018B520\n\taddiu $a2, $a2, 0x1\n\tj .L8018B52C\n\tsw $t0, 0x0($a1)\n\t.L8018B520:\n\tslt $v0, $a2, $a3\n\tbnez $v0, .L8018B4FC\n\taddiu $a1, $a1, 0x8\n\t.L8018B52C:\n\tjal func_8018B1C8\n\tnop\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018B4C8, .-func_8018B4C8\n"
);
