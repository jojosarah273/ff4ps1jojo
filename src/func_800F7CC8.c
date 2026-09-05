#include "common.h"
__asm__(
  ".globl func_800F7CC8\n"
  ".type func_800F7CC8, @function\n"
  "func_800F7CC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($v0)\n\tlbu $v0, 0x0($a0)\n\tandi $v1, $v1, 0x1\n\tsll $v1, $v1, 8\n\taddu $v0, $v0, $v1\n\tsw $v0, 0x0($a1)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tnop\n\tlw $v0, 0x0($v1)\n\tnop\n\tsrl $a1, $v0, 31\n\taddu $v0, $v0, $a1\n\tsra $v0, $v0, 1\n\tjr $ra\n\tsb $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7CC8, .-func_800F7CC8\n"
);
