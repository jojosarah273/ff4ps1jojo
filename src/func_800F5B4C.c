#include "common.h"
__asm__(
  ".globl func_800F5B4C\n"
  ".type func_800F5B4C, @function\n"
  "func_800F5B4C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a1)\n\tlbu $v0, 0x0($a0)\n\tandi $a2, $v1, 0x7D\n\tandi $v0, $v0, 0x80\n\tor $v0, $a2, $v0\n\tlbu $v1, 0x0($a0)\n\tnop\n\tbnez $v1, .L800F5B80\n\tandi $a2, $v0, 0xFF\n\tj .L800F5B84\n\tori $v0, $a2, 0x2\n\t.L800F5B80:\n\tandi $v0, $a2, 0xFF\n\t.L800F5B84:\n\tjr $ra\n\tsb $v0, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5B4C, .-func_800F5B4C\n"
);
