#include "common.h"
__asm__(
  ".globl func_800F7968\n"
  ".type func_800F7968, @function\n"
  "func_800F7968:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($a0)\n\tlbu $v0, 0x0($a2)\n\tnop\n\tor $v0, $v0, $v1\n\tsb $v0, 0x0($a2)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x1($a0)\n\tlbu $v0, 0x1($a1)\n\tnop\n\tor $v0, $v0, $v1\n\tjr $ra\n\tsb $v0, 0x1($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7968, .-func_800F7968\n"
);
