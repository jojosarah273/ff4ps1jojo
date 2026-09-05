#include "common.h"
__asm__(
  ".globl func_80197458\n"
  ".type func_80197458, @function\n"
  "func_80197458:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $at, %hi(D_801FEBA8)\n\tsw $a0, %lo(D_801FEBA8)($at)\n\tjr $ra\n\taddu $v0, $zero, $zero\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197458, .-func_80197458\n"
);
