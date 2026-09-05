#include "common.h"
__asm__(
  ".globl func_800F780C\n"
  ".type func_800F780C, @function\n"
  "func_800F780C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a2)\n\tlbu $v0, 0x0($a1)\n\tandi $a3, $v1, 0x7C\n\tandi $v0, $v0, 0x1\n\tlw $v1, 0x0($a1)\n\tnop\n\tandi $v1, $v1, 0xFFFE\n\tbnez $v1, .L800F7840\n\tor $a3, $a3, $v0\n\tj .L800F7844\n\tori $v0, $a3, 0x2\n\t.L800F7840:\n\tandi $v0, $a3, 0xFF\n\t.L800F7844:\n\taddu $a3, $v0, $zero\n\tsb $a3, 0x0($a2)\n\tandi $v0, $a0, 0xFF\n\tand $a3, $a3, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $a3, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F780C, .-func_800F780C\n"
);
