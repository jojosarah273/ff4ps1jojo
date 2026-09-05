#include "common.h"
__asm__(
  ".globl func_8010D2A0\n"
  ".type func_8010D2A0, @function\n"
  "func_8010D2A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tlui $a0, (0x7F4C00 >> 16)\n\tori $a0, $a0, (0x7F4C00 & 0xFFFF)\n\taddu $s1, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tjal func_800F9330\n\taddu $s0, $v0, $zero\n\tjal func_8010D54C\n\tnop\n\tlui $v1, %hi(D_8019ED5C)\n\tlw $v1, %lo(D_8019ED5C)($v1)\n\tlbu $v0, 0x3D($s1)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED5C)\n\tlw $a0, %lo(D_8019ED5C)($a0)\n\tlbu $v0, 0x3E($s1)\n\tnop\n\tsb $v0, 0x1($a0)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tsb $zero, 0x0($v1)\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlhu $a0, 0x0($v0)\n\tlbu $a1, 0x0($v1)\n\taddu $s0, $s0, $a0\n\tjal func_800F95A0\n\tsb $a1, 0x0($s0)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010D2A0, .-func_8010D2A0\n"
);
