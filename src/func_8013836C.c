#include "common.h"
__asm__(
  ".globl func_8013836C\n"
  ".type func_8013836C, @function\n"
  "func_8013836C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, (0x800D1000 >> 16)\n\tori $v1, $v1, (0x800D1000 & 0xFFFF)\n\tlui $v0, %hi(D_801CF568)\n\taddiu $a1, $v0, %lo(D_801CF568)\n\taddiu $a2, $zero, 0x7FF\n\t.L80138380:\n\tbnez $a0, .L80138394\n\tnop\n\tlbu $v0, 0x0($v1)\n\tj .L801383A0\n\tsb $v0, 0x0($a1)\n\t.L80138394:\n\tlbu $v0, 0x0($a1)\n\tnop\n\tsb $v0, 0x0($v1)\n\t.L801383A0:\n\taddiu $v1, $v1, 0x1\n\taddiu $a2, $a2, -0x1\n\tbgez $a2, .L80138380\n\taddiu $a1, $a1, 0x1\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013836C, .-func_8013836C\n"
);
