#include "common.h"
__asm__(
  ".globl func_800F7B40\n"
  ".type func_800F7B40, @function\n"
  "func_800F7B40:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlbu $v1, 0x1($a0)\n\tlbu $a2, 0x0($a0)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tsll $v1, $v1, 8\n\tor $a2, $a2, $v1\n\tlbu $v0, 0x0($a1)\n\tsll $v1, $a2, 1\n\tandi $v0, $v0, 0x1\n\taddu $a2, $v1, $v0\n\tsra $v0, $a2, 8\n\tsb $a2, 0x0($a0)\n\tsb $v0, 0x1($a0)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $a2, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7B40, .-func_800F7B40\n"
);
