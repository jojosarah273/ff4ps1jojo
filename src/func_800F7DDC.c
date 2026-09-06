#include "common.h"
__asm__(
  ".globl func_800F7DDC\n"
  ".type func_800F7DDC, @function\n"
  "func_800F7DDC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlbu $a2, 0x0($a0)\n\tlbu $v0, 0x1($a0)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tsll $v0, $v0, 8\n\tlbu $v1, 0x0($a1)\n\tor $a2, $a2, $v0\n\tandi $v1, $v1, 0x1\n\tsll $v1, $v1, 16\n\taddu $a2, $a2, $v1\n\tsrl $v0, $a2, 1\n\tandi $v0, $v0, 0xFFFF\n\tsb $v0, 0x0($a0)\n\tsrl $v0, $v0, 8\n\tsb $v0, 0x1($a0)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $a2, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7DDC, .-func_800F7DDC\n"
);
