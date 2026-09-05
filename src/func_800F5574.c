#include "common.h"
__asm__(
  ".globl func_800F5574\n"
  ".type func_800F5574, @function\n"
  "func_800F5574:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $a0, $a0, 0xFF\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\taddu $a2, $v0, $zero\n\tlbu $v1, 0x0($v0)\n\tlbu $a1, 0x0($a1)\n\tnop\n\tbne $a1, $a0, .L800F55A0\n\tandi $v1, $v1, 0x7C\n\tj .L800F55B8\n\tori $v1, $v1, 0x3\n\t.L800F55A0:\n\tsltu $v0,$a1,$a0\n\tbeqz $v0, .L800F55B4\n\tnop\n\tj .L800F55B8\n\tori $v1, $v1, 0x80\n\t.L800F55B4:\n\tori $v1, $v1, 0x1\n\t.L800F55B8:\n\tjr $ra\n\tsb $v1, 0x0($a2)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5574, .-func_800F5574\n"
);
