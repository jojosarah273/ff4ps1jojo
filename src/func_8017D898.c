#include "common.h"
__asm__(
  ".globl func_8017D898\n"
  ".type func_8017D898, @function\n"
  "func_8017D898:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a3, 0x4($a2)\n\tnop\n\tlhu $v0, 0x6($a3)\n\tlh $v1, 0xA($a3)\n\tsll $v0, $v0, 16\n\tsra $a2, $v0, 19\n\tsra $v0, $v0, 16\n\taddu $v0, $v0, $v1\n\taddiu $t1, $v0, 0x10\n\tslti $v0, $t1, 0xF9\n\tbnez $v0, .L8017D8CC\n\taddu $t7, $a0, $0\n\taddiu $t1, $0, 0xF8\n\t.L8017D8CC:\n\tsra $t1, $t1, 3\n\tlh $v0, 0x2($a3)\n\tsll $v1, $a2, 5\n\tsll $v0, $v0, 2\n\tandi $a0, $v0, 0x3E0\n\tlhu $v0, 0x0($a3)\n\taddu $a0, $a0, $v1\n\tsll $v0, $v0, 16\n\tsra $v1, $v0, 19\n\tandi $t6, $v1, 0x1F\n\tsra $v0, $v0, 24\n\tslt $v1, $a2, $t1\n\tbeqz $v1, .L8017D978\n\tandi $t5, $v0, 0x1\n\t.L8017D904:\n\taddu $a3, $t6, $0\n\taddiu $t3, $a2, 0x1\n\taddiu $t4, $a0, 0x20\n\tandi $t2, $a0, 0x3E0\n\tsll $v0, $a2, 5\n\taddu $v0, $v0, $a2\n\tsll $v0, $v0, 1\n\taddu $a2, $v0, $t7\n\taddiu $t0, $0, 0x20\n\t.L8017D928:\n\taddiu $t0, $t0, -0x1\n\tsra $v0, $a3, 5\n\tandi $v0, $v0, 0x1\n\taddu $v0, $t5, $v0\n\tandi $v0, $v0, 0x1\n\tandi $v1, $a3, 0x1F\n\tor $v1, $v1, $t2\n\tsll $v1, $v1, 1\n\tsll $v0, $v0, 11\n\taddu $v0, $v0, $a1\n\taddu $v1, $v1, $v0\n\tlhu $a0, 0x0($v1)\n\taddiu $a3, $a3, 0x1\n\tsh $a0, 0x0($a2)\n\tbgez $t0, .L8017D928\n\taddiu $a2, $a2, 0x2\n\taddu $a2, $t3, $0\n\tslt $v0, $a2, $t1\n\tbnez $v0, .L8017D904\n\taddu $a0, $t4, $0\n\t.L8017D978:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017D898, .-func_8017D898\n"
);
