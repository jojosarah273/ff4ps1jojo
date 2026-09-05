#include "common.h"
__asm__(
  ".globl func_800F6434\n"
  ".type func_800F6434, @function\n"
  "func_800F6434:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, (0x1F8003C0 >> 16)\n\tori $v0, $v0, (0x1F8003C0 & 0xFFFF)\n\tlbu $v1, 0x13($v0)\n\tlbu $a1, 0x8($v0)\n\tandi $a2, $v1, 0x7D\n\tandi $v0, $a1, 0x80\n\tor $v0, $a2, $v0\n\tbnez $a1, .L800F6460\n\tandi $a2, $v0, 0xFF\n\tj .L800F6464\n\tori $v0, $a2, 0x2\n\t.L800F6460:\n\tandi $v0, $a2, 0xFF\n\t.L800F6464:\n\taddu $a2, $v0, $zero\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tandi $v0, $a0, 0xFF\n\tsb $a2, 0x0($v1)\n\tand $a2, $a2, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $a2, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6434, .-func_800F6434\n"
);
