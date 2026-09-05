#include "common.h"
__asm__(
  ".globl func_800F6104\n"
  ".type func_800F6104, @function\n"
  "func_800F6104:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlbu $v1, 0x1($a0)\n\tlbu $v0, 0x0($a0)\n\tsll $v1, $v1, 8\n\tor $v0, $v0, $v1\n\taddiu $v0, $v0, 0x1\n\tsra $v1, $v0, 8\n\tsb $v0, 0x0($a0)\n\tsb $v1, 0x1($a0)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6104, .-func_800F6104\n"
);
