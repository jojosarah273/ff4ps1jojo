#include "common.h"
__asm__(
  ".globl func_800F9448\n"
  ".type func_800F9448, @function\n"
  "func_800F9448:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED4C)($gp)\n\tlw $a0, %gp_rel(D_8019ED68)($gp)\n\tlhu $a2, 0x0($v0)\n\tlui $v0, %hi(D_800D0000)\n\tlbu $a0, 0x0($a0)\n\taddiu $v1, $a2, 0x1\n\tandi $a2, $v1, 0xFFFF\n\taddu $v0, $a2, $v0\n\tandi $a0, $a0, 0x7D\n\tlbu $a1, %lo(D_800D0000)($v0)\n\tlw $v1, %gp_rel(D_8019ED6C)($gp)\n\tandi $v0, $a1, 0x80\n\tor $a0, $v0, $a0\n\tsll $v0, $a1, 16\n\tbnez $a1, .L800F9490\n\tsw $v0, 0x0($v1)\n\tj .L800F9494\n\tori $a0, $a0, 0x2\n\t.L800F9490:\n\tandi $a0, $a0, 0xFF\n\t.L800F9494:\n\tlw $v0, %gp_rel(D_8019ED70)($gp)\n\tnop\n\tsb $a1, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tsb $a0, 0x0($v1)\n\tlw $v0, %gp_rel(D_8019ED4C)($gp)\n\tjr $ra\n\tsh $a2, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9448, .-func_800F9448\n"
);
