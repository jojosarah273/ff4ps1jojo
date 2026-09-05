#include "common.h"
__asm__(
  ".globl func_800F97D0\n"
  ".type func_800F97D0, @function\n"
  "func_800F97D0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v0, 0x0($a0)\n\tlbu $v1, 0x0($a1)\n\tnop\n\tor $v0, $v0, $v1\n\tsb $v0, 0x0($a0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0xFD\n\tsb $v0, 0x0($v1)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlbu $v0, 0x0($a0)\n\tlbu $v1, 0x0($a1)\n\tbnez $v0, .L800F9818\n\tnop\n\tori $v1, $v1, 0x2\n\t.L800F9818:\n\tjr $ra\n\tsb $v1, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F97D0, .-func_800F97D0\n"
);
