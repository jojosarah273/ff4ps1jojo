#include "common.h"
__asm__(
  ".globl func_80182CB4\n"
  ".type func_80182CB4, @function\n"
  "func_80182CB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $v1, %hi(D_800D1702)\n\tlbu $v1, %lo(D_800D1702)($v1)\n\taddiu $v0, $zero, 0x6C\n\tbne $v1, $v0, .L80182D50\n\taddu $a3, $a0, $zero\n\tlui $v0, %hi(D_800D1701)\n\tlbu $v0, %lo(D_800D1701)($v0)\n\tnop\n\tbnez $v0, .L80182D50\n\taddiu $v1, $zero, 0x1\n\tlui $v0, %hi(D_800D2105)\n\tlbu $v0, %lo(D_800D2105)($v0)\n\tnop\n\tandi $v0, $v0, 0x7\n\tbne $v0, $v1, .L80182D50\n\tnop\n\tlui $v0, %hi(D_800D0203)\n\tlbu $v0, %lo(D_800D0203)($v0)\n\tnop\n\tbnez $v0, .L80182D50\n\taddiu $a0, $a3, 0x70\n\tlui $v1, %hi(D_800D2100)\n\tlbu $v1, %lo(D_800D2100)($v1)\n\taddiu $a1, $a3, 0x300\n\tandi $v1, $v1, 0xF\n\tsll $v0, $v1, 5\n\tsubu $v0, $v0, $v1\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $v1\n\tsra $v0, $v0, 3\n\tandi $v0, $v0, 0xFFFF\n\tsb $v0, 0x304($a3)\n\tsb $v0, 0x305($a3)\n\tjal func_80197208\n\tsb $v0, 0x306($a3)\n\tj .L80182DCC\n\tnop\n\t.L80182D50:\n\tlui $v1, %hi(D_8019ED04)\n\tlbu $v1, %lo(D_8019ED04)($v1)\n\taddiu $v0, $zero, 0x1\n\tbne $v1, $v0, .L80182DCC\n\taddiu $a0, $a3, 0x70\n\taddiu $a1, $a3, 0x300\n\tlui $v0, %hi(D_800D0BDC)\n\tlbu $v0, %lo(D_800D0BDC)($v0)\n\tlui $v1, %hi(D_800D0BDB)\n\tlbu $v1, %lo(D_800D0BDB)($v1)\n\tlui $a2, %hi(D_800D0BDD)\n\tlbu $a2, %lo(D_800D0BDD)($a2)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tsll $a2, $a2, 16\n\tlui $v0, %hi(D_800D0BDE)\n\tlbu $v0, %lo(D_800D0BDE)($v0)\n\tor $v1, $v1, $a2\n\tsll $v0, $v0, 24\n\tor $v1, $v1, $v0\n\tsll $a2, $v1, 3\n\tsrl $v0, $v1, 2\n\tandi $v0, $v0, 0xF8\n\tsrl $v1, $v1, 7\n\tandi $v1, $v1, 0xF8\n\tsb $a2, 0x304($a3)\n\tsb $v0, 0x305($a3)\n\tjal func_80197208\n\tsb $v1, 0x306($a3)\n\tlui $at, %hi(D_8019ED04)\n\tsb $zero, %lo(D_8019ED04)($at)\n\t.L80182DCC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80182CB4, .-func_80182CB4\n"
);
