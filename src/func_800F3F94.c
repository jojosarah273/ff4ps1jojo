#include "common.h"
__asm__(
  ".globl func_800F3F94\n"
  ".type func_800F3F94, @function\n"
  "func_800F3F94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED44)($gp)\n\tlbu $v1, 0x0($a0)\n\tlbu $a3, 0x0($v0)\n\tlhu $a2, 0x0($a1)\n\tlbu $v0, 0x1($a0)\n\taddu $a2, $a2, $v1\n\tsll $v0, $v0, 8\n\taddu $a2, $a2, $v0\n\tandi $v1, $a3, 0x1\n\taddu $a2, $a2, $v1\n\tsh $a2, 0x0($a1)\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tandi $a3, $a3, 0x3E\n\tlbu $v1, 0x1($v0)\n\tlui $v0, (0x10000 >> 16)\n\tand $v0, $a2, $v0\n\tandi $v1, $v1, 0xC0\n\tbeqz $v0, .L800F3FEC\n\tor $a3, $a3, $v1\n\tj .L800F3FF0\n\tori $v1, $a3, 0x1\n\t.L800F3FEC:\n\tandi $v1, $a3, 0xFF\n\t.L800F3FF0:\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tsb $v1, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $a2, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3F94, .-func_800F3F94\n"
);
