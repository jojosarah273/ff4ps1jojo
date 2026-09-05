#include "common.h"
__asm__(
  ".globl func_8017DA64\n"
  ".type func_8017DA64, @function\n"
  "func_8017DA64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, 0x4($a2)\n\tnop\n\tlhu $v0, 0x6($a2)\n\tlh $v1, 0xA($a2)\n\tsll $v0, $v0, 16\n\tsra $a3, $v0, 19\n\tsra $v0, $v0, 16\n\taddu $v0, $v0, $v1\n\taddiu $t2, $v0, 0x10\n\tslti $v0, $t2, 0xF9\n\tbnez $v0, .L8017DA98\n\taddu $t9, $a0, $zero\n\taddiu $t2, $zero, 0xF8\n\t.L8017DA98:\n\tsra $t2, $t2, 3\n\tlhu $a0, 0x0($a2)\n\tlhu $v1, 0x2($a2)\n\tsll $a0, $a0, 16\n\tsra $v0, $a0, 24\n\tandi $t7, $v0, 0x1\n\tsll $v1, $v1, 16\n\tsra $v0, $v1, 23\n\tandi $v0, $v0, 0x2\n\taddu $t7, $t7, $v0\n\tsra $v1, $v1, 14\n\tandi $v1, $v1, 0x3E0\n\tsll $v0, $a3, 5\n\taddu $v1, $v1, $v0\n\tsra $a0, $a0, 19\n\tslt $v0, $a3, $t2\n\tbeqz $v0, .L8017DB74\n\tandi $t8, $a0, 0x1F\n\t.L8017DAE0:\n\taddu $a2, $t8, $zero\n\taddiu $t6, $a3, 0x1\n\taddiu $t5, $v1, 0x20\n\tsra $v0, $v1, 9\n\tandi $v0, $v0, 0x2\n\taddu $t1, $v0, $t7\n\tandi $t4, $t1, 0x1\n\tandi $t3, $v1, 0x3E0\n\tsll $v0, $a3, 5\n\taddu $v0, $v0, $a3\n\tsll $v0, $v0, 1\n\taddu $a3, $v0, $t9\n\taddiu $t0, $zero, 0x20\n\t.L8017DB14:\n\tbeqz $t4, .L8017DB28\n\tsra $v0, $a2, 5\n\tandi $v0, $v0, 0x1\n\tj .L8017DB2C\n\tnegu $v0, $v0\n\t.L8017DB28:\n\tandi $v0, $v0, 0x1\n\t.L8017DB2C:\n\taddiu $t0, $t0, -0x1\n\taddu $v0, $t1, $v0\n\tandi $v0, $v0, 0x3\n\tandi $v1, $a2, 0x1F\n\tor $v1, $v1, $t3\n\tsll $v1, $v1, 1\n\tsll $v0, $v0, 11\n\taddu $v0, $v0, $a1\n\taddu $v1, $v1, $v0\n\tlhu $a0, 0x0($v1)\n\taddiu $a2, $a2, 0x1\n\tsh $a0, 0x0($a3)\n\tbgez $t0, .L8017DB14\n\taddiu $a3, $a3, 0x2\n\taddu $a3, $t6, $zero\n\tslt $v0, $a3, $t2\n\tbnez $v0, .L8017DAE0\n\taddu $v1, $t5, $zero\n\t.L8017DB74:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017DA64, .-func_8017DA64\n"
);
