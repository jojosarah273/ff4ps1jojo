#include "common.h"
__asm__(
  ".globl func_801825B8\n"
  ".type func_801825B8, @function\n"
  "func_801825B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, 0x4($a2)\n\tnop\n\tlhu $v0, 0x2($v1)\n\tnop\n\tsrl $v0, $v0, 3\n\tandi $t0, $v0, 0x7F\n\tlhu $v0, 0x0($v1)\n\tlw $v1, 0x0($a2)\n\tsrl $v0, $v0, 3\n\tandi $t4, $v0, 0x7F\n\taddiu $v0, $zero, 0x7\n\tbeq $v1, $v0, .L80182608\n\taddu $v1, $zero, $zero\n\tlui $v0, %hi(D_8019EE2C)\n\tlhu $v0, %lo(D_8019EE2C)($v0)\n\tnop\n\tandi $v0, $v0, 0x1000\n\tbnez $v0, .L80182670\n\taddu $a3, $t4, $zero\n\taddu $v1, $zero, $zero\n\t.L80182608:\n\taddu $a3, $t4, $zero\n\tsll $v0, $t0, 8\n\taddu $t1, $a1, $v0\n\taddiu $t3, $t0, 0x1\n\taddiu $t2, $v1, 0x1\n\tsll $v0, $v1, 5\n\taddu $v0, $v0, $v1\n\tsll $v0, $v0, 1\n\taddu $a2, $v0, $a0\n\taddiu $t0, $zero, 0x20\n\t.L80182630:\n\tsll $v0, $a3, 1\n\taddiu $v1, $a3, 0x1\n\tandi $a3, $v1, 0x7F\n\taddu $v0, $v0, $t1\n\tlbu $v1, 0x0($v0)\n\taddiu $t0, $t0, -0x1\n\tsh $v1, 0x0($a2)\n\tbgez $t0, .L80182630\n\taddiu $a2, $a2, 0x2\n\taddu $v1, $t2, $zero\n\tslti $v0, $v1, 0x1F\n\tbnez $v0, .L80182608\n\tandi $t0, $t3, 0x7F\n\tjr $ra\n\tnop\n\t.L8018266C:\n\taddu $a3, $t4, $zero\n\t.L80182670:\n\tsll $v0, $t0, 8\n\taddu $t1, $a1, $v0\n\taddiu $t2, $v1, 0x1\n\taddiu $t3, $t0, 0x2\n\tsll $v0, $v1, 6\n\taddu $a2, $v0, $a0\n\taddiu $t0, $zero, 0x1F\n\t.L8018268C:\n\tsll $v0, $a3, 1\n\taddiu $v1, $a3, 0x2\n\tandi $a3, $v1, 0x7F\n\taddu $v0, $v0, $t1\n\tlbu $v1, 0x0($v0)\n\taddiu $t0, $t0, -0x1\n\tsh $v1, 0x0($a2)\n\tbgez $t0, .L8018268C\n\taddiu $a2, $a2, 0x2\n\taddu $v1, $t2, $zero\n\tslti $v0, $v1, 0x20\n\tbnez $v0, .L8018266C\n\tandi $t0, $t3, 0x7F\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801825B8, .-func_801825B8\n"
);
