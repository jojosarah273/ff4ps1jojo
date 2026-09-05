#include "common.h"
__asm__(
  ".globl func_800F6130\n"
  ".type func_800F6130, @function\n"
  "func_800F6130:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a0, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a0)\n\tlw $v0, 0x0($a1)\n\tnop\n\tandi $v0, $v0, 0x8000\n\tbeqz $v0, .L800F6158\n\tandi $v1, $v1, 0x7D\n\tj .L800F615C\n\tori $v1, $v1, 0x80\n\t.L800F6158:\n\tandi $v1, $v1, 0xFF\n\t.L800F615C:\n\tlhu $v0, 0x0($a1)\n\tnop\n\tbnez $v0, .L800F6174\n\tnop\n\tj .L800F6178\n\tori $v1, $v1, 0x2\n\t.L800F6174:\n\tandi $v1, $v1, 0xFF\n\t.L800F6178:\n\tjr $ra\n\tsb $v1, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6130, .-func_800F6130\n"
);
