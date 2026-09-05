#include "common.h"
__asm__(
  ".globl func_80197D80\n"
  ".type func_80197D80, @function\n"
  "func_80197D80:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $at, %hi(D_801FEBF8)\n\tsw $ra, %lo(D_801FEBF8)($at)\n\tjal func_801976E8\n\tnop\n\taddiu $t1, $zero, 0x57\n\taddiu $t2, $zero, 0xB0\n\tjalr $t2\n\tnop\n\tlw $v0, 0x16C($v0)\n\taddiu $t1, $zero, 0xB\n\taddi $v1, $v0, 0x884 /* handwritten instruction */\n\tlui $at, %hi(jtbl_801FEC00)\n\tsw $v1, %lo(jtbl_801FEC00)($at)\n\taddi $v1, $v0, 0x894 /* handwritten instruction */\n\tlui $at, %hi(jtbl_801FEC04)\n\tsw $v1, %lo(jtbl_801FEC04)($at)\n\t.L80197DC0:\n\tsw $zero, 0x594($v0)\n\taddiu $v0, $v0, 0x4\n\taddiu $t1, $t1, -0x1\n\tbnez $t1, .L80197DC0\n\tnop\n\tjal func_80197608\n\tnop\n\tlui $ra, %hi(D_801FEBF8)\n\tlw $ra, %lo(D_801FEBF8)($ra)\n\tnop\n\tjr $ra\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197D80, .-func_80197D80\n"
);
