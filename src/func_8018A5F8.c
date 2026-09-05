#include "common.h"
__asm__(
  ".globl func_8018A5F8\n"
  ".type func_8018A5F8, @function\n"
  "func_8018A5F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B164)\n\tlw $v0, %lo(D_8019B164)($v0)\n\taddiu $sp, $sp, -0x18\n\tbnez $v0, .L8018A614\n\tsw $ra, 0x10($sp)\n\tjal func_8018AC90\n\tnop\n\t.L8018A614:\n\tlui $a0, %hi(D_8019B114)\n\tlw $a0, %lo(D_8019B114)($a0)\n\tnop\n\tlhu $v0, 0x1AA($a0)\n\tnop\n\tandi $v0, $v0, 0xFFCF\n\tsh $v0, 0x1AA($a0)\n\tlhu $v0, 0x1AA($a0)\n\tnop\n\tandi $v0, $v0, 0x30\n\tbeqz $v0, .L8018A668\n\taddu $v1, $zero, $zero\n\taddiu $v1, $v1, 0x1\n\t.L8018A648:\n\tsltiu $v0, $v1, 0xF01\n\tbeqz $v0, .L8018A668\n\tnop\n\tlhu $v0, 0x1AA($a0)\n\tnop\n\tandi $v0, $v0, 0x30\n\tbnez $v0, .L8018A648\n\taddiu $v1, $v1, 0x1\n\t.L8018A668:\n\tlui $v0, %hi(D_8019B14C)\n\tlw $v0, %lo(D_8019B14C)($v0)\n\tnop\n\tbeqz $v0, .L8018A698\n\tlui $a0, (0xF0000009 >> 16)\n\tlui $v0, %hi(D_8019B14C)\n\tlw $v0, %lo(D_8019B14C)($v0)\n\tnop\n\tjalr $v0\n\tnop\n\tj .L8018A6A4\n\tnop\n\t.L8018A698:\n\tori $a0, $a0, (0xF0000009 & 0xFFFF)\n\tjal func_80197648\n\taddiu $a1, $zero, 0x20\n\t.L8018A6A4:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018A5F8, .-func_8018A5F8\n"
);
