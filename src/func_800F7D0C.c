#include "common.h"
__asm__(
  ".globl func_800F7D0C\n"
  ".type func_800F7D0C, @function\n"
  "func_800F7D0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a1)\n\tlbu $v0, 0x0($a0)\n\tandi $a2, $v1, 0x7C\n\tandi $v0, $v0, 0x1\n\tlw $v1, 0x0($a0)\n\tnop\n\tandi $v1, $v1, 0x100\n\tbeqz $v1, .L800F7D40\n\tor $a2, $a2, $v0\n\tj .L800F7D44\n\tori $v1, $a2, 0x80\n\t.L800F7D40:\n\tandi $v1, $a2, 0xFF\n\t.L800F7D44:\n\tlbu $v0, 0x0($a0)\n\tnop\n\tbnez $v0, .L800F7D5C\n\taddu $a2, $v1, $zero\n\tj .L800F7D60\n\tori $v1, $a2, 0x2\n\t.L800F7D5C:\n\tandi $v1, $a2, 0xFF\n\t.L800F7D60:\n\tjr $ra\n\tsb $v1, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7D0C, .-func_800F7D0C\n"
);
