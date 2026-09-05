#include "common.h"
__asm__(
  ".globl func_8018B9A8\n"
  ".type func_8018B9A8, @function\n"
  "func_8018B9A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B13C)\n\tlw $v0, %lo(D_8019B13C)($v0)\n\tlui $v1, %hi(D_8019B17C)\n\tlw $v1, %lo(D_8019B17C)($v1)\n\tnop\n\tbnez $v1, .L8018B9CC\n\tsllv $a0, $a0, $v0\n\tj .L8018BA2C\n\taddu $v0, $zero, $zero\n\t.L8018B9CC:\n\tlui $t0, (0x80000000 >> 16)\n\tlui $a3, (0x40000000 >> 16)\n\tlui $a2, (0xFFFFFFF >> 16)\n\tori $a2, $a2, (0xFFFFFFF & 0xFFFF)\n\taddu $a1, $v1, $zero\n\t.L8018B9E0:\n\tlw $v1, 0x0($a1)\n\tnop\n\tand $v0, $v1, $t0\n\tbnez $v0, .L8018BA20\n\tand $v0, $v1, $a3\n\tbnez $v0, .L8018BA28\n\tand $v1, $v1, $a2\n\tsltu $v0,$v1,$a0\n\tbeqz $v0, .L8018BA2C\n\taddiu $v0, $zero, 0x1\n\tlw $v0, 0x4($a1)\n\tnop\n\taddu $v0, $v1, $v0\n\tsltu $v0,$a0,$v0\n\tbnez $v0, .L8018BA2C\n\taddiu $v0, $zero, 0x1\n\t.L8018BA20:\n\tj .L8018B9E0\n\taddiu $a1, $a1, 0x8\n\t.L8018BA28:\n\taddu $v0, $zero, $zero\n\t.L8018BA2C:\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018B9A8, .-func_8018B9A8\n"
);
