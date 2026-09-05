#include "common.h"
__asm__(
  ".globl func_8018A140\n"
  ".type func_8018A140, @function\n"
  "func_8018A140:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B104)\n\tlw $v0, %lo(D_8019B104)($v0)\n\taddiu $sp, $sp, -0x18\n\tbnez $v0, .L8018A1A0\n\tsw $ra, 0x10($sp)\n\taddiu $v0, $zero, 0x1\n\tlui $at, %hi(D_8019B104)\n\tjal func_801976E8\n\tsw $v0, %lo(D_8019B104)($at)\n\tlui $a0, %hi(func_8018A5F8)\n\tjal func_8018ACF8\n\taddiu $a0, $a0, %lo(func_8018A5F8)\n\tlui $a0, (0xF0000009 >> 16)\n\tori $a0, $a0, (0xF0000009 & 0xFFFF)\n\taddiu $a1, $zero, 0x20\n\taddiu $a2, $zero, 0x2000\n\tjal func_80197658\n\taddu $a3, $zero, $zero\n\taddu $a0, $v0, $zero\n\tlui $at, %hi(D_8019B09C)\n\tjal func_80197698\n\tsw $a0, %lo(D_8019B09C)($at)\n\tjal func_801976F8\n\tnop\n\t.L8018A1A0:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018A140, .-func_8018A140\n"
);
