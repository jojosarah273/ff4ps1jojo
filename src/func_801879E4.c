#include "common.h"
__asm__(
  ".globl func_801879E4\n"
  ".type func_801879E4, @function\n"
  "func_801879E4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlh $a0, %gp_rel(D_8019EF0A)($gp)\n\taddiu $v0, $zero, 0x10\n\tbeq $a0, $v0, .L80187A04\n\taddiu $v1, $zero, 0x1\n\tbeq $a0, $v1, .L80187A08\n\taddu $v0, $zero, $zero\n\tjr $ra\n\taddiu $v0, $zero, -0x1\n\t.L80187A04:\n\taddiu $v0, $zero, 0x1\n\t.L80187A08:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801879E4, .-func_801879E4\n"
);
