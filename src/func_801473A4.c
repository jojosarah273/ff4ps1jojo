#include "common.h"
__asm__(
  ".globl func_801473A4\n"
  ".type func_801473A4, @function\n"
  "func_801473A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xF\n\tjal func_800F5140\n\tnop\n\tlui $a0, (0x16FC86 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x16FC86 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2A\n\tlui $a0, (0x16FC87 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x16FC87 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2B\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801473A4, .-func_801473A4\n"
);
