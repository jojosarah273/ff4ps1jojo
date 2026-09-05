#include "common.h"
__asm__(
  ".globl func_800F79E0\n"
  ".type func_800F79E0, @function\n"
  "func_800F79E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED68)($gp)\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tlbu $a1, 0x0($a2)\n\tlbu $v0, 0x1($v1)\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tandi $a1, $a1, 0x7D\n\tandi $v0, $v0, 0x80\n\tor $v0, $a1, $v0\n\tandi $a1, $v0, 0xFF\n\tlhu $v0, 0x0($v1)\n\tnop\n\tbnez $v0, .L800F7A1C\n\tnop\n\tj .L800F7A20\n\tori $v0, $a1, 0x2\n\t.L800F7A1C:\n\tandi $v0, $a1, 0xFF\n\t.L800F7A20:\n\taddu $a1, $v0, $zero\n\tsb $a1, 0x0($a2)\n\tandi $v0, $a0, 0xFF\n\tand $a1, $a1, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $a1, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F79E0, .-func_800F79E0\n"
);
