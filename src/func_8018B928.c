#include "common.h"
__asm__(
  ".globl func_8018B928\n"
  ".type func_8018B928, @function\n"
  "func_8018B928:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, D_8019B17C\n\tlw $v0, D_8019B17C($v0)\n\tnop\n\tbnez $v0, .L8018B944\n\tlui $t0, (0x80000000 >> 16)\n\tj .L8018B9A0\n\taddu $v0, $0, $0\n\t.L8018B944:\n\tlui $a3, (0x40000000 >> 16)\n\tlui $a2, (0xFFFFFFF >> 16)\n\tori $a2, $a2, (0xFFFFFFF & 0xFFFF)\n\taddu $a1, $v0, $0\n\t.L8018B954:\n\tlw $v1, 0x0($a1)\n\tnop\n\tand $v0, $v1, $t0\n\tbnez $v0, .L8018B994\n\tand $v0, $v1, $a3\n\tbnez $v0, .L8018B99C\n\tand $v1, $v1, $a2\n\tsltu $v0,$v1,$a0\n\tbeqz $v0, .L8018B9A0\n\taddiu $v0, $0, 0x1\n\tlw $v0, 0x4($a1)\n\tnop\n\taddu $v0, $v1, $v0\n\tsltu $v0,$a0,$v0\n\tbnez $v0, .L8018B9A0\n\taddiu $v0, $0, 0x1\n\t.L8018B994:\n\tj .L8018B954\n\taddiu $a1, $a1, 0x8\n\t.L8018B99C:\n\taddu $v0, $0, $0\n\t.L8018B9A0:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018B928, .-func_8018B928\n"
);
