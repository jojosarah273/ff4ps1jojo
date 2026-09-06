#include "common.h"
__asm__(
  ".globl func_80187C54\n"
  ".type func_80187C54, @function\n"
  "func_80187C54:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80187C5C:\n\tjal func_801928E8\n\taddu $a0, $zero, $zero\n\taddu $a0, $zero, $zero\n\tjal func_8018746C\n\taddu $a1, $zero, $zero\n\tlh $v0, %gp_rel(D_8019EEB8)($gp)\n\tnop\n\tbgtz $v0, .L80187C5C\n\taddiu $v0, $zero, 0x1\n\tlhu $v1, %gp_rel(D_8019EF0C)($gp)\n\tlw $ra, 0x10($sp)\n\tsw $zero, %gp_rel(D_8019EF28)($gp)\n\tsw $v0, %gp_rel(D_8019EF24)($gp)\n\tsh $v1, %gp_rel(D_8019EEF6)($gp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187C54, .-func_80187C54\n"
);
