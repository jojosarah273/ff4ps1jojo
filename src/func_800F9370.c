#include "common.h"
__asm__(
  ".globl func_800F9370\n"
  ".type func_800F9370, @function\n"
  "func_800F9370:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_800D0000)\n\tlw $a0, %gp_rel(D_8019ED4C)($gp)\n\tlw $a1, %gp_rel(D_8019ED60)($gp)\n\tlhu $v0, 0x0($a0)\n\tlbu $a2, 0x0($a1)\n\taddu $v1, $v0, $v1\n\tsb $a2, %lo(D_800D0000)($v1)\n\tlw $a0, %gp_rel(D_8019ED4C)($gp)\n\taddiu $v0, $v0, -0x1\n\tjr $ra\n\tsh $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9370, .-func_800F9370\n"
);
