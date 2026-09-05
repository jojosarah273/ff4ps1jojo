#include "common.h"
__asm__(
  ".globl func_800F9784\n"
  ".type func_800F9784, @function\n"
  "func_800F9784:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlbu $a1, 0x0($a0)\n\tlbu $a2, 0x1($a0)\n\tlw $a3, %gp_rel(D_8019ED68)($gp)\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tsll $a2, $a2, 8\n\tor $a1, $a1, $a2\n\tlbu $v0, 0x0($a3)\n\tlhu $a0, 0x0($v1)\n\tandi $v0, $v0, 0xFD\n\txori $a0, $a0, 0xFF\n\tsb $v0, 0x0($a3)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tand $a1, $a1, $a0\n\tlbu $v0, 0x0($v1)\n\tbnez $a1, .L800F97C8\n\tnop\n\tori $v0, $v0, 0x2\n\t.L800F97C8:\n\tjr $ra\n\tsb $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9784, .-func_800F9784\n"
);
