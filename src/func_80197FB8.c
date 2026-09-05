#include "common.h"
__asm__(
  ".globl func_80197FB8\n"
  ".type func_80197FB8, @function\n"
  "func_80197FB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbgez $a0, .L80197FC4\n\tnop\n\tnegu $a0, $a0\n\t.L80197FC4:\n\tandi $a0, $a0, 0xFFF\n\tslti $v0, $a0, 0x801\n\tbeqz $v0, .L80198010\n\tslti $v0, $a0, 0x401\n\tbeqz $v0, .L80197FF8\n\taddiu $v0, $zero, 0x400\n\tsubu $v0, $v0, $a0\n\tsll $v0, $v0, 1\n\tlui $at, %hi(D_8019DCC4)\n\taddu $at, $at, $v0\n\tlh $v0, %lo(D_8019DCC4)($at)\n\tj .L80198050\n\tnop\n\t.L80197FF8:\n\tsll $v0, $a0, 1\n\tlui $at, %hi(D_8019D4C4)\n\taddu $at, $at, $v0\n\tlh $v0, %lo(D_8019D4C4)($at)\n\tj .L80198050\n\tnegu $v0, $v0\n\t.L80198010:\n\tslti $v0, $a0, 0xC01\n\tbnez $v0, .L80198034\n\taddiu $v0, $zero, 0xC00\n\tsll $v0, $a0, 1\n\tlui $at, %hi(D_8019C4C4)\n\taddu $at, $at, $v0\n\tlh $v0, %lo(D_8019C4C4)($at)\n\tj .L80198050\n\tnop\n\t.L80198034:\n\tsubu $v0, $v0, $a0\n\tsll $v0, $v0, 1\n\tlui $at, %hi(D_8019DCC4)\n\taddu $at, $at, $v0\n\tlh $v0, %lo(D_8019DCC4)($at)\n\tnop\n\tnegu $v0, $v0\n\t.L80198050:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197FB8, .-func_80197FB8\n"
);
