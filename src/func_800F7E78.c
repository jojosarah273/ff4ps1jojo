#include "common.h"
__asm__(
  ".globl func_800F7E78\n"
  ".type func_800F7E78, @function\n"
  "func_800F7E78:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a2)\n\tlbu $v0, 0x0($a1)\n\tandi $a3, $v1, 0x7C\n\tandi $v0, $v0, 0x1\n\tor $a3, $a3, $v0\n\tlw $v1, 0x0($a1)\n\tlui $v0, (0x10000 >> 16)\n\tand $v1, $v1, $v0\n\tbnez $v1, .L800F7EAC\n\tori $v1, $a3, 0x80\n\tandi $v1, $a3, 0xFF\n\t.L800F7EAC:\n\tlhu $v0, 0x0($a1)\n\tnop\n\tbnez $v0, .L800F7EC4\n\taddu $a3, $v1, $zero\n\tj .L800F7EC8\n\tori $v0, $a3, 0x2\n\t.L800F7EC4:\n\tandi $v0, $a3, 0xFF\n\t.L800F7EC8:\n\taddu $a3, $v0, $zero\n\tsb $a3, 0x0($a2)\n\tandi $v0, $a0, 0xFF\n\tand $a3, $a3, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $a3, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7E78, .-func_800F7E78\n"
);
