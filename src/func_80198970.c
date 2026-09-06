#include "common.h"
__asm__(
  ".globl func_80198970\n"
  ".type func_80198970, @function\n"
  "func_80198970:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbeqz $a0, .L80198980\n\tlui $v0, 0x8000\n\tj .L80198984\n\txor $v0, $a0, $v0\n\t.L80198980:\n\taddu $v0, $zero, $zero\n\t.L80198984:\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80198970, .-func_80198970\n"
);
