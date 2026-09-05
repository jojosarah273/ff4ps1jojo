#include "common.h"
__asm__(
  ".globl func_8018AA60\n"
  ".type func_8018AA60, @function\n"
  "func_8018AA60:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a1, $zero\n\tlui $v0, %hi(D_8019B12C)\n\tlhu $v0, %lo(D_8019B12C)($v0)\n\tlui $a1, %hi(D_8019B13C)\n\tlw $a1, %lo(D_8019B13C)($a1)\n\taddiu $a0, $zero, 0x2\n\tsw $ra, 0x18($sp)\n\tjal func_8018A75C\n\tsllv $a1, $v0, $a1\n\tjal func_8018A75C\n\taddu $a0, $zero, $zero\n\taddiu $a0, $zero, 0x3\n\taddu $a1, $s1, $zero\n\tjal func_8018A75C\n\taddu $a2, $s0, $zero\n\taddu $v0, $s0, $zero\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018AA60, .-func_8018AA60\n"
);
