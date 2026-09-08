#include "common.h"
__asm__(
  ".globl func_800F7BE8\n"
  ".type func_800F7BE8, @function\n"
  "func_800F7BE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x0($a2)\n\tlw $v1, 0x0($a1)\n\tandi $a3, $v0, 0x7C\n\tlui $v0, (0x10000 >> 16)\n\tand $v1, $v1, $v0\n\tbnez $v1, .L800F7C10\n\tori $v1, $a3, 0x1\n\tandi $v1, $a3, 0xFF\n\t.L800F7C10:\n\tlw $v0, 0x0($a1)\n\tnop\n\tandi $v0, $v0, 0x8000\n\tbeqz $v0, .L800F7C2C\n\taddu $a3, $v1, $0\n\tj .L800F7C30\n\tori $v1, $a3, 0x80\n\t.L800F7C2C:\n\tandi $v1, $a3, 0xFF\n\t.L800F7C30:\n\tlhu $v0, 0x0($a1)\n\tnop\n\tbnez $v0, .L800F7C48\n\taddu $a3, $v1, $0\n\tj .L800F7C4C\n\tori $v0, $a3, 0x2\n\t.L800F7C48:\n\tandi $v0, $a3, 0xFF\n\t.L800F7C4C:\n\taddu $a3, $v0, $0\n\tsb $a3, 0x0($a2)\n\tandi $v0, $a0, 0xFF\n\tand $a3, $a3, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $a3, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7BE8, .-func_800F7BE8\n"
);
