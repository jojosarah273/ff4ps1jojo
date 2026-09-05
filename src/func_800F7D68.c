#include "common.h"
__asm__(
  ".globl func_800F7D68\n"
  ".type func_800F7D68, @function\n"
  "func_800F7D68:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a2)\n\tlbu $v0, 0x0($a1)\n\tandi $a3, $v1, 0x7C\n\tandi $v0, $v0, 0x1\n\tlw $v1, 0x0($a1)\n\tnop\n\tandi $v1, $v1, 0x100\n\tbeqz $v1, .L800F7D9C\n\tor $a3, $a3, $v0\n\tj .L800F7DA0\n\tori $v1, $a3, 0x80\n\t.L800F7D9C:\n\tandi $v1, $a3, 0xFF\n\t.L800F7DA0:\n\tlbu $v0, 0x0($a1)\n\tnop\n\tbnez $v0, .L800F7DB8\n\taddu $a3, $v1, $zero\n\tj .L800F7DBC\n\tori $v0, $a3, 0x2\n\t.L800F7DB8:\n\tandi $v0, $a3, 0xFF\n\t.L800F7DBC:\n\taddu $a3, $v0, $zero\n\tsb $a3, 0x0($a2)\n\tandi $v0, $a0, 0xFF\n\tand $a3, $a3, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $a3, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7D68, .-func_800F7D68\n"
);
