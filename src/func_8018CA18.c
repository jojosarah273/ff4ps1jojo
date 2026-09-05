#include "common.h"
__asm__(
  ".globl func_8018CA18\n"
  ".type func_8018CA18, @function\n"
  "func_8018CA18:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a0, .L8018CA30\n\taddiu $v0, $zero, 0x1\n\tbne $a0, $v0, .L8018CA34\n\taddu $v0, $zero, $zero\n\tj .L8018CA34\n\taddiu $v0, $zero, 0x1\n\t.L8018CA30:\n\taddu $v0, $zero, $zero\n\t.L8018CA34:\n\tlui $at, %hi(D_8019B0A4)\n\tsw $a0, %lo(D_8019B0A4)($at)\n\tlui $at, %hi(D_8019B130)\n\tjr $ra\n\tsw $v0, %lo(D_8019B130)($at)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018CA18, .-func_8018CA18\n"
);
