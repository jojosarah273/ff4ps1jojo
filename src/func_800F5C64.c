#include "common.h"
__asm__(
  ".globl func_800F5C64\n"
  ".type func_800F5C64, @function\n"
  "func_800F5C64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a2)\n\tlw $v0, 0x0($a1)\n\tnop\n\tandi $v0, $v0, 0x8000\n\tbeqz $v0, .L800F5C8C\n\tandi $v1, $v1, 0x7D\n\tj .L800F5C90\n\tori $v1, $v1, 0x80\n\t.L800F5C8C:\n\tandi $v1, $v1, 0xFF\n\t.L800F5C90:\n\tlhu $v0, 0x0($a1)\n\tnop\n\tbnez $v0, .L800F5CA8\n\tnop\n\tj .L800F5CAC\n\tori $v0, $v1, 0x2\n\t.L800F5CA8:\n\tandi $v0, $v1, 0xFF\n\t.L800F5CAC:\n\taddu $v1, $v0, $zero\n\tsb $v1, 0x0($a2)\n\tandi $v0, $a0, 0xFF\n\tand $v1, $v1, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $v1, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5C64, .-func_800F5C64\n"
);
