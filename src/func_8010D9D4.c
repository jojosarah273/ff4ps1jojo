#include "common.h"
__asm__(
  ".globl func_8010D9D4\n"
  ".type func_8010D9D4, @function\n"
  "func_8010D9D4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tlui $a0, (0x14EE00 >> 16)\n\tori $a0, $a0, (0x14EE00 & 0xFFFF)\n\taddu $s1, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tjal func_800F9330\n\taddu $s0, $v0, $zero\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlbu $v0, 0x78($s1)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v0, 0x0($a0)\n\tnop\n\tsh $v0, 0x0($a1)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $s0, $s0, $v0\n\tlbu $v1, 0x0($s0)\n\tnop\n\tsb $v1, 0x0($a0)\n\tlbu $v0, 0x78($s1)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tjal func_800F95A0\n\tsb $v0, 0x78($s1)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010D9D4, .-func_8010D9D4\n"
);
