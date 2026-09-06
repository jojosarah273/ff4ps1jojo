#include "common.h"
__asm__(
  ".globl func_800F7780\n"
  ".type func_800F7780, @function\n"
  "func_800F7780:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x0($a0)\n\tnop\n\tsw $v0, 0x0($v1)\n\tlw $a2, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x1($a0)\n\tlw $v1, 0x0($a2)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tsw $v1, 0x0($a2)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tnop\n\tlhu $v0, 0x0($a1)\n\tnop\n\tsrl $v0, $v0, 1\n\tsb $v0, 0x0($a0)\n\tsrl $v0, $v0, 8\n\tjr $ra\n\tsb $v0, 0x1($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7780, .-func_800F7780\n"
);
