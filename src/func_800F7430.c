#include "common.h"
__asm__(
  ".globl func_800F7430\n"
  ".type func_800F7430, @function\n"
  "func_800F7430:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED60)($gp)\n\tlbu $v0, 0x0($a0)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlw $a1, %gp_rel(D_8019ED60)($gp)\n\tlbu $v0, 0x1($a0)\n\tjr $ra\n\tsb $v0, 0x1($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7430, .-func_800F7430\n"
);
