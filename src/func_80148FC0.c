#include "common.h"
__asm__(
  ".globl func_80148FC0\n"
  ".type func_80148FC0, @function\n"
  "func_80148FC0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlui $a0, (0x1CFF00 >> 16)\n\tsw $ra, 0x10($sp)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x1CFF00 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L8014906C\n\taddiu $a0, $zero, 0x26\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tnor $v0, $zero, $v0\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_80072720\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2B\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tnor $v0, $zero, $v0\n\tjal func_800F61E8\n\tsb $v0, 0x0($v1)\n\tjal func_800F60A8\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80149094\n\tnop\n\t.L8014905C:\n\tjal func_800F5480\n\tnop\n\tj .L8014909C\n\tnop\n\t.L8014906C:\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x26\n\tjal func_80072720\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2B\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L8014905C\n\tnop\n\t.L80149094:\n\tjal func_800F5410\n\tnop\n\t.L8014909C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80148FC0, .-func_80148FC0\n"
);
