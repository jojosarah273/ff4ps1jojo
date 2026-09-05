#include "common.h"
__asm__(
  ".globl func_800F7C98\n"
  ".type func_800F7C98, @function\n"
  "func_800F7C98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED44)($gp)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tlhu $a0, 0x0($a1)\n\tlbu $v0, 0x0($v1)\n\tsll $a0, $a0, 1\n\tandi $v0, $v0, 0x1\n\taddu $a0, $a0, $v0\n\tandi $v1, $a0, 0xFF\n\tsh $v1, 0x0($a1)\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $a0, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7C98, .-func_800F7C98\n"
);
