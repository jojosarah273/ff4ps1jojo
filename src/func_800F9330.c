#include "common.h"
__asm__(
  ".globl func_800F9330\n"
  ".type func_800F9330, @function\n"
  "func_800F9330:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a1, (0x800C8000 >> 16)\n\tori $a1, $a1, (0x800C8000 & 0xFFFF)\n\tlui $v1, %hi(D_800D0000)\n\tlw $a2, %gp_rel(D_8019ED4C)($gp)\n\tlw $a3, %gp_rel(D_8019ED54)($gp)\n\tlhu $a0, 0x0($a2)\n\tlhu $v0, 0x0($a3)\n\taddu $v1, $a0, $v1\n\taddu $a1, $a0, $a1\n\tsb $v0, %lo(D_800D0000)($v1)\n\tsrl $v0, $v0, 8\n\tsb $v0, 0x7FFF($a1)\n\tlw $v1, %gp_rel(D_8019ED4C)($gp)\n\taddiu $a0, $a0, -0x2\n\tjr $ra\n\tsh $a0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9330, .-func_800F9330\n"
);
