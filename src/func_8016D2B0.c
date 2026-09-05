#include "common.h"
__asm__(
  ".globl func_8016D2B0\n"
  ".type func_8016D2B0, @function\n"
  "func_8016D2B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\tjal func_800F9330\n\taddu $s0, $v0, $zero\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a1, 0x0($v0)\n\tnop\n\taddu $a1, $a1, $s0\n\tlbu $v0, 0x80($a1)\n\tnop\n\tsb $v0, 0x18($s1)\n\tlbu $v1, 0x81($a1)\n\tnop\n\tsb $v1, 0x19($s1)\n\tlbu $a0, 0x1($a1)\n\tlbu $v0, 0x0($a1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tsll $a0, $a0, 8\n\tor $v0, $v0, $a0\n\tjal func_8016D3E0\n\tsh $v0, 0x0($v1)\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016D2B0, .-func_8016D2B0\n"
);
