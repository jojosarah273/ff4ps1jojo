#include "common.h"
__asm__(
  ".globl func_800F7EE8\n"
  ".type func_800F7EE8, @function\n"
  "func_800F7EE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v0, 0x0($v1)\n\tlbu $a0, 0x0($a1)\n\tandi $v0, $v0, 0x1\n\tsll $v0, $v0, 8\n\taddu $a0, $a0, $v0\n\tsrl $v1, $a0, 1\n\tsb $v1, 0x0($a1)\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $a0, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7EE8, .-func_800F7EE8\n"
);
