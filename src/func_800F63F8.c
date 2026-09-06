#include "common.h"
__asm__(
  ".globl func_800F63F8\n"
  ".type func_800F63F8, @function\n"
  "func_800F63F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, 0x1F80\n\tori $v0, $v0, 0x3C0\n\tlbu $v1, 0x13($v0)\n\tlbu $a0, 0x8($v0)\n\tandi $v1, $v1, 0x7D\n\tandi $v0, $a0, 0x80\n\tor $v0, $v1, $v0\n\tbnez $a0, .L800F6424\n\tandi $v1, $v0, 0xFF\n\tj .L800F6428\n\tori $v1, $v1, 0x2\n\t.L800F6424:\n\tandi $v1, $v1, 0xFF\n\t.L800F6428:\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tjr $ra\n\tsb $v1, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F63F8, .-func_800F63F8\n"
);
