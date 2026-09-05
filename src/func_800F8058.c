#include "common.h"
__asm__(
  ".globl func_800F8058\n"
  ".type func_800F8058, @function\n"
  "func_800F8058:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlbu $a2, 0x0($v1)\n\tlbu $a1, 0x0($v0)\n\tsubu $a2, $a2, $a0\n\txori $v0, $a1, 0x1\n\tandi $v0, $v0, 0x1\n\tsubu $a2, $a2, $v0\n\tandi $a1, $a1, 0x3C\n\taddiu $v0, $zero, -0x40\n\tand $v0, $a2, $v0\n\tor $v0, $a1, $v0\n\tandi $a1, $v0, 0xFF\n\tandi $v0, $a2, 0x100\n\tbnez $v0, .L800F80A0\n\tsb $a2, 0x0($v1)\n\tj .L800F80A4\n\tori $v0, $a1, 0x1\n\t.L800F80A0:\n\tandi $v0, $a1, 0xFF\n\t.L800F80A4:\n\taddu $a1, $v0, $zero\n\tandi $v0, $a2, 0xFF\n\tbnez $v0, .L800F80B8\n\tandi $a0, $a1, 0xFF\n\tori $a0, $a1, 0x2\n\t.L800F80B8:\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tnop\n\tsw $a2, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tjr $ra\n\tsb $a0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F8058, .-func_800F8058\n"
);
