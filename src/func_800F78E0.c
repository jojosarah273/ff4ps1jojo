#include "common.h"
__asm__(
  ".globl func_800F78E0\n"
  ".type func_800F78E0, @function\n"
  "func_800F78E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($a1)\n\tlbu $a0, 0x0($v0)\n\tandi $v1, $v1, 0x7D\n\tandi $v0, $a0, 0x80\n\tor $v0, $v1, $v0\n\tbnez $a0, .L800F790C\n\tandi $v1, $v0, 0xFF\n\tj .L800F7910\n\tori $v0, $v1, 0x2\n\t.L800F790C:\n\tandi $v0, $v1, 0xFF\n\t.L800F7910:\n\tjr $ra\n\tsb $v0, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F78E0, .-func_800F78E0\n"
);
