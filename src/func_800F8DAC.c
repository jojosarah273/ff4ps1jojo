#include "common.h"
__asm__(
  ".globl func_800F8DAC\n"
  ".type func_800F8DAC, @function\n"
  "func_800F8DAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\tandi $a0, $a0, 0xFFFF\n\tlw $v1, %gp_rel(D_8019ED60)($gp)\n\tlw $a0, %gp_rel(D_8019ED5C)($gp)\n\tlw $ra, 0x10($sp)\n\tlbu $a1, 0x0($v1)\n\tlbu $a2, 0x0($a0)\n\taddu $v0, $v0, $a1\n\tsb $a2, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F8DAC, .-func_800F8DAC\n"
);
