#include "common.h"
__asm__(
  ".globl func_8018E00C\n"
  ".type func_8018E00C, @function\n"
  "func_8018E00C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8018E2C8\n\taddu $a0, $zero, $zero\n\tlui $a0, %hi(D_801F67B4)\n\tlw $a0, %lo(D_801F67B4)($a0)\n\taddiu $v0, $zero, 0x43\n\tlui $at, %hi(D_8019B584)\n\tjal func_8018E448\n\tsw $v0, %lo(D_8019B584)($at)\n\tlui $a0, %hi(D_801F67B0)\n\tlw $a0, %lo(D_801F67B0)($a0)\n\tjal func_8018E4B8\n\tnop\n\tlui $v0, %hi(D_801F67D4)\n\tlw $v0, %lo(D_801F67D4)($v0)\n\tnop\n\tbeqz $v0, .L8018E060\n\tnop\n\tjal func_8018ABE8\n\taddiu $a0, $zero, 0x1\n\t.L8018E060:\n\tlui $v0, %hi(D_801F67AC)\n\tlw $v0, %lo(D_801F67AC)($v0)\n\tnop\n\tbeqz $v0, .L8018E0A0\n\taddiu $v0, $zero, 0x10\n\tlui $a0, %hi(D_8019B5A0)\n\tlw $a0, %lo(D_8019B5A0)($a0)\n\tnop\n\tbeqz $a0, .L8018E0A0\n\tnop\n\tlui $v0, %hi(D_801F67AC)\n\tlw $v0, %lo(D_801F67AC)($v0)\n\tnop\n\tjalr $v0\n\taddiu $a1, $zero, 0x8\n\taddiu $v0, $zero, 0x10\n\t.L8018E0A0:\n\tlui $at, %hi(D_8019B5A0)\n\tsw $zero, %lo(D_8019B5A0)($at)\n\tlui $at, %hi(D_8019B5A4)\n\tsw $zero, %lo(D_8019B5A4)($at)\n\tlui $at, %hi(D_8019B584)\n\tsw $v0, %lo(D_8019B584)($at)\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018E00C, .-func_8018E00C\n"
);
