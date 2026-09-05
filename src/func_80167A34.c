#include "common.h"
__asm__(
  ".globl func_80167A34\n"
  ".type func_80167A34, @function\n"
  "func_80167A34:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF406\n\tjal func_800F8D00\n\tsh $v1, 0x0($a1)\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF408\n\t.L80167A74:\n\tjal func_80070174\n\tnop\n\tjal func_80140310\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9644\n\tsh $v1, 0x0($a1)\n\tlui $a0, (0x13FCC5 >> 16)\n\tjal func_800F6CF4\n\tori $a0, $a0, (0x13FCC5 & 0xFFFF)\n\tjal func_800F81B0\n\tori $a0, $zero, 0xF406\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80167A74\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF406\n\tjal func_800F8D00\n\tsh $v1, 0x0($a1)\n\tjal func_80140310\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80167A34, .-func_80167A34\n"
);
