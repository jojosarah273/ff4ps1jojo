#include "common.h"
__asm__(
  ".globl func_800F960C\n"
  ".type func_800F960C, @function\n"
  "func_800F960C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED4C)($gp)\n\tnop\n\tlhu $v1, 0x0($a2)\n\tlui $v0, %hi(D_800D0001)\n\taddu $v0, $v1, $v0\n\tlbu $a0, %lo(D_800D0001)($v0)\n\tlbu $a1, %lo(D_800D0002)($v0)\n\taddiu $v1, $v1, 0x2\n\tsh $v1, 0x0($a2)\n\tlw $v0, %gp_rel(D_8019ED58)($gp)\n\tsll $a0, $a0, 8\n\tor $a1, $a1, $a0\n\tjr $ra\n\tsh $a1, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F960C, .-func_800F960C\n"
);
