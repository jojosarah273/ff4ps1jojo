#include "common.h"
__asm__(
  ".globl func_8018A6B4\n"
  ".type func_8018A6B4, @function\n"
  "func_8018A6B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B114)\n\tlw $v0, %lo(D_8019B114)($v0)\n\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s0, 0x10($sp)\n\tsw $ra, 0x18($sp)\n\tsh $a1, 0x1A6($v0)\n\tjal func_8018AC90\n\taddu $s0, $a2, $zero\n\tlui $v1, %hi(D_8019B114)\n\tlw $v1, %lo(D_8019B114)($v1)\n\tnop\n\tlhu $v0, 0x1AA($v1)\n\tnop\n\tori $v0, $v0, 0x30\n\tsh $v0, 0x1AA($v1)\n\tjal func_8018AC90\n\tsll $s0, $s0, 16\n\tjal func_8018AC68\n\tnop\n\tlui $a0, (0x1000200 >> 16)\n\tori $a0, $a0, (0x1000200 & 0xFFFF)\n\tlui $v0, %hi(D_8019B118)\n\tlw $v0, %lo(D_8019B118)($v0)\n\tnop\n\tsw $s1, 0x0($v0)\n\tlui $v0, %hi(D_8019B11C)\n\tlw $v0, %lo(D_8019B11C)($v0)\n\tori $s0, $s0, 0x10\n\tsw $s0, 0x0($v0)\n\tlui $v1, %hi(D_8019B120)\n\tlw $v1, %lo(D_8019B120)($v1)\n\taddiu $v0, $zero, 0x1\n\tlui $at, %hi(D_8019B164)\n\tsw $v0, %lo(D_8019B164)($at)\n\tsw $a0, 0x0($v1)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018A6B4, .-func_8018A6B4\n"
);
