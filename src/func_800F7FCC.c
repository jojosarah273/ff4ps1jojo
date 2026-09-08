#include "common.h"
__asm__(
  ".globl func_800F7FCC\n"
  ".type func_800F7FCC, @function\n"
  "func_800F7FCC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlbu $v0, 0x1($a0)\n\tlbu $a2, 0x0($a0)\n\tlw $a0, %gp_rel(D_8019ED44)($gp)\n\tsll $v0, $v0, 8\n\tor $a2, $a2, $v0\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlhu $v1, 0x0($a0)\n\tlbu $a1, 0x0($v0)\n\tsubu $a2, $v1, $a2\n\txori $v0, $a1, 0x1\n\tandi $v0, $v0, 0x1\n\tsubu $a2, $a2, $v0\n\tsh $a2, 0x0($a0)\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tandi $a1, $a1, 0x3C\n\tlbu $v1, 0x1($v0)\n\tlui $v0, (0x10000 >> 16)\n\tand $v0, $a2, $v0\n\tandi $v1, $v1, 0xC0\n\tbnez $v0, .L800F8028\n\tor $a1, $a1, $v1\n\tj .L800F802C\n\tori $v0, $a1, 0x1\n\t.L800F8028:\n\tandi $v0, $a1, 0xFF\n\t.L800F802C:\n\taddu $a1, $v0, $0\n\tandi $v0, $a2, 0xFFFF\n\tbnez $v0, .L800F8040\n\tandi $a0, $a1, 0xFF\n\tori $a0, $a1, 0x2\n\t.L800F8040:\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tnop\n\tsw $a2, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tjr $ra\n\tsb $a0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7FCC, .-func_800F7FCC\n"
);
