#include "common.h"
__asm__(
  ".globl func_80178D00\n"
  ".type func_80178D00, @function\n"
  "func_80178D00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_8019FFE8)\n\taddiu $s0, $s0, %lo(D_8019FFE8)\n\taddu $a1, $s0, $zero\n\taddu $a2, $zero, $zero\n\taddiu $v0, $zero, 0x1F\n\tsw $ra, 0x18($sp)\n\tjal func_8017E794\n\tsb $v0, 0xC($s0)\n\taddu $a0, $s1, $zero\n\taddu $a1, $s0, $zero\n\taddu $a2, $zero, $zero\n\taddiu $v0, $zero, 0x16\n\tjal func_8017E794\n\tsb $v0, 0xC($s0)\n\taddu $a0, $s1, $zero\n\taddu $a1, $s0, $zero\n\taddu $a2, $zero, $zero\n\taddiu $v0, $zero, 0x23\n\tjal func_8017E794\n\tsb $v0, 0xC($s0)\n\taddu $a0, $s1, $zero\n\taddu $a1, $s0, $zero\n\taddu $a2, $zero, $zero\n\taddiu $v0, $zero, 0x1A\n\tjal func_8017E794\n\tsb $v0, 0xC($s0)\n\taddu $a0, $s1, $zero\n\taddu $a1, $s0, $zero\n\taddu $a2, $zero, $zero\n\taddiu $v0, $zero, 0x11\n\tjal func_8017E794\n\tsb $v0, 0xC($s0)\n\taddu $a0, $s1, $zero\n\taddu $a1, $s0, $zero\n\taddu $a2, $zero, $zero\n\taddiu $v0, $zero, 0x8\n\tjal func_8017E794\n\tsb $v0, 0xC($s0)\n\taddu $a0, $s1, $zero\n\taddu $a1, $s0, $zero\n\taddu $a2, $zero, $zero\n\tjal func_8017E794\n\tsb $zero, 0xC($s0)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80178D00, .-func_80178D00\n"
);
