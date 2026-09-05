#include "common.h"
__asm__(
  ".globl func_800F5E1C\n"
  ".type func_800F5E1C, @function\n"
  "func_800F5E1C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED5C)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsb $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED5C)($gp)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x0($a0)\n\tjr $ra\n\tsw $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5E1C, .-func_800F5E1C\n"
);
