#include "common.h"
__asm__(
  ".globl func_800F9538\n"
  ".type func_800F9538, @function\n"
  "func_800F9538:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED4C)($gp)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlhu $a0, 0x0($v0)\n\tlui $v0, %hi(D_800D0000)\n\taddiu $a0, $a0, 0x1\n\tandi $a0, $a0, 0xFFFF\n\taddu $v0, $a0, $v0\n\tlbu $v1, %lo(D_800D0000)($v0)\n\tnop\n\tsb $v1, 0x0($a1)\n\tlw $v0, %gp_rel(D_8019ED4C)($gp)\n\tjr $ra\n\tsh $a0, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9538, .-func_800F9538\n"
);
