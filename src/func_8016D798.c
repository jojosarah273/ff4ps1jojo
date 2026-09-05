#include "common.h"
__asm__(
  ".globl func_8016D798\n"
  ".type func_8016D798, @function\n"
  "func_8016D798:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x42\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8016D7E0\n\tnop\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x39\n\tjal func_800F63BC\n\tnop\n\tj .L8016D840\n\tnop\n\t.L8016D7E0:\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xF\n\tjal func_800F5140\n\tnop\n\tlui $a0, (0x16FA40 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x16FA40 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x39\n\tlui $a0, (0x16FA41 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x16FA41 & 0xFFFF)\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F63BC\n\tnop\n\t.L8016D840:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016D798, .-func_8016D798\n"
);
