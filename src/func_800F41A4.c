#include "common.h"
__asm__(
  ".globl func_800F41A4\n"
  ".type func_800F41A4, @function\n"
  "func_800F41A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tlbu $a0, 0x0($a1)\n\tlbu $v0, 0x1($v1)\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tandi $a2, $a0, 0x7D\n\tandi $v0, $v0, 0x80\n\tor $v0, $a2, $v0\n\tlhu $a0, 0x0($v1)\n\tnop\n\tbnez $a0, .L800F41DC\n\tandi $a2, $v0, 0xFF\n\tj .L800F41E0\n\tori $v0, $a2, 0x2\n\t.L800F41DC:\n\tandi $v0, $a2, 0xFF\n\t.L800F41E0:\n\tjr $ra\n\tsb $v0, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F41A4, .-func_800F41A4\n"
);
