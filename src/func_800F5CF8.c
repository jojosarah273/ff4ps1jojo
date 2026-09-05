#include "common.h"
__asm__(
  ".globl func_800F5CF8\n"
  ".type func_800F5CF8, @function\n"
  "func_800F5CF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsh $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED44)($gp)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tlhu $v0, 0x0($a0)\n\tjr $ra\n\tsw $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5CF8, .-func_800F5CF8\n"
);
