#include "common.h"
__asm__(
  ".globl func_8016B530\n"
  ".type func_8016B530, @function\n"
  "func_8016B530:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddu $a0, $zero, $zero\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $s0, 0x0($v1)\n\tjal func_8016D348\n\taddu $s2, $v0, $zero\n\tlbu $v1, 0x1E($s1)\n\taddu $s0, $s0, $s2\n\tsb $v1, 0x6C($s0)\n\tlbu $v0, 0x1F($s1)\n\tjal func_8016D2B0\n\tsb $v0, 0x6D($s0)\n\tlbu $v0, 0x1E($s1)\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tsb $v0, 0x6E($s0)\n\tlbu $v1, 0x1F($s1)\n\tlw $s1, 0x14($sp)\n\tsb $v1, 0x6F($s0)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016B530, .-func_8016B530\n"
);
