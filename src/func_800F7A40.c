#include "common.h"
__asm__(
  ".globl func_800F7A40\n"
  ".type func_800F7A40, @function\n"
  "func_800F7A40:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tlbu $a1, 0x0($a0)\n\tlbu $v0, 0x0($v1)\n\tsll $a1, $a1, 1\n\tandi $v0, $v0, 0x1\n\taddu $a1, $a1, $v0\n\tsb $a1, 0x0($a0)\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $a1, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7A40, .-func_800F7A40\n"
);
