#include "common.h"
__asm__(
  ".globl func_8017794C\n"
  ".type func_8017794C, @function\n"
  "func_8017794C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlhu $v0, %gp_rel(D_8019EE2C)($gp)\n\tnop\n\tandi $v0, $v0, 0x1000\n\tbnez $v0, .L80177968\n\taddu $v1, $zero, $zero\n\tjr $ra\n\taddu $v0, $zero, $zero\n\t.L80177968:\n\tlw $a1, %gp_rel(D_8019EE28)($gp)\n\taddiu $v0, $zero, 0x100\n\tbeq $a1, $v0, .L8017798C\n\tnop\n\tbeqz $a1, .L8017798C\n\tlui $v0, (0x10000 >> 16)\n\tand $v0, $a1, $v0\n\tbeqz $v0, .L801779DC\n\tnop\n\t.L8017798C:\n\tlbu $a0, 0x0($a0)\n\tsw $zero, %gp_rel(D_8019EE28)($gp)\n\tslti $v0, $a0, 0x11\n\tbnez $v0, .L801779DC\n\tnop\n\tlh $v0, %gp_rel(D_8019EE00)($gp)\n\tnop\n\tbnez $v0, .L801779DC\n\tnop\n\tlh $v0, %gp_rel(D_8019EE02)($gp)\n\tnop\n\tbnez $v0, .L801779DC\n\tlui $v0, (0x10000 >> 16)\n\tsw $v0, %gp_rel(D_8019EE28)($gp)\n\tslti $v1, $a0, 0x21\n\tbnez $v1, .L801779D4\n\tnop\n\taddiu $a0, $zero, 0x20\n\t.L801779D4:\n\tandi $v0, $a0, 0xFFE\n\taddiu $v1, $v0, -0x10\n\t.L801779DC:\n\tjr $ra\n\taddu $v0, $v1, $zero\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017794C, .-func_8017794C\n"
);
