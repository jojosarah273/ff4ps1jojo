#include "common.h"
__asm__(
  ".globl func_800F55C0\n"
  ".type func_800F55C0, @function\n"
  "func_800F55C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $a0, $a0, 0xFFFF\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED44)($gp)\n\taddu $a2, $v0, $zero\n\tlbu $v1, 0x0($v0)\n\tlhu $a1, 0x0($a1)\n\tnop\n\tbne $a1, $a0, .L800F55EC\n\tandi $v1, $v1, 0x7C\n\tj .L800F5604\n\tori $v1, $v1, 0x3\n\t.L800F55EC:\n\tsltu $v0,$a1,$a0\n\tbeqz $v0, .L800F5600\n\tnop\n\tj .L800F5604\n\tori $v1, $v1, 0x80\n\t.L800F5600:\n\tori $v1, $v1, 0x1\n\t.L800F5604:\n\tjr $ra\n\tsb $v1, 0x0($a2)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F55C0, .-func_800F55C0\n"
);
