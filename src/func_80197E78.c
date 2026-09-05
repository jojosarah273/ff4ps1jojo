#include "common.h"
__asm__(
  ".globl func_80197E78\n"
  ".type func_80197E78, @function\n"
  "func_80197E78:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $at, %hi(D_801FEC08)\n\tsw $ra, %lo(D_801FEC08)($at)\n\tjal func_801976E8\n\tnop\n\taddiu $t1, $zero, 0x57\n\taddiu $t2, $zero, 0xB0\n\tjalr $t2\n\tnop\n\taddiu $t2, $zero, 0x9\n\tlw $v0, 0x16C($v0)\n\tnop\n\taddi $v1, $v0, 0x62C /* handwritten instruction */\n\t.L80197EA8:\n\tsw $zero, 0x0($v1)\n\taddiu $v1, $v1, 0x4\n\taddiu $t2, $t2, -0x1\n\tbnez $t2, .L80197EA8\n\tnop\n\tjal func_80197608\n\tnop\n\tjal func_801976F8\n\tnop\n\tlui $ra, %hi(D_801FEC08)\n\tlw $ra, %lo(D_801FEC08)($ra)\n\tnop\n\tjr $ra\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197E78, .-func_80197E78\n"
);
