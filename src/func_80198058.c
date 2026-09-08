#include "common.h"
__asm__(
  ".globl func_80198058\n"
  ".type func_80198058, @function\n"
  "func_80198058:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $a2, $0, $0\n\tbgez $a1, .L8019806C\n\taddu $a3, $0, $0\n\taddiu $a2, $0, 0x1\n\tnegu $a1, $a1\n\t.L8019806C:\n\tbgez $a0, .L8019807C\n\tnop\n\taddiu $a3, $0, 0x1\n\tnegu $a0, $a0\n\t.L8019807C:\n\tbnez $a1, .L80198090\n\tslt $v0, $a0, $a1\n\tbeqz $a0, .L801981C4\n\taddu $v0, $0, $0\n\tslt $v0, $a0, $a1\n\t.L80198090:\n\tbeqz $v0, .L80198120\n\tlui $v0, 0x7FE0\n\tand $v0, $a0, $v0\n\tbeqz $v0, .L801980D8\n\tsra $v0, $a1, 10\n\tdiv $0,$a0,$v0\n\tbnez $v0, .L801980B4\n\tnop\n\t.word 0x0007000D\n\t.L801980B4:\n\taddiu $at, $0, -0x1\n\tbne $v0, $at, .L801980CC\n\tlui $at, 0x8000\n\tbne $a0, $at, .L801980CC\n\tnop\n\t.word 0x0006000D\n\t.L801980CC:\n\tmflo $a0\n\tj .L8019810C\n\tsll $v0, $a0, 1\n\t.L801980D8:\n\tsll $v0, $a0, 10\n\tdiv $0,$v0,$a1\n\tbnez $a1, .L801980EC\n\tnop\n\t.word 0x0007000D\n\t.L801980EC:\n\taddiu $at, $0, -0x1\n\tbne $a1, $at, .L80198104\n\tlui $at, 0x8000\n\tbne $v0, $at, .L80198104\n\tnop\n\t.word 0x0006000D\n\t.L80198104:\n\tmflo $a0\n\tsll $v0, $a0, 1\n\t.L8019810C:\n\tlui $v1, D_8019E4D4\n\taddu $v1, $v1, $v0\n\tlh $v1, D_8019E4D4($v1)\n\tj .L801981A8\n\tnop\n\t.L80198120:\n\tand $v0, $a1, $v0\n\tbeqz $v0, .L80198160\n\tsra $v0, $a0, 10\n\tdiv $0,$a1,$v0\n\tbnez $v0, .L8019813C\n\tnop\n\t.word 0x0007000D\n\t.L8019813C:\n\taddiu $at, $0, -0x1\n\tbne $v0, $at, .L80198154\n\tlui $at, 0x8000\n\tbne $a1, $at, .L80198154\n\tnop\n\t.word 0x0006000D\n\t.L80198154:\n\tmflo $a0\n\tj .L80198194\n\tsll $v0, $a0, 1\n\t.L80198160:\n\tsll $v0, $a1, 10\n\tdiv $0,$v0,$a0\n\tbnez $a0, .L80198174\n\tnop\n\t.word 0x0007000D\n\t.L80198174:\n\taddiu $at, $0, -0x1\n\tbne $a0, $at, .L8019818C\n\tlui $at, 0x8000\n\tbne $v0, $at, .L8019818C\n\tnop\n\t.word 0x0006000D\n\t.L8019818C:\n\tmflo $a0\n\tsll $v0, $a0, 1\n\t.L80198194:\n\tlui $v1, D_8019E4D4\n\taddu $v1, $v1, $v0\n\tlh $v1, D_8019E4D4($v1)\n\taddiu $v0, $0, 0x400\n\tsubu $v1, $v0, $v1\n\t.L801981A8:\n\tbeqz $a2, .L801981B4\n\taddiu $v0, $0, 0x800\n\tsubu $v1, $v0, $v1\n\t.L801981B4:\n\tbeqz $a3, .L801981C4\n\taddu $v0, $v1, $0\n\tnegu $v1, $v1\n\taddu $v0, $v1, $0\n\t.L801981C4:\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80198058, .-func_80198058\n"
);
