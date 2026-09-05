#include "common.h"
__asm__(
  ".globl func_800F9730\n"
  ".type func_800F9730, @function\n"
  "func_800F9730:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($a1)\n\tlbu $v1, 0x0($a0)\n\tnor $v0, $zero, $v0\n\tand $v1, $v1, $v0\n\tsb $v1, 0x0($a0)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($a1)\n\tnop\n\tandi $v0, $v0, 0xFD\n\tsb $v0, 0x0($a1)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlbu $v0, 0x0($a0)\n\tlbu $v1, 0x0($a1)\n\tbnez $v0, .L800F977C\n\tnop\n\tori $v1, $v1, 0x2\n\t.L800F977C:\n\tjr $ra\n\tsb $v1, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9730, .-func_800F9730\n"
);
