#include "common.h"
__asm__(
  ".globl func_800F4008\n"
  ".type func_800F4008, @function\n"
  "func_800F4008:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $a0, $a0, 0xFF\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlbu $v1, 0x0($a1)\n\tlbu $a2, 0x0($v0)\n\taddu $a0, $v1, $a0\n\tandi $v0, $a2, 0x1\n\taddu $a0, $a0, $v0\n\tandi $a2, $a2, 0x3E\n\tandi $v0, $a0, 0xC0\n\tor $a2, $v0, $a2\n\tandi $v0, $a0, 0x100\n\tbeqz $v0, .L800F4048\n\tsb $a0, 0x0($a1)\n\tj .L800F404C\n\tori $v1, $a2, 0x1\n\t.L800F4048:\n\tandi $v1, $a2, 0xFF\n\t.L800F404C:\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tsb $v1, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $a0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F4008, .-func_800F4008\n"
);
