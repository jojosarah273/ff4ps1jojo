#include "common.h"
__asm__(
  ".globl func_80197F24\n"
  ".type func_80197F24, @function\n"
  "func_80197F24:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tslti $v0, $a0, 0x801\n\tbeqz $v0, .L80197F6C\n\tslti $v0, $a0, 0x401\n\tbeqz $v0, .L80197F4C\n\tsll $v0, $a0, 1\n\tlui $at, %hi(D_8019DCC4)\n\taddu $at, $at, $v0\n\tlh $v0, %lo(D_8019DCC4)($at)\n\tj .L80197FAC\n\tnop\n\t.L80197F4C:\n\taddiu $v0, $zero, 0x800\n\tsubu $v0, $v0, $a0\n\tsll $v0, $v0, 1\n\tlui $at, %hi(D_8019DCC4)\n\taddu $at, $at, $v0\n\tlh $v0, %lo(D_8019DCC4)($at)\n\tj .L80197FAC\n\tnop\n\t.L80197F6C:\n\tslti $v0, $a0, 0xC01\n\tbnez $v0, .L80197F98\n\tsll $v0, $a0, 1\n\taddiu $v0, $zero, 0x1000\n\tsubu $v0, $v0, $a0\n\tsll $v0, $v0, 1\n\tlui $at, %hi(D_8019DCC4)\n\taddu $at, $at, $v0\n\tlh $v0, %lo(D_8019DCC4)($at)\n\tj .L80197FAC\n\tnegu $v0, $v0\n\t.L80197F98:\n\tlui $at, %hi(D_8019CCC4)\n\taddu $at, $at, $v0\n\tlh $v0, %lo(D_8019CCC4)($at)\n\tnop\n\tnegu $v0, $v0\n\t.L80197FAC:\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197F24, .-func_80197F24\n"
);
