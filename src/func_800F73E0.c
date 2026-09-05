#include "common.h"
__asm__(
  ".globl func_800F73E0\n"
  ".type func_800F73E0, @function\n"
  "func_800F73E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED68)($gp)\n\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\tlbu $v1, 0x0($a2)\n\tlbu $a1, 0x0($v0)\n\tandi $v1, $v1, 0x7D\n\tandi $v0, $a1, 0x80\n\tor $v0, $v1, $v0\n\tbnez $a1, .L800F740C\n\tandi $v1, $v0, 0xFF\n\tj .L800F7410\n\tori $v0, $v1, 0x2\n\t.L800F740C:\n\tandi $v0, $v1, 0xFF\n\t.L800F7410:\n\taddu $v1, $v0, $zero\n\tsb $v1, 0x0($a2)\n\tandi $v0, $a0, 0xFF\n\tand $v1, $v1, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $v1, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F73E0, .-func_800F73E0\n"
);
