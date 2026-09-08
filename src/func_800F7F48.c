#include "common.h"
__asm__(
  ".globl func_800F7F48\n"
  ".type func_800F7F48, @function\n"
  "func_800F7F48:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlbu $v1, 0x0($a0)\n\tlbu $a2, 0x0($a1)\n\tlbu $a0, 0x0($v0)\n\tsubu $a2, $a2, $v1\n\txori $v0, $a0, 0x1\n\tandi $v0, $v0, 0x1\n\tsubu $a2, $a2, $v0\n\tandi $a0, $a0, 0x3C\n\taddiu $v0, $0, -0x40\n\tand $v0, $a2, $v0\n\tor $v0, $a0, $v0\n\tandi $a0, $v0, 0xFF\n\tandi $v0, $a2, 0x100\n\tbnez $v0, .L800F7F94\n\tsb $a2, 0x0($a1)\n\tj .L800F7F98\n\tori $v0, $a0, 0x1\n\t.L800F7F94:\n\tandi $v0, $a0, 0xFF\n\t.L800F7F98:\n\taddu $a0, $v0, $0\n\tandi $v0, $a2, 0xFF\n\tbnez $v0, .L800F7FB0\n\tnop\n\tj .L800F7FB4\n\tori $a0, $a0, 0x2\n\t.L800F7FB0:\n\tandi $a0, $a0, 0xFF\n\t.L800F7FB4:\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tnop\n\tsw $a2, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tjr $ra\n\tsb $a0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7F48, .-func_800F7F48\n"
);
