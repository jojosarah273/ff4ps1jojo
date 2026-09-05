#include "common.h"
__asm__(
  ".globl func_800F7894\n"
  ".type func_800F7894, @function\n"
  "func_800F7894:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsw $v0, 0x0($a0)\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 1\n\tjr $ra\n\tsh $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7894, .-func_800F7894\n"
);
