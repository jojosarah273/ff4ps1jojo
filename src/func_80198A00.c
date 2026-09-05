#include "common.h"
__asm__(
  ".globl func_80198A00\n"
  ".type func_80198A00, @function\n"
  "func_80198A00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\t.word 0x01020100 # sll $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>\n\tsra $zero, $v1, 12\n\taddi $zero, $t7, -0x33C0 /* handwritten instruction */\n\taddi $at, $t7, -0x33B8 /* handwritten instruction */\n\taddi $v0, $t7, -0x33B0 /* handwritten instruction */\n\taddi $v1, $t7, -0x33A8 /* handwritten instruction */\n\taddi $a0, $t7, -0x33A0 /* handwritten instruction */\n\taddi $a1, $t7, -0x3398 /* handwritten instruction */\n\taddi $a2, $t7, -0x3390 /* handwritten instruction */\n\taddi $a3, $t7, -0x3388 /* handwritten instruction */\n\taddi $t0, $t7, -0x3380 /* handwritten instruction */\n\taddi $t1, $t7, -0x3378 /* handwritten instruction */\n\taddi $t2, $t7, -0x3370 /* handwritten instruction */\n\taddi $t3, $t7, -0x3368 /* handwritten instruction */\n\taddi $t4, $t7, -0x3360 /* handwritten instruction */\n\taddi $t5, $t7, -0x3358 /* handwritten instruction */\n\taddi $t6, $t7, -0x3350 /* handwritten instruction */\n\taddi $t7, $t7, -0x3348 /* handwritten instruction */\n\taddi $s0, $t7, -0x3340 /* handwritten instruction */\n\taddi $s1, $t7, -0x333F /* handwritten instruction */\n\taddi $s2, $t7, -0x333E /* handwritten instruction */\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80198A00, .-func_80198A00\n"
);
