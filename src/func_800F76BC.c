#include "common.h"
__asm__(
  ".globl func_800F76BC\n"
  ".type func_800F76BC, @function\n"
  "func_800F76BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x0($a0)\n\tnop\n\tsw $v0, 0x0($a1)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsra $v0, $v0, 1\n\tjr $ra\n\tsb $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F76BC, .-func_800F76BC\n"
);
