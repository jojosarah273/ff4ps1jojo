#include "common.h"
__asm__(
  ".globl func_8018F298\n"
  ".type func_8018F298, @function\n"
  "func_8018F298:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $at, %hi(D_801F6AF0)\n\tsw $ra, %lo(D_801F6AF0)($at)\n\taddiu $t1, $zero, 0x57\n\taddiu $t2, $zero, 0xB0\n\tjalr $t2\n\tnop\n\taddiu $t2, $zero, 0x9\n\tlw $v0, 0x16C($v0)\n\tnop\n\taddi $v1, $v0, 0x1988 /* handwritten instruction */\n\tjal func_80197608\n\tsw $zero, 0x0($v1)\n\tlui $ra, %hi(D_801F6AF0)\n\tlw $ra, %lo(D_801F6AF0)($ra)\n\tnop\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F298, .-func_8018F298\n"
);
