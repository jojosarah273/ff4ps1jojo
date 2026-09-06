#include "common.h"
__asm__(
  ".globl func_800F916C\n"
  ".type func_800F916C, @function\n"
  "func_800F916C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a1, 0x800C\n\tlw $a2, %gp_rel(D_8019ED4C)($gp)\n\tori $a1, $a1, 0x8000\n\tlhu $v1, 0x0($a2)\n\tlui $v0, %hi(D_800D0000)\n\taddu $v0, $v1, $v0\n\taddu $a1, $v1, $a1\n\tsb $a0, %lo(D_800D0000)($v0)\n\tsra $a0, $a0, 8\n\tsb $a0, 0x7FFF($a1)\n\tlw $v0, %gp_rel(D_8019ED4C)($gp)\n\taddiu $v1, $v1, -0x2\n\tjr $ra\n\tsh $v1, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F916C, .-func_800F916C\n"
);
