#include "common.h"
__asm__(
  ".globl func_800F7E20\n"
  ".type func_800F7E20, @function\n"
  "func_800F7E20:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a1)\n\tlbu $v0, 0x0($a0)\n\tandi $a2, $v1, 0x7C\n\tandi $v0, $v0, 0x1\n\tor $a2, $a2, $v0\n\tlw $v1, 0x0($a0)\n\tlui $v0, (0x10000 >> 16)\n\tand $v1, $v1, $v0\n\tbnez $v1, .L800F7E54\n\tori $v1, $a2, 0x80\n\tandi $v1, $a2, 0xFF\n\t.L800F7E54:\n\tlhu $v0, 0x0($a0)\n\tnop\n\tbnez $v0, .L800F7E6C\n\taddu $a2, $v1, $zero\n\tj .L800F7E70\n\tori $v1, $a2, 0x2\n\t.L800F7E6C:\n\tandi $v1, $a2, 0xFF\n\t.L800F7E70:\n\tjr $ra\n\tsb $v1, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7E20, .-func_800F7E20\n"
);
