#include "common.h"
__asm__(
  ".globl func_801946A0\n"
  ".type func_801946A0, @function\n"
  "func_801946A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tlui $a0, %hi(D_800F3958)\n\taddiu $a0, $a0, %lo(D_800F3958)\n\tsw $ra, 0x18($sp)\n\tjal func_801943FC\n\taddu $a1, $s0, $zero\n\taddu $a1, $s0, $zero\n\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\taddiu $a2, $zero, 0x8\n\tlw $a0, 0x1C($v0)\n\tlw $v0, 0x8($v0)\n\tnop\n\tjalr $v0\n\taddu $a3, $s1, $zero\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801946A0, .-func_801946A0\n"
);
