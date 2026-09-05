#include "common.h"
__asm__(
  ".globl func_8018A9DC\n"
  ".type func_8018A9DC, @function\n"
  "func_8018A9DC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B130)\n\tlw $v0, %lo(D_8019B130)($v0)\n\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a1, $zero\n\tbnez $v0, .L8018AA3C\n\tsw $ra, 0x18($sp)\n\tlui $v0, %hi(D_8019B12C)\n\tlhu $v0, %lo(D_8019B12C)($v0)\n\tlui $a1, %hi(D_8019B13C)\n\tlw $a1, %lo(D_8019B13C)($a1)\n\taddiu $a0, $zero, 0x2\n\tjal func_8018A75C\n\tsllv $a1, $v0, $a1\n\tjal func_8018A75C\n\taddiu $a0, $zero, 0x1\n\taddiu $a0, $zero, 0x3\n\taddu $a1, $s1, $zero\n\tjal func_8018A75C\n\taddu $a2, $s0, $zero\n\tj .L8018AA4C\n\taddu $v0, $s0, $zero\n\t.L8018AA3C:\n\taddu $a0, $s1, $zero\n\tjal func_8018A438\n\taddu $a1, $s0, $zero\n\taddu $v0, $s0, $zero\n\t.L8018AA4C:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018A9DC, .-func_8018A9DC\n"
);
