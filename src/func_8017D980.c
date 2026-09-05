#include "common.h"
__asm__(
  ".globl func_8017D980\n"
  ".type func_8017D980, @function\n"
  "func_8017D980:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a3, 0x4($a2)\n\tnop\n\tlhu $v0, 0x6($a3)\n\tlh $v1, 0xA($a3)\n\tsll $v0, $v0, 16\n\tsra $t0, $v0, 19\n\tsra $v0, $v0, 16\n\taddu $v0, $v0, $v1\n\taddiu $t2, $v0, 0x10\n\tslti $v0, $t2, 0xF9\n\tbnez $v0, .L8017D9B4\n\taddu $t8, $a0, $zero\n\taddiu $t2, $zero, 0xF8\n\t.L8017D9B4:\n\tsra $t2, $t2, 3\n\tlhu $v1, 0x2($a3)\n\tsll $a0, $t0, 5\n\tsll $v1, $v1, 16\n\tsra $v0, $v1, 14\n\tandi $a2, $v0, 0x3E0\n\taddu $a2, $a2, $a0\n\tsra $v1, $v1, 24\n\tlbu $v0, 0x0($a3)\n\tnop\n\tsrl $t7, $v0, 3\n\tslt $v0, $t0, $t2\n\tbeqz $v0, .L8017DA5C\n\tandi $t6, $v1, 0x1\n\t.L8017D9EC:\n\taddu $a3, $t7, $zero\n\taddiu $t4, $t0, 0x1\n\taddiu $t5, $a2, 0x20\n\tandi $t3, $a2, 0x3E0\n\tsra $v0, $a2, 10\n\taddu $v0, $v0, $t6\n\tandi $v0, $v0, 0x1\n\tsll $v0, $v0, 11\n\taddu $t1, $v0, $a1\n\tsll $v1, $t0, 5\n\taddu $v1, $v1, $t0\n\tsll $v1, $v1, 1\n\taddu $a0, $v1, $t8\n\taddiu $a2, $zero, 0x20\n\t.L8017DA24:\n\taddiu $a2, $a2, -0x1\n\tandi $v0, $a3, 0x1F\n\tor $v0, $v0, $t3\n\tsll $v0, $v0, 1\n\taddu $v0, $v0, $t1\n\tlhu $v1, 0x0($v0)\n\taddiu $a3, $a3, 0x1\n\tsh $v1, 0x0($a0)\n\tbgez $a2, .L8017DA24\n\taddiu $a0, $a0, 0x2\n\taddu $t0, $t4, $zero\n\tslt $v0, $t0, $t2\n\tbnez $v0, .L8017D9EC\n\taddu $a2, $t5, $zero\n\t.L8017DA5C:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017D980, .-func_8017D980\n"
);
