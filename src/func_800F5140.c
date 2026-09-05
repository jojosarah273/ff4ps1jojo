#include "common.h"
__asm__(
  ".globl func_800F5140\n"
  ".type func_800F5140, @function\n"
  "func_800F5140:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tsll $v0, $v0, 1\n\tsw $v0, 0x0($a0)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\tlbu $v0, 0x0($v1)\n\tjr $ra\n\tsb $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5140, .-func_800F5140\n"
);
