#include "common.h"
__asm__(
  ".globl func_8019492C\n"
  ".type func_8019492C, @function\n"
  "func_8019492C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tlw $v0, 0x3C($v0)\n\tlbu $s1, 0x3($s0)\n\tjalr $v0\n\taddu $a0, $zero, $zero\n\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\taddiu $a0, $s0, 0x4\n\tlw $v0, 0x14($v0)\n\tnop\n\tjalr $v0\n\taddu $a1, $s1, $zero\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019492C, .-func_8019492C\n"
);
