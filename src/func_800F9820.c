#include "common.h"
__asm__(
  ".globl func_800F9820\n"
  ".type func_800F9820, @function\n"
  "func_800F9820:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlbu $a2, 0x0($a0)\n\tlbu $a1, 0x1($a0)\n\tlw $a3, %gp_rel(D_8019ED68)($gp)\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tsll $a1, $a1, 8\n\tor $a2, $a2, $a1\n\tlbu $v0, 0x0($a3)\n\tlhu $a0, 0x0($v1)\n\tandi $v0, $v0, 0xFD\n\tsb $v0, 0x0($a3)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tor $a0, $a0, $a2\n\tlbu $v0, 0x0($v1)\n\tbnez $a0, .L800F9860\n\tnop\n\tori $v0, $v0, 0x2\n\t.L800F9860:\n\tjr $ra\n\tsb $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9820, .-func_800F9820\n"
);
